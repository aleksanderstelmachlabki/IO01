#pragma once

#include "ITest.h"
#include "OptimizedAccessor.h"

#if _DEBUG
#include <crtdbg.h>
#endif

#define DLL_INTERFACE __declspec( dllexport )   

struct image
{
	BYTE* pImg;
};

class COptimized : public ITest
{
public:
	COptimized(){}
	~COptimized(){}


	void HistogramStretching(BYTE** pImage, int nW, int nH);
	void ImageFiltering(BYTE* pInImg, int nW, int nH, BYTE* pOutImg);
	void MatrixMultiplication(CMatrix& first, CMatrix& second, CMatrix& res);

};


