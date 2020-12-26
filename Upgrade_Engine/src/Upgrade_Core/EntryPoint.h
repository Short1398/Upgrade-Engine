#pragma once

#ifdef HZ_PLATFORM_WINDOWS

	extern UpgradeE::Application* UpgradeE::CreateApplication();
	int main(int argc, char** argv)
	{
		printf("Welcome to Upgrade Engine\n:");

		UpgradeE::Log::Init();
		HZ_CORE_ERROR("Better be working");
		HZ_WARNING("APP is working too");

		auto app = UpgradeE::CreateApplication();
		app->Run();
		delete app;

	}
	
#endif // 

