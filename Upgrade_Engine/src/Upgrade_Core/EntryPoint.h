#pragma once

#ifdef HZ_PLATFORM_WINDOWS

	extern UpgradeE::Application* UpgradeE::CreateApplication();
	int main(int argc, char** argv)
	{
		printf("Welcome to Upgrade Engine\n:");

		UpgradeE::Log::Init();

		auto app = UpgradeE::CreateApplication();
		app->Run();
		delete app;

	}
	
#endif // 

