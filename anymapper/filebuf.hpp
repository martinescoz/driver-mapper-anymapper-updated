#pragma once
#include <windows.h>
#include <filesystem>
#include <fstream>

namespace filebuf
{
	bool copy_file_to_buffer( const std::wstring_view file_path, std::vector< uin