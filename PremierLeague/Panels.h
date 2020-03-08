#pragma once
#include <wx/wx.h>
#include <wx/panel.h>

class MenuPanel : public wxPanel
{
public:
	MenuPanel(wxPanel* parent);

};

class TitlePanel : public wxPanel
{
public:
	TitlePanel(wxPanel* parent);
	void SetImage();

private:
	wxPNGHandler* handler;
	wxStaticBitmap* image;
};

