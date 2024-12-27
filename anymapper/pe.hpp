#pragma once
#include <windows.h>
#include <string>
#include <cstdint>

namespace pe
{
	class pe
	{
	public:
		using pre_callback_t = bool( * )( std::string_view module_name );
		using post_callback_t = 
			bool( * )( 
				std::string_view module_name,
				void* func_addr,
				std::string_view func_name );

		void* image_base;
		std::size_t image_size;
		PIMAGE_DOS_HEADER pdos_header;
		PIMAGE_NT_HEADERS pnt_headers;

		pe( void* image_buffer );
	