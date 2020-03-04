#include "MainApplication.h"
#include "MenuFrame.h"

#include "wx/mdi.h"

wxIMPLEMENT_APP(MainApplication);		// Macro

MainApplication::MainApplication()		// Constructor
{ }

MainApplication::~MainApplication()		// Destructor
{}

bool MainApplication::OnInit()
{
	// Create and show Main Frame
	MainFrame* m_mainFrame = new MainFrame();
	m_mainFrame->SetWindowMenu(0);
	m_mainFrame->Show();
	
	// Create and show Menu Frame
	MenuFrame* m_menuFrame = new MenuFrame();
	m_menuFrame->Create(m_mainFrame, wxID_ANY, "Child1", wxPoint(0, 0), wxSize(300, 720), wxFRAME_NO_WINDOW_MENU);
	m_menuFrame->Show();
	
	// Create and show Title Frame
	TitleFrame* m_titleFrame = new TitleFrame();
	m_titleFrame->Create(m_mainFrame, wxID_ANY, "child2", wxPoint(305, 0), wxSize(975, 720), wxFRAME_NO_WINDOW_MENU);
	m_titleFrame->Show();

	return true;
}