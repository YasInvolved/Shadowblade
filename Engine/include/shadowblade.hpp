#ifdef _WIN32
	#ifdef EXPORT_SYMBOLS
		#define SB_API __declspec(dllexport)
	#else
		#define SB_API __declspec(dllimport)
	#endif
#endif

int SB_API multiply(int x, int y);