#include "uepch.h"
#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

#include <GLFW/glfw3.h>

#include "Log.h"

#include <GLFW/glfw3.h>

namespace UpgradeE
{
#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());

		m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
	}

	Application::~Application()
	{
	}
	void Application::Run()
	{
		while (m_Running)
		{
			glClearColor(0, 1, 1, 1);
			glClear(GL_COLOR_BUFFER_BIT);
			m_Window->OnUpdate();
		}

	}
	void Application::OnEvent(Event& e)
	{
		EventDispatcher dispatcher(e);

		//If close event is fired, then run OnWindowClose callback
		dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));
		HZ_CORE_TRACE("{0}", e);
	}
	bool Application::OnWindowClose(WindowCloseEvent& e)
	{
		m_Running = false;
		return true;

	}
}
