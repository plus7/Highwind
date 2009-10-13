#pragma once
#include "c:\wxwidgets-2.9.0\include\wx\aui\auibook.h"
class wxWebControl;
class HighwindTabCtrl :
	public wxAuiNotebook
{
public:
	HighwindTabCtrl(void);
	virtual ~HighwindTabCtrl(void);
	//void LoadTabList(const wxJSONValue& list);
	//void LoadTabList(const wxStringArray& array);
	int AddTab(const wxString& title, const wxString& uri, bool bg = false);
	void InsertTab(const wxString& title, const wxString& uri, size_t pos = 0, bool bg = false);
	void DeleteTab(size_t index);
	void MoveTab(size_t index, size_t newindex);
	wxWebControl *GetWebControl(size_t index);
};
