
#include "stdafx.h"
#include "Optimized.h"
#include <stdio.h>
//#include "cv.h"

#include "HistogramStretching.h"
#include "ImageFiltering.h"
#include "MatrixMultiplication.h"

#ifdef _DEBUG 
#define new DEBUG_NEW 
#endif 


BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
    return TRUE;
}

ITest* COptimizedAccessor::GetObj()
{
	static COptimized d;
	return &d;
}


void COptimized::HistogramStretching(BYTE** pImage, int nW, int nH)
{
	CHistogramStretching o;
	o.HistogramStretching(pImage, nW, nH);
}

void COptimized::ImageFiltering(BYTE* pInImg, int nW, int nH, BYTE* pOutImg)
{
	CImageFiltering o;
	o.ImageFiltering(pInImg, nW, nH, pOutImg);
}

void COptimized::MatrixMultiplication(CMatrix& first, CMatrix& second, CMatrix& res)
{
	CMatrixMultiplication o;
	o.MatrixMultiplication(first, second, res);
}



