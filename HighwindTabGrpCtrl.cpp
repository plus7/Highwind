#include "HighwindTabGrpCtrl.h"
#include "HighwindTabCtrl.h"
HighwindTabGrpCtrl::HighwindTabGrpCtrl(void)
{
}

HighwindTabGrpCtrl::~HighwindTabGrpCtrl(void)
{
}

void HighwindTabGrpCtrl::OpenUri(const wxString& uri)
{
	if(GetPageCount() < 1){
		HighwindTabCtrl* newctrl = new HighwindTabCtrl();
		InsertPage(0, tabctrl, wxT("default"), true);
	}

	if(GetActiveTabCtrl() == NULL){
		SetSelection(0);
	}

	HighwindTabCtrl *tabctrl = (HighwindTabCtrl*)GetPage(GetSelection());
	tabctrl->AddTab(wxT("notitle"), uri);
}