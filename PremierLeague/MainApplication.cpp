#include "MainApplication.h"
#include "wx/mdi.h"

wxIMPLEMENT_APP(MainApplication);		// Macro

MainApplication::MainApplication()		// Constructor
{ }

MainApplication::~MainApplication()		// Destructor
{}

bool MainApplication::OnInit()
{
	/********************************************
	 *				MAIN FRAME					*
	 ********************************************/
	MainFrame();
		
	/********************************************
	 *				MENU FRAME					*
	 ********************************************/
	MenuFrame();
	
	/********************************************
	 *				TITLE FRAME					*
	 ********************************************/
	TitleFrame();
	
	return true;
}

void MainApplication::TitleFrame()
{
	m_titleFrame = new wxMDIChildFrame();
	m_titleFrame->Create(m_mainFrame, wxID_ANY, "child2", wxPoint(305, 0), wxSize(975, 720), wxFRAME_NO_WINDOW_MENU);
	m_titleFrame->SetBackgroundColour(*wxCYAN);
	m_titleFrame->Show();
}

void MainApplication::MenuFrame()
{
	m_menuFrame = new wxMDIChildFrame();
	m_menuFrame->Create(m_mainFrame, wxID_ANY, "Child1", wxPoint(0, 0), wxSize(300, 720), wxFRAME_NO_WINDOW_MENU);
	m_menuFrame->SetBackgroundColour(*wxBLUE);	// SetBackgroundColour(wxColour(0,0,255))
	m_menuFrame->Show();

	wxPanel* panel = new wxPanel(m_menuFrame, wxID_ANY, wxPoint(50, 200), wxSize(100, 100));
	wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(50, 200), wxSize(100, 100));
}

void MainApplication::MainFrame()
{
	m_mainFrame = new wxMDIParentFrame();
	m_mainFrame->Create(nullptr, wxID_ANY, "Premier League 2019-2020", wxPoint(100, 100), wxSize(1280, 720), wxDEFAULT_FRAME_STYLE);
	m_mainFrame->SetWindowMenu(0);
	m_mainFrame->Show();
}
