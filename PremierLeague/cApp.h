#pragma once
#include <wx/wx.h>
#include "cMain.h"

class cApp : public wxApp
{
public:
	cApp();		// Constructor
	~cApp();	// Destructor

	virtual bool OnInit();

private:
	cMain* m_frame1 = nullptr;
};

