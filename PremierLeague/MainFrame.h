#pragma once
#include "Panels.h"

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);

	MenuPanel* m_menuPanel;
	TitlePanel* m_titlePanel;

	wxPanel* m_parent;
};

