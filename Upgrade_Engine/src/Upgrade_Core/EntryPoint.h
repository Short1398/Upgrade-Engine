#pragma once

#ifdef HZ_PLATFORM_WINDOWS

	extern UpgradeE::Application* UpgradeE::CreateApplication();
	int main(int argc, char** argv)
	{
		printf("Welcome to Upgrade Engine\n:");

		UpgradeE::Log::Init();
		HZ_CORE_ERROR("Working log from core");
		int a = 5;
		HZ_INFO("Working log from core Var={0}", a);


		auto app = UpgradeE::CreateApplication();
		app->Run();
		delete app;

	}
	
#endif // 

