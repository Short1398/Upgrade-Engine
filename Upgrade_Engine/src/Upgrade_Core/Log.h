#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"


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

//Core Log macros
#define HZ_CORE_FATAL(...) ::UpgradeE::Log::GetCoreLogger()->fatal(__VA_ARGS__)
#define HZ_CORE_ERROR(...) ::UpgradeE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define HZ_CORE_WARN(...)  ::UpgradeE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define HZ_CORE_INFO(...)  ::UpgradeE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define HZ_CORE_TRACE(...) ::UpgradeE::Log::GetCoreLogger()->trace(__VA_ARGS__)

//Client log macros
#define HZ_FATAL(...)      ::UpgradeE::Log::GetClientLogger()->fatal(__VA_ARGS__)
#define HZ_ERROR(...)      ::UpgradeE::Log::GetClientLogger()->error(__VA_ARGS__)
#define HZ_WARN(...)       ::UpgradeE::Log::GetClientLogger()->warn(__VA_ARGS__)
#define HZ_INFO(...)       ::UpgradeE::Log::GetClientLogger()->info(__VA_ARGS__)
#define HZ_TRACE(...)      ::UpgradeE::Log::GetClientLogger()->trace(__VA_ARGS__)

