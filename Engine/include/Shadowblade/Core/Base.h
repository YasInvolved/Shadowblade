#pragma once
#include <memory>

#if defined(_WIN32)
	#ifdef _WIN64
		#define SB_PLATFORM_WINDOWS
	#else
		#error "32-bit platforms are not supported at this moment"
	#endif
#elif defined(__APPLE__)
	#error "Apple platforms are currently not supported. Wait for future releases"
#elif defined(__ANDROID__)
	#error "Android is currently not supported. Wait for future releases"
#elif defined(__LINUX__)
	#define SB_PLATFORM_LINUX
#endif

#ifdef SB_PLATFORM_WINDOWS
	#ifdef SB_EXPORT_SYMBOLS
		#define SB_API __declspec(dllexport)
	#else
		#define SB_API __declspec(dllimport)
	#endif
#else
	#define SB_API
#endif

namespace Shadowblade {
	template <typename T>
	using Scope = std::unique_ptr<T>;

	template <typename T>
	using Ref = std::shared_ptr<T>;

	template <typename T, typename... Args>
	constexpr Ref<T> CreateRef(Args&&... args) {
		return std::make_shared<T>(std::forward(args)...);
	}

	template <typename T, typename... Args>
	constexpr Scope<T> CreateScope(Args&&... args) {
		return std::make_unique<T>(std::forward(args)...);
	}
}