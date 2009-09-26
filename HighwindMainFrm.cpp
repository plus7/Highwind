//---------------------------------------------------------------------------
//
// Name:        HighwindMainFrm.cpp
// Author:      necko
// Created:     2009/09/26 20:54:15
// Description: HighwindMainFrm class implementation
//
//---------------------------------------------------------------------------

#include "HighwindMainFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// HighwindMainFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(HighwindMainFrm, wxFrame)
	////Manual Code Start
	////Manual Code End
	EVT_CLOSE(HighwindMainFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

HighwindMainFrm::HighwindMainFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

HighwindMainFrm::~HighwindMainFrm()
{
}

void HighwindMainFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start
	////GUI Items Creation End
}

void HighwindMainFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
