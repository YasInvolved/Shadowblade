#include <gtest/gtest.h>
#include <shadowblade.hpp>

class TestApplication : public Shadowblade::Application {
public:
	TestApplication() {
		
	}
};

Shadowblade::Application* Shadowblade::CreateApplication() {
	return new TestApplication();
}