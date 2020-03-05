#pragma once
#include <wx/wx.h>

class MainApplication : public wxApp
{
public:
	MainApplication();		// Constructor
	~MainApplication();		// Destructor

	virtual bool OnInit();

	void TitleFrame();

	void MenuFrame();

	void MainFrame();

private:
	wxMDIParentFrame* m_mainFrame = nullptr;
	wxMDIChildFrame* m_menuFrame = nullptr;
	wxMDIChildFrame* m_titleFrame = nullptr;
};

