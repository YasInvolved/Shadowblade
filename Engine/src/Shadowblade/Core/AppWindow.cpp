#include <Shadowblade/Core/AppWindow.h>
#include <SDL3/SDL.h>
#include <iostream>

namespace Shadowblade {
	std::once_flag AppWindow::s_instanceFlag;
	Ref<AppWindow> AppWindow::s_instance;

	AppWindow::AppWindow() {
		m_windowPtr = SDL_CreateWindow("BaseAppWindow", 800, 600, SDL_WINDOW_HIGH_PIXEL_DENSITY);
		if (m_windowPtr == nullptr) {
			std::cout << "Failed to create window\n";
		}
	}

	void AppWindow::HandleEvents(bool& exitFlag) {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_EVENT_QUIT:
				exitFlag = true;
				break;
			}
		}
	}
}