#include "stdafx.h"
#include "ImageFiltering.h"


int GetIndex(int x, int y, int nW)
{
	return y*nW + x;
}

void CImageFiltering::ImageFiltering(BYTE* pInImg, int nW, int nH, BYTE* pOutImg)
{
	for(int i = 0; i < nW; i++)
		for(int j = 0; j < nH; j++)
			pOutImg[GetIndex(i, j, nW)] = 0;

	for(int i = 1; i < nW - 1; i++)
		for(int j = 1; j < nH - 1; j++)
		{
			double fSum = 0;
			for(int m = -1; m <= 1; m++)
				for(int n = -1; n <= 1; n++)
				{
					fSum += pInImg[GetIndex(i + n, j + m, nW)] / 16.0;

					if(m == 0 || n == 0)
						fSum += pInImg[GetIndex(i + n, j + m, nW)] / 16.0;
					if(m == 0 && n == 0)
						fSum += 2*pInImg[GetIndex(i + n, j + m, nW)] / 16.0;
				}

			pOutImg[GetIndex(i, j, nW)] = fSum;
		}
}