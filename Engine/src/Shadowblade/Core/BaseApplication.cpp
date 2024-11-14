#include <Shadowblade/Core/BaseApplication.h>

namespace Shadowblade {
	BaseApplication::BaseApplication() {

	}

	void BaseApplication::Run() {
		while (1) {
			GameLoop();
		}
	}
}