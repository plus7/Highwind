//---------------------------------------------------------------------------
//
// Name:        HighwindApp.cpp
// Author:      necko
// Created:     2009/09/26 20:54:13
// Description: 
//
//---------------------------------------------------------------------------

#include "HighwindApp.h"
#include "HighwindMainFrm.h"

IMPLEMENT_APP(HighwindMainFrmApp)

bool HighwindMainFrmApp::OnInit()
{
    HighwindMainFrm* frame = new HighwindMainFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int HighwindMainFrmApp::OnExit()
{
	return 0;
}
