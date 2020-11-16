#pragma once

#include <vector>

#ifdef _WIN32
#if defined(_MSC_VER) && !defined(graphyJsonModuleLib_STATIC)
#ifdef graphyJsonModuleLib_EXPORTS
#define GRAPHYJSONMODULE_API __declspec(dllexport)
#else
#define GRAPHYJSONMODULE_API __declspec(dllimport)
#endif
#else
#define GRAPHYJSONMODULE_API
#endif
#endif

namespace graphyJsonModule
{
#ifdef _WIN32
	GRAPHYJSONMODULE_API long _stdcall test();
#elif linux
	long test();
#endif
}
