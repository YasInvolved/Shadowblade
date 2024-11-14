#include <gtest/gtest.h>
#include <Shadowblade/Shadowblade.h>
#include <iostream>

class TestApplication : public Shadowblade::BaseApplication {
protected:
	void GameLoop() override {
		std::cout << "Hello Shadowblade\n";
	}
};

Shadowblade::BaseApplication* Shadowblade::CreateApplication() {
	return new TestApplication();
}