#pragma once

#include "uepch.h"
#include "Event.h"


namespace UpgradeE
{
	class  UPGRADENGINE_API WindowResizeEvent : public Event
	{
	public:
		WindowResizeEvent(unsigned int width, unsigned int height)
			: m_WindowWidth(width), m_WindowHeight(height) {}
		
		inline unsigned int GetWindowWidth() { return m_WindowWidth; }
		inline unsigned int GetWindowHeight() { return m_WindowHeight; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowResizeEvent: " << m_WindowWidth << ", " << m_WindowHeight;
			return ss.str();
		}

		EVENT_CLASS_TYPE(WindowResize)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	private:
		unsigned int m_WindowWidth, m_WindowHeight;
	};

	class UPGRADENGINE_API WindowCloseEvent : public Event
	{
	public:
		WindowCloseEvent() {}

		EVENT_CLASS_TYPE(WindowClose)
		EVENT_CLASS_CATEGORY(EventCategoryApplication)
	};
}
