#pragma once

#ifdef REGN_PLATFORM_WINDOWS
	#ifdef REGN_BUILD_DLL
		#define REGN_API _declspec(dllexport)
	#else
		#define REGN_API _declspec(dllimport)
	#endif
#else
	#error Regn only supports Windows!
#endif