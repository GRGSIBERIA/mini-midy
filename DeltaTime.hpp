#pragma once

namespace mmidy
{
	namespace Format
	{
		enum DeltaTimeType
		{
			Relate,
			Absolute
		};

		class DeltaTime
		{
			DeltaTimeType delta_type;
			unsigned short resolution;

		public:
			/**
			* �f���^�^�C��
			* @params delta_bin �f���^�^�C���̃o�C�i���l
			*/
			DeltaTime(const unsigned short delta_bin)
			{
				unsigned short actual_data = delta_bin;

				if (delta_bin & 0x8000 != 1)
				{
					delta_type = DeltaTimeType::Relate;
					actual_data -= 0x8000;
				}
				else
				{
					delta_type = DeltaTimeType::Absolute;
				}

				resolution = actual_data;
			}
		};
	}
}