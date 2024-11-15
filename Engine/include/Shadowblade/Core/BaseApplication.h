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
		virtual void GameLoop() = 0;
	private:
		Scope<AppWindow> m_appWindow;
	};

	BaseApplication* CreateApplication();
}