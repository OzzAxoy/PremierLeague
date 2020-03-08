#include "MainApplication.h"
#include "MainFrame.h"

wxIMPLEMENT_APP(MainApplication);		// Macro

bool MainApplication::OnInit()
{
	MainFrame* mainFrame = new MainFrame(wxT("Premier League 2019 - 2020"));
	
	mainFrame->Show();

	return true;
}

