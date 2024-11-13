#pragma once

#include <Shadowblade/Core/PlatformDependent.h>

#ifdef SB_DEBUG
	#if defined(SB_PLATFORM_WINDOWS)
		#define SB_DEBUGBREAK() __debugbreak()
	#elif defined(SB_PLATFORM_LINUX)
		#include <signal.h>
		#define SB_DEBUGBREAK() raise(SIGTRAP)
	#else
		#error "Platform doesn't support debug breaks"
	#endif
#else
	#define SB_DEBUGBREAK()
#endif

namespace Shadowblade {
	template <typename T>
	using Scope = std::unique_ptr<T>;

	template <typename T>
	using Ref = std::shared_ptr<T>;
}