#pragma once
#include "c:\wxwidgets-2.9.0\include\wx\aui\auibook.h"

class HighwindTabCtrl :
	public wxAuiNotebook
{
public:
	HighwindTabCtrl(void);
	virtual ~HighwindTabCtrl(void);
	//void LoadTabList(const wxJSONValue& list);
	//void LoadTabList(const wxStringArray& array);
};
