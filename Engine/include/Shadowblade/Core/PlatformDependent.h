#pragma once

#if defined(_WIN32)
	#if defined(_WIN64)
		#define SB_PLATFORM_WINDOWS
		
		#ifdef EXPORT_SYMBOLS
			#define SB_API __declspec(dllexport)
		#else
			#define SB_API __declspec(dllimport)
		#endif
	#else
		#error "32-bit builds are not supported"
	#endif

#elif defined(__APPLE__) || defined(__MACH__)
	#define SB_API
	#include <TargetConditionals.h>
	#if TARGET_IPHONE_SIMULATOR == 1
		#error "IOS simulator is not supported"
	#elif TARGET_OS_PHONE == 1
		#error "IOS is not supported"
	#elif TARGET_OS_MAC == 1
		#define SB_PLATFORM_MACOS
	#else
		#error "Unknown apple platform"
	#endif

#elif defined(__ANDROID__)
#define SB_API
#error "Android is not supported"

#elif defined(__linux__)
#define SB_API
#define SB_PLATFORM_LINUX

#else
#define SB_API
#define UNKNOWN_PLATFORM

#endif