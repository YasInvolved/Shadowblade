#pragma once

#include "Base.h"

namespace Shadowblade {
	class SB_API BaseApplication {
	public:
		BaseApplication();
		virtual ~BaseApplication() = default;

		void Run();
	protected:
		virtual void GameLoop() = 0;
	};

	BaseApplication* CreateApplication();
}