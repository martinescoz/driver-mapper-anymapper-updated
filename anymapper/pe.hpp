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

		void