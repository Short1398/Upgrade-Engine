#pragma once

#ifdef  HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define UPGRADENGINE_API __declspec(dllexport)
	#else
		#define UPGRADENGINE_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Upgrade Engine only supports Windows at the moment

#endif //  HZ_PLATFORM_WINDOWS

