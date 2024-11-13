#pragma once

#include "PlatformDependent.h"

namespace Shadowblade {
	class SB_API Application {
	public:
		Application() = default;

		virtual ~Application() = default;
		void Run();
	};

	Application* CreateApplication();
}