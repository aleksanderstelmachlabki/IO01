
#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

void AfxMessageBox( char* szMsg)
{
	MessageBox( NULL, szMsg, "Optimized", MB_OK);
}

