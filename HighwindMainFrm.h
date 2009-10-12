//---------------------------------------------------------------------------
//
// Name:        HighwindMainFrm.h
// Author:      necko
// Created:     2009/09/26 20:54:15
// Description: HighwindMainFrm class declaration
//
//---------------------------------------------------------------------------

#ifndef __HIGHWINDMAINFRM_h__
#define __HIGHWINDMAINFRM_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/menu.h>
#include <wx/notebook.h>
#include <wx/aui/auibook.h>
#include <wx/statusbr.h>
#include <wx/toolbar.h>
#include <wx/combobox.h>
////Header Include End

////Dialog Style Start
#undef HighwindMainFrm_STYLE
#define HighwindMainFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMAXIMIZE_BOX | wxMINIMIZE_BOX | wxCLOSE_BOX | wxRESIZE_BORDER
////Dialog Style End

class MenuObject;
class HighwindMainFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		HighwindMainFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Highwind"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = HighwindMainFrm_STYLE);
		virtual ~HighwindMainFrm();
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxMenuBar *MenuBar;
		wxAuiNotebook *TabGroup;
		wxStatusBar *StatusBar;
		wxToolBar *ToolBar;
		wxComboBox *AddressBar;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_TOOLBAR = 1,
			ID_STATUSBAR,
			ID_TABGROUP,
			ID_ADDRESSBAR,
			ID_SEARCHBAR,
			ID_ENGINEBOX,
			ID_NEWTABGRP,
			ID_NEWTAB,
			ID_NEWTABGRP_FROMCB,
			ID_NEWTAB_FROMCB,
			ID_OPENURI,
			ID_SAVEURILIST,
			ID_SAVE_AS,
			ID_PRINTOPTION,
			ID_PRINTPREVIEW,
			ID_PRINT,
			ID_CLOSETABGRP,
			ID_CLOSETABGRP_LEFT,
			ID_CLOSETABGRP_RIGHT,
			ID_CLOSETABGRP_EXCEPT,
			ID_CLOSETABGRP_ALL,
			ID_CLOSETAB,
			ID_CLOSETAB_LEFT,
			ID_CLOSETAB_RIGHT,
			ID_CLOSETAB_EXCEPT,
			ID_CLOSETAB_ALL,
			ID_CLOSEWINDOW,
			ID_OFFLINE,
			ID_CUT,
			ID_COPY,
			ID_PASTE,
			ID_SELECTALL,
			ID_COPYURI,
			ID_COPYTITLE,
			ID_EXTRACTLINKS,
			ID_EXTRACTSELECTEDLINKS,
			ID_ADDBOOKMARK,
			ID_SHOWTABGRPOPTIONS,
			ID_FINDDLG,
			ID_FINDBAR,
			ID_FINDNEXT,
			ID_FINDPREV,
			ID_SWFAYT,
			ID_GOBACK,
			ID_GOFORWARD,
			ID_QUIT,
			/*ID_WXTOOLBUTTON2 = 5,
		    */
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnAddressEnter(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
		void CreateMenuItems();
		void CreateToolButtons();
		void CreateBuiltinIDHashMap();
		void CreateAdditionalIDHashMap();
};

#endif

