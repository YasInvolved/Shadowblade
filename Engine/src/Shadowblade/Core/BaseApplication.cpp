#include <Shadowblade/Core/BaseApplication.h>

namespace Shadowblade {
	BaseApplication::BaseApplication() {
		m_appWindow = CreateScope<AppWindow>();
	}

	void BaseApplication::Run() {
		bool exitFlag = false;
		while (!exitFlag) {
			m_appWindow->HandleEvents(exitFlag);
			GameLoop();
		}
	}
}