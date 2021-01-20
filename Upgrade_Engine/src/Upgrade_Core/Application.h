#pragma once
#include "Core.h"
#include "Events/Event.h"
#include "Window.h"

#include "Events/ApplicationEvent.h"

namespace UpgradeE
{

	class UPGRADENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

	private:
		bool OnWindowClose(WindowCloseEvent& e);

		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
	};

	//TODO be defined in client
	Application* CreateApplication();

}

