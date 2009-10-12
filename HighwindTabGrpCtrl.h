#pragma once
#include "c:\wxwidgets-2.9.0\include\wx\aui\auibook.h"

class HighwindTabGrpCtrl :
	public wxAuiNotebook
{
public:
	HighwindTabGrpCtrl(void);
	virtual ~HighwindTabGrpCtrl(void);
//	void LoadSession(const wxJSONValue& session);
};
