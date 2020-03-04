#include "cApp.h"
#include "wx/mdi.h"

wxIMPLEMENT_APP(cApp);		// Macro

cApp::cApp()		// Constructor
{ }

cApp::~cApp()		// Destructor
{}

bool cApp::OnInit()
{
	wxMDIParentFrame* parentFrame = new wxMDIParentFrame(nullptr, wxID_ANY, "Premier League 2019-2020", wxPoint(100, 100), wxSize(1280, 720), wxDEFAULT_FRAME_STYLE);
	parentFrame->SetWindowMenu(0);
	wxMDIChildFrame* childFrame = new wxMDIChildFrame(parentFrame, wxID_ANY, "Child1", wxPoint(0, 0), wxSize(300, 720), wxFRAME_NO_WINDOW_MENU);
	wxMDIChildFrame* childFrame2 = new wxMDIChildFrame(parentFrame, wxID_ANY, "Child2", wxPoint(305, 0), wxSize(975, 720), wxFRAME_NO_WINDOW_MENU);

	parentFrame->Show(true);
	childFrame->Show(true);
	childFrame2->Show(true);


	return true;
}