#pragma once
#include <string>
#include <fstream>
#include <memory>

namespace mmidy
{
	typedef std::shared_ptr<char> MIDIFile;

	void Save(const MIDIFile& save_file, const std::string& file_path)
	{
		
	}

	/**
	* ����̃p�X����t�@�C����ǂݍ���
	* \params file_path �ǂݍ��݂����t�@�C���̃p�X
	* \return �t�@�C���{��
	*/
	MIDIFile Load(const std::string& file_path)
	{
		std::ifstream infile;
		infile.open(file_path, std::ios::binary | std::ios::in);

		const size_t file_size = (size_t)infile.seekg(0, std::ios::end).tellg();
		MIDIFile result(new char[file_size]);

		infile.read(&(*result), file_size);

		infile.close();

		return result;
	}
}