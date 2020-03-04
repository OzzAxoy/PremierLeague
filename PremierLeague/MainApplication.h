#pragma once
#include <wx/wx.h>
#include "MainFrame.h"
#include "MenuFrame.h"
#include "TitleFrame.h"

class MainApplication : public wxApp
{
public:
	MainApplication();		// Constructor
	~MainApplication();		// Destructor

	virtual bool OnInit();

private:
	MainFrame* m_mainFrame = nullptr;
	MenuFrame* m_menuFrame = nullptr;
	TitleFrame* m_titleFrame = nullptr;
};

