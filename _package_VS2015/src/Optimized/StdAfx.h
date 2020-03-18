
#if !defined(AFX_STDAFX_H__B4F1F268_0485_4071_9DDE_30FEEA1BE75D__INCLUDED_)
#define AFX_STDAFX_H__B4F1F268_0485_4071_9DDE_30FEEA1BE75D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#if _DEBUG
#include <crtdbg.h> 
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__) 
#define ASSERT(expr) _ASSERT(expr) 
#endif


// Insert your headers here
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers

#include <windows.h>
#include <wtypes.h>

void AfxMessageBox( char* szMsg);


// TODO: reference additional headers your program requires here

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__B4F1F268_0485_4071_9DDE_30FEEA1BE75D__INCLUDED_)
