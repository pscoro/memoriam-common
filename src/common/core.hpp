#pragma once

#ifdef MM_PLATFORM_WINDOWS
	#ifdef MM_BUILD_DLL
		#define MM_API __declspec(dllexport)
	#else
		#define MM_API __declspec(dllimport)
	#endif // MM_BUILD_DLL
#else 
	#error NOT TESTED OUTSIDE WINDOWS YET
#endif // MM_PLATFORM_WINDOWS
