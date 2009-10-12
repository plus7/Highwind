//---------------------------------------------------------------------------
//
// Name:        HighwindMainFrm.cpp
// Author:      necko
// Created:     2009/09/26 20:54:15
// Description: HighwindMainFrm class implementation
//
//---------------------------------------------------------------------------
#include "HighwindApp.h"
#include "HighwindMainFrm.h"
#include <wx/jsonreader.h>
#include <wx/windowid.h>
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
BEGIN_EVENT_TABLE(HighwindMainFrm,wxFrame)
	////Manual Code Start
	//EVT_MENU(ID_QUIT, 
	EVT_TEXT_ENTER(ID_ADDRESSBAR, HighwindMainFrm::OnAddressEnter)
	////Manual Code End
	
	EVT_CLOSE(HighwindMainFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

HighwindMainFrm::HighwindMainFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();

	CreateMenuItems();

	CreateToolButtons();

	wxWindowID hoeid = this->NewControlId(1);
	wxWindowID hoeid2 = this->NewControlId(1);
	// the JSON text, stored in a wxString object
	/*wxString document( _T( "{ \"answer\" : 42 }"));

	// construct the JSON root object
	wxJSONValue  root;

	// construct a JSON parser
	wxJSONReader reader;

	int errors = reader.Parse(document, &root);
	if(errors>0){

	}
	int aaa = root["answer"].AsInt();*/
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

	ToolBar = new wxToolBar(this, ID_TOOLBAR, wxPoint(0, 0), wxSize(422, 29));

	StatusBar = new wxStatusBar(this, ID_STATUSBAR);

	TabGroup = new wxAuiNotebook(this, ID_TABGROUP, wxPoint(44, 137), wxSize(193, 129), wxNB_DEFAULT|wxBORDER_NONE);

	wxAuiNotebook *page = new wxAuiNotebook(this, 0, wxPoint(44, 137), wxSize(193, 129), wxNB_DEFAULT|wxBORDER_NONE);
	TabGroup->AddPage(page, wxT("hoge"));
	page->AddPage(new wxControl(page, 0, wxDefaultPosition, wxDefaultSize, wxBORDER_NONE), wxT("fuga"));
	TabGroup->SetTabCtrlHeight(0);

	MenuBar = new wxMenuBar();

	wxBitmap WxToolButton1_BITMAP (wxNullBitmap);
	wxBitmap WxToolButton1_DISABLE_BITMAP (wxNullBitmap);
	ToolBar->AddTool(wxID_BACKWARD, wxT(""), WxToolButton1_BITMAP, WxToolButton1_DISABLE_BITMAP, wxITEM_NORMAL, wxT(""), wxT(""));

/*	wxBitmap WxToolButton2_BITMAP (wxNullBitmap);
	wxBitmap WxToolButton2_DISABLE_BITMAP (wxNullBitmap);
	ToolBar->AddTool(ID_WXTOOLBUTTON2, wxT(""), WxToolButton2_BITMAP, WxToolButton2_DISABLE_BITMAP, wxITEM_NORMAL, wxT(""), wxT(""));
*/
	SetStatusBar(StatusBar);
	ToolBar->Realize();
	SetToolBar(ToolBar);
	SetTitle(wxT("Highwind"));
	SetIcon(wxNullIcon);
	SetSize(8,8,430,323);
	Center();
	
	////GUI Items Creation End
}

void HighwindMainFrm::CreateMenuItems(){
	wxJSONValue mconf = wxGetApp().GetMenuConf();

}

void HighwindMainFrm::CreateToolButtons(){
	AddressBar = new wxComboBox(ToolBar, ID_ADDRESSBAR);
	ToolBar->AddControl(AddressBar, wxT("address"));

	wxJSONValue tconf = wxGetApp().GetMenuConf();
	wxJSONValue items = tconf["Items"];

	bool isArray = items.IsArray();
	if(!isArray) return;
	wxArrayString arr;
	for ( int i = 0; i < items.Size(); i++ ) {
		//arr.Add( items[i].AsString());
	}
}

void HighwindMainFrm::OnAddressEnter(wxCommandEvent& event)
{
	wxMessageBox(AddressBar->GetValue(), wxT("test"));
}

void HighwindMainFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
