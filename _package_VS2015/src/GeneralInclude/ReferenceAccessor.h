#pragma once

#define DLL_INTERFACE __declspec( dllexport )   


class DLL_INTERFACE CReferenceAccessor
{
public:
	static ITest* GetObj();
};
