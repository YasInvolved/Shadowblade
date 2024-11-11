#include <memory>

#ifdef _WIN32	
	#ifdef EXPORT_SYMBOLS
		#define SB_API __declspec(dllexport)
	#else
		#define SB_API __declspec(dllimport)
	#endif
#else
	#define SB_API
#endif

#ifdef _WIN32
#endif

namespace Shadowblade {
	template <typename T>
	using Scope = std::unique_ptr<T>;

	template <typename T>
	using Ref = std::shared_ptr<T>;
}