#pragma once
#include <string>

#include "FormatBase.hpp"
#include "DeltaTime.hpp"


namespace mmidy
{
	namespace Format
	{
		/**
		* @brief MIDI�t�@�C���̃w�b�_���
		*/
		class Header : public FormatBase
		{
		public:
			std::string magic_code;
			size_t data_size;
			ushrot format;
			ushrot number_of_tracks;
			DeltaTime delta_time;

		public:

		};
	}
}