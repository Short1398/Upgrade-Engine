#pragma once
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"
namespace UpgradeE
{

	class UPGRADENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	private:
		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	//TODO be defined in client
	Application* CreateApplication();

}

