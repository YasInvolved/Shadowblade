#pragma once

#include "Base.h"
#include <mutex>

namespace Shadowblade {
	class SB_API AppWindow {
	public:
		AppWindow();
		~AppWindow() = default;

		AppWindow(const AppWindow&) = delete;
		AppWindow& operator=(const AppWindow&) = delete;
	private:
		friend class BaseApplication;
		AppWindow(AppWindow&&) = delete;
		AppWindow& operator=(AppWindow&&) = delete;

		void HandleEvents(bool& exitFlag);

		void* m_windowPtr = nullptr;

		static std::once_flag s_instanceFlag;
		static Ref<AppWindow> s_instance;
	};
}