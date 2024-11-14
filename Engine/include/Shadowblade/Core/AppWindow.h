#pragma once

#include "Base.h"
#include <mutex>

namespace Shadowblade {
	class SB_API AppWindow {
	public:
		static Ref<AppWindow> GetInstance();

		void HandleEvents(bool& exitFlag);

	private:
		AppWindow();
		~AppWindow() = default;

		AppWindow(const AppWindow&) = delete;
		AppWindow& operator=(const AppWindow&) = delete;

		AppWindow(AppWindow&&) = delete;
		AppWindow& operator=(AppWindow&&) = delete;

		void* m_windowPtr = nullptr;

		static std::once_flag s_instanceFlag;
		static Ref<AppWindow> s_instance;
	};
}