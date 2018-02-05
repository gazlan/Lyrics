// Lyrics.h : main header file for the LYRICS application
//

#if !defined(AFX_LYRICS_H__86857AC8_6B63_4ADD_B6C6_ACC93C9AC16C__INCLUDED_)
#define AFX_LYRICS_H__86857AC8_6B63_4ADD_B6C6_ACC93C9AC16C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CLyricsApp:
// See Lyrics.cpp for the implementation of this class
//

class CLyricsApp : public CWinApp
{
public:
	CLyricsApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLyricsApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CLyricsApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LYRICS_H__86857AC8_6B63_4ADD_B6C6_ACC93C9AC16C__INCLUDED_)
