#include "MainFrame.h"
#include <wx/aboutdlg.h>

MainFrame::MainFrame(wxWindow* parent)
    : MainFrameBaseClass(parent)
{
    //Set Up Box Sizer
    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
     
     //Setup GL Argumanets
    int args[] = {WX_GL_RGBA, WX_GL_DOUBLEBUFFER, WX_GL_DEPTH_SIZE, 16, 0};
    
    glPane = new BasicGLPane( (wxPanel*) GetPanel71(), args);
    sizer->Add(glPane, 1, wxEXPAND);
 
    GetPanel71()->SetSizer(sizer);
    GetPanel71()->SetAutoLayout(true);
    
    this->Connect(wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::OnOpen), NULL, this);
}

MainFrame::~MainFrame()
{
}


void MainFrame::OnOpen(wxCommandEvent& event)
{

}

void MainFrame::OnExit(wxCommandEvent& event)
{
    wxUnusedVar(event);
    Close();
}

void MainFrame::OnAbout(wxCommandEvent& event)
{
    wxUnusedVar(event);
    wxAboutDialogInfo info;
    info.SetName("wxOpenGL");
    info.SetCopyright(_("My MainFrame"));
    info.SetLicence(_("GPL v2 or later"));
    info.SetDescription(_("This is a sample meant to both show and act as a template for implementing a GLCanvas in wxWidgets."));
    ::wxAboutBox(info);
}
