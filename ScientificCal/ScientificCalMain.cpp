/***************************************************************
 * Name:      ScientificCalMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Suraj ()
 * Created:   2015-07-18
 * Copyright: Suraj ()
 * License:
 **************************************************************/

#include "ScientificCalMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(ScientificCalFrame)
#include <wx/settings.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(ScientificCalFrame)
const long ScientificCalFrame::ID_STATICTEXT1 = wxNewId();
const long ScientificCalFrame::ID_BUTTON1 = wxNewId();
const long ScientificCalFrame::ID_BUTTON2 = wxNewId();
const long ScientificCalFrame::ID_BUTTON3 = wxNewId();
const long ScientificCalFrame::ID_BUTTON4 = wxNewId();
const long ScientificCalFrame::ID_BUTTON5 = wxNewId();
const long ScientificCalFrame::ID_BUTTON6 = wxNewId();
const long ScientificCalFrame::ID_BUTTON7 = wxNewId();
const long ScientificCalFrame::ID_BUTTON8 = wxNewId();
const long ScientificCalFrame::ID_BUTTON9 = wxNewId();
const long ScientificCalFrame::ID_BUTTON10 = wxNewId();
const long ScientificCalFrame::ID_BUTTON11 = wxNewId();
const long ScientificCalFrame::ID_BUTTON12 = wxNewId();
const long ScientificCalFrame::ID_BUTTON13 = wxNewId();
const long ScientificCalFrame::ID_BUTTON14 = wxNewId();
const long ScientificCalFrame::ID_BUTTON15 = wxNewId();
const long ScientificCalFrame::ID_BUTTON16 = wxNewId();
const long ScientificCalFrame::ID_BUTTON17 = wxNewId();
const long ScientificCalFrame::ID_BUTTON18 = wxNewId();
const long ScientificCalFrame::ID_BUTTON19 = wxNewId();
const long ScientificCalFrame::ID_BUTTON20 = wxNewId();
const long ScientificCalFrame::ID_BUTTON21 = wxNewId();
const long ScientificCalFrame::ID_BUTTON22 = wxNewId();
const long ScientificCalFrame::ID_BUTTON23 = wxNewId();
const long ScientificCalFrame::ID_BUTTON24 = wxNewId();
const long ScientificCalFrame::ID_BUTTON25 = wxNewId();
const long ScientificCalFrame::ID_BUTTON26 = wxNewId();
const long ScientificCalFrame::ID_BUTTON27 = wxNewId();
const long ScientificCalFrame::ID_BUTTON28 = wxNewId();
const long ScientificCalFrame::ID_BUTTON29 = wxNewId();
const long ScientificCalFrame::ID_BUTTON30 = wxNewId();
const long ScientificCalFrame::ID_BUTTON31 = wxNewId();
const long ScientificCalFrame::ID_BUTTON32 = wxNewId();
const long ScientificCalFrame::idMenuQuit = wxNewId();
const long ScientificCalFrame::idMenuAbout = wxNewId();
const long ScientificCalFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ScientificCalFrame,wxFrame)
    //(*EventTable(ScientificCalFrame)
    //*)
END_EVENT_TABLE()

ScientificCalFrame::ScientificCalFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ScientificCalFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(423,401));
    SetBackgroundColour(wxColour(0,0,0));
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, wxEmptyString, wxPoint(48,24), wxSize(320,45), 0, _T("ID_STATICTEXT1"));
    StaticText1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_APPWORKSPACE));
    Button1 = new wxButton(this, ID_BUTTON1, _("Log"), wxPoint(48,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Load"), wxPoint(128,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button3 = new wxButton(this, ID_BUTTON3, _("Clear"), wxPoint(208,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button4 = new wxButton(this, ID_BUTTON4, _("Save"), wxPoint(288,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button5 = new wxButton(this, ID_BUTTON5, _("√"), wxPoint(48,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button6 = new wxButton(this, ID_BUTTON6, _("π"), wxPoint(128,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    Button7 = new wxButton(this, ID_BUTTON7, _("Del"), wxPoint(208,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
    Button8 = new wxButton(this, ID_BUTTON8, _("Ans"), wxPoint(288,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
    Button9 = new wxButton(this, ID_BUTTON9, _("7"), wxPoint(48,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
    Button10 = new wxButton(this, ID_BUTTON10, _("8"), wxPoint(128,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
    Button11 = new wxButton(this, ID_BUTTON11, _("9"), wxPoint(208,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Button12 = new wxButton(this, ID_BUTTON12, _("*"), wxPoint(288,152), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON12"));
    Button13 = new wxButton(this, ID_BUTTON13, _("4"), wxPoint(48,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON13"));
    Button14 = new wxButton(this, ID_BUTTON14, _("5"), wxPoint(128,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON14"));
    Button15 = new wxButton(this, ID_BUTTON15, _("6"), wxPoint(208,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON15"));
    Button16 = new wxButton(this, ID_BUTTON16, _("+"), wxPoint(288,184), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON16"));
    Button17 = new wxButton(this, ID_BUTTON17, _("1"), wxPoint(48,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON17"));
    Button18 = new wxButton(this, ID_BUTTON18, _("2"), wxPoint(128,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON18"));
    Button19 = new wxButton(this, ID_BUTTON19, _("3"), wxPoint(208,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON19"));
    Button20 = new wxButton(this, ID_BUTTON20, _("-"), wxPoint(288,216), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON20"));
    Button21 = new wxButton(this, ID_BUTTON21, _("."), wxPoint(48,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON21"));
    Button22 = new wxButton(this, ID_BUTTON22, _("0"), wxPoint(128,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON22"));
    Button23 = new wxButton(this, ID_BUTTON23, _("="), wxPoint(208,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON23"));
    Button24 = new wxButton(this, ID_BUTTON24, _("/"), wxPoint(288,248), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON24"));
    Button25 = new wxButton(this, ID_BUTTON25, _("Sin"), wxPoint(48,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON25"));
    Button26 = new wxButton(this, ID_BUTTON26, _("Cos"), wxPoint(128,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON26"));
    Button27 = new wxButton(this, ID_BUTTON27, _("Tan"), wxPoint(208,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON27"));
    Button28 = new wxButton(this, ID_BUTTON28, _("^"), wxPoint(288,280), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON28"));
    Button29 = new wxButton(this, ID_BUTTON29, _("Sinˉ¹"), wxPoint(48,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON29"));
    Button30 = new wxButton(this, ID_BUTTON30, _("Cosˉ¹"), wxPoint(128,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON30"));
    Button31 = new wxButton(this, ID_BUTTON31, _("Tanˉ¹"), wxPoint(208,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON31"));
    Button32 = new wxButton(this, ID_BUTTON32, _("Xˉ¹"), wxPoint(288,312), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON32"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ScientificCalFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ScientificCalFrame::OnAbout);
    //*)
}

ScientificCalFrame::~ScientificCalFrame()
{
    //(*Destroy(ScientificCalFrame)
    //*)
}

void ScientificCalFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ScientificCalFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}
