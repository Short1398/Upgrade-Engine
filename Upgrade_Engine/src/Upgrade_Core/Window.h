#pragma once

#include "uepch.h"

#include "Core.h"
#include "Events/Event.h"

namespace UpgradeE
{
	struct WindowProps
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProps(const std::string& title = "Upgrade Engine", unsigned int width = 1280, unsigned int height = 720)
			: Title(title), Width(width), Height(height) {}
	};

	//Window desktop baseed system interface
	class UPGRADENGINE_API Window
	{
	public:
		using EventCallbackFn = std::function<void(Event&)>;

		virtual ~Window() {}

		virtual void OnUpdate() = 0;

		virtual unsigned int GetWindowWidth() const = 0;
		virtual unsigned int GetWindowHeight() const = 0;

		//Window attributes
		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSync()const = 0;

		static Window* Create(const WindowProps& props = WindowProps());
	};
}