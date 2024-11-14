#pragma once

extern Shadowblade::BaseApplication* Shadowblade::CreateApplication();

#ifdef SB_DEBUG
	int main(int argc, char* argv[]) {
		auto app = Shadowblade::CreateApplication();
		app->Run();
		return 0;
	}
#else
	#if defined(SB_PLATFORM_WINDOWS)
		#include <Windows.h>
		
		int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
			return ERROR_SUCCESS;
		}
	#elif defined(SB_PLATFORM_LINUX)
		int main(int argc, char* argv[]) {
			return 0;
		}
	#endif
#endif