#pragma once

#include "Base.h"
#include "AppWindow.h"

namespace Shadowblade {
	class SB_API BaseApplication {
	public:
		BaseApplication();
		virtual ~BaseApplication() = default;

		void Run();
	protected:
		Ref<AppWindow> m_appWindow;
		virtual void GameLoop() = 0;
	};

	BaseApplication* CreateApplication();
}