#pragma once

#define DLL_INTERFACE __declspec( dllexport )   

#include "ITest.h"

class DLL_INTERFACE CBaselineAccessor
{
public:
	static ITest* GetObj();
};
