#pragma once

extern Shadowblade::Application* Shadowblade::CreateApplication();

#ifdef SB_PLATFORM_WINDOWS
	int main() {
		// TODO: initialize logger
		auto application = Shadowblade::CreateApplication();
		application->Run();
		delete application;
		return 0;
	}
#endif