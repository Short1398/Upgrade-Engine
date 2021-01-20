#pragma once

#include "Upgrade_Core/Window.h"

#include<GLFW/glfw3.h>

namespace UpgradeE
{
	class UPGRADENGINE_API WindowsWindow : public Window
	{
	public:
		WindowsWindow(const WindowProps& props);
		virtual ~WindowsWindow();

		void OnUpdate() override;

		inline unsigned int GetWindowWidth() const override { return m_Data.Width; }
		inline unsigned int GetWindowHeight() const override { return m_Data.Height; }

		//Attributes
		inline void SetEventCallback(const EventCallbackFn& callback) override { m_Data.EventCallback = callback; }
		void SetVSync(bool enabled) override;
		bool IsVSync() const override;

	private:
		virtual void Init(const WindowProps& props);
		virtual void Shutdown();
	private:
		GLFWwindow* m_Window;
		
		//Simple struct to be passed into GLFW callbacks
		struct WindowData
		{
			std::string Title;
			unsigned int Width, Height;
			bool VSync;

			EventCallbackFn EventCallback;
		};

		WindowData m_Data;
	};
}
