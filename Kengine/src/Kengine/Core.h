#pragma once

#ifdef KG_WINDOWS_PLATFORM	// Place this in pre-processor definitions
	#ifdef KG_BUILD_DLL
		#define KENGINE_API __declspec(dllexport)
	#else
		#define KENGINE_API __declspec(dllimport)
	#endif
#else
	#error Kengine only supports Windows
#endif
