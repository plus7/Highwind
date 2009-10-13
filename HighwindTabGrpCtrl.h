#pragma once
#include "c:\wxwidgets-2.9.0\include\wx\aui\auibook.h"
class HighwindTabCtrl;
class HighwindTabGrpCtrl :
	public wxAuiNotebook
{
public:
	HighwindTabGrpCtrl(void);
	virtual ~HighwindTabGrpCtrl(void);
//	void LoadSession(const wxJSONValue& session);
	void OpenUri(const wxString& uri);
	int AddGroup(int flags, bool bg = false);
	void InsertGroup(int flags, size_t pos = 0, bool bg = false);
	void DeleteGroup(size_t index);
	void MoveGroup(size_t index, size_t newindex);
	HighwindTabCtrl *GetTabControl(size_t index);
};
