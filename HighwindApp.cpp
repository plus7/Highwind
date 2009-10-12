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

IMPLEMENT_APP(HighwindApp)

bool HighwindApp::OnInit()
{
	InitConfig();
    HighwindMainFrm* frame = new HighwindMainFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int HighwindApp::OnExit()
{
	//delete m_menuconf;
	//delete m_tbconf;
	return 0;
}

void HighwindApp::InitConfig()
{
	//m_menuconf = new wxJSONValue();
	//m_tbconf = new wxJSONValue();
}