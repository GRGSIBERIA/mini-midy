#pragma once
#include <string>
#include <list>

#include "FormatBase.hpp"
#include "DeltaTime.hpp"
#include "Track.hpp"


namespace mmidy
{
	namespace Format
	{
		/**
		* @brief MIDI�t�@�C���̃w�b�_���
		*/
		class Header : public FormatBase
		{
		private:
			std::string magic_code;
			size_t data_size;
			ushrot format;
			ushrot number_of_tracks;
			DeltaTime delta_time;

			std::list<Track> tracks;

		private:
			void CreateTracks(const ushrot number_of_tracks)
			{
				tracks = std::list<Track>();
			}

		public:
		};
	}
}