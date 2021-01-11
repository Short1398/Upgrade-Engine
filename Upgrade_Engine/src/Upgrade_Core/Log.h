#pragma once

#include "uepch.h"

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace UpgradeE
{
	class UPGRADENGINE_API Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}

//Core logger macros
#define HZ_CORE_ERROR(...)   ::UpgradeE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_WARNING(...)   ::UpgradeE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_INFO(...)   ::UpgradeE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_TRACE(...)   ::UpgradeE::Log::GetCoreLogger()->trace(__VA_ARGS__)

//Client logger macros
#define HZ_ERROR(...)   ::UpgradeE::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_WARNING(...)   ::UpgradeE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_INFO(...)   ::UpgradeE::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_TRACE(...)   ::UpgradeE::Log::GetClientLogger()->trace(__VA_ARGS__)
