#include "stdafx.h"
#include "HistogramStretching.h"



void CHistogramStretching::HistogramStretching(BYTE** pImage, int nW, int nH)
{
	//find minimal value
	int nMin = pImage[0][0];
	for(int j = 0; j < nW; j++)
		for(int i = 0; i < nH; i++)
			if(pImage[i][j] < nMin)
				nMin = pImage[i][j];

	//find maximal value
	int nMax = pImage[0][0];
	for(int j = 0; j < nW; j++)
		for(int i = 0; i < nH; i++)
			if(pImage[i][j] > nMax)
				nMax = pImage[i][j];

	//stretches histogram
	for(int j = 0; j < nW; j++)
		for(int i = 0; i < nH; i++)
		{
			if(nMax != nMin)
			{
				float fScale = (nMax - nMin)/100.0;//calculates scale
				float fVal = (pImage[i][j] - nMin)/fScale;//scales pixel value
				int nVal = (int)(fVal + 0.5);//rounds floating point number to integer
				
				//checks BYTE range (must be 0-255)
				if(nVal < 0)
					nVal = 0;
				if(nVal > 255)
					nVal = 255;

				pImage[i][j] = nVal;
			}
			else
				pImage[i][j] = 0;//if all pixel values are the same, the image is changed to black
		}

}
