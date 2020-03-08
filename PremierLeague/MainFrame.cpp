#include "MainFrame.h"

MainFrame::MainFrame(const wxString& title) 
    : wxFrame ( nullptr, wxID_ANY, title, wxDefaultPosition, wxSize(1280, 720))
{
    m_parent = new wxPanel(this, wxID_ANY);

    m_menuPanel = new MenuPanel(m_parent);
    m_titlePanel = new TitlePanel(m_parent);

    m_titlePanel->SetImage();

    this->Centre();
}