#ifndef MAINFRAME_H
#define MAINFRAME_H
#include "wxcrafter.h"
#include "BasicGLPane.h"

class MainFrame : public MainFrameBaseClass
{
public:
    MainFrame(wxWindow* parent);
    virtual ~MainFrame();
    
    BasicGLPane* glPane;

    void OnOpen(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};
#endif // MAINFRAME_H
