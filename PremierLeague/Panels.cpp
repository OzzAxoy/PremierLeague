#include "MainFrame.h"

MenuPanel::MenuPanel(wxPanel* parent)
	: wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
	m_parent = parent;
}

TitlePanel::TitlePanel(wxPanel* parent)
	: wxPanel(parent, wxID_ANY, wxDefaultPosition, wxSize(320,720), wxBORDER_SUNKEN)
{

}

void TitlePanel::SetImage()
{
	handler = new wxPNGHandler;
	wxImage::AddHandler(handler);
	image = new wxStaticBitmap(this, wxID_ANY, wxBitmap("pl_logo2.png", wxBITMAP_TYPE_PNG),
		wxPoint(0, 0), wxSize(320, 320));
}