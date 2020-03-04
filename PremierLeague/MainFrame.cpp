#include "MainFrame.h"

MainFrame::MainFrame() : wxMDIParentFrame ( nullptr,
                                  wxID_ANY,
                                  "Premier League 2019-2020",
                                  wxPoint(100, 100), wxSize(1280, 720),
                                  wxDEFAULT_FRAME_STYLE
                                )
{

}

MainFrame::~MainFrame()
{

}

