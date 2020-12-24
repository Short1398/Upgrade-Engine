#pragma once
#include "Core.h"
namespace UpgradeE
{

	class UPGRADENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//TODO be defined in client
	Application* CreateApplication();

}

