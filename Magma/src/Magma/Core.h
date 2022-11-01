#pragma once

#ifdef MG_PLATFORM_WINDOWS
	#ifdef MG_BUILD_DLL
		#define MAGMA_API __declspec(dllexport)
	#else
		#define MAGMA_API __declspec(dllimport)
	#endif
#else
	#error Magma Only Supports Windows!
#endif