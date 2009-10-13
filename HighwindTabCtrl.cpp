#include "HighwindTabCtrl.h"
#include <webcontrol.h>
HighwindTabCtrl::HighwindTabCtrl(void)
{
}

HighwindTabCtrl::~HighwindTabCtrl(void)
{
}

int HighwindTabCtrl::AddTab(const wxString& title, const wxString& uri, bool bg = false)
{
}

void HighwindTabCtrl::InsertTab(const wxString& title, const wxString& uri, size_t pos = 0, bool bg = false)
{
}

wxWebControl *HighwindTabCtrl::GetWebControl(size_t index)
{
	return wxAuiNotebook::GetPage(index);
}