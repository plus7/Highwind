//---------------------------------------------------------------------------
//
// Name:        HighwindApp.h
// Author:      necko
// Created:     2009/09/26 20:54:13
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __HIGHWINDMAINFRMApp_h__
#define __HIGHWINDMAINFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class HighwindMainFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
