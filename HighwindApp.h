//---------------------------------------------------------------------------
//
// Name:        HighwindApp.h
// Author:      necko
// Created:     2009/09/26 20:54:13
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __HIGHWINDApp_h__
#define __HIGHWINDApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

#include <wx/jsonreader.h>

class HighwindApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
		wxJSONValue GetMenuConf() { return m_menuconf; };
		wxJSONValue GetToolbarConf() { return m_tbconf; };
	private:
		void InitConfig();

	private:
		wxJSONValue m_menuconf;
		wxJSONValue m_tbconf;
};

DECLARE_APP(HighwindApp)


#endif
