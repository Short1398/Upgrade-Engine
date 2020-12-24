#include <Upgrade.h>

class Sandbox : public UpgradeE::Application
{
public:
	Sandbox() {}
	
	~Sandbox() {}
};

UpgradeE::Application* UpgradeE::CreateApplication()
{
	return new Sandbox();
}