/***************************************************************
 * Name:      ScientificCalculatorMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2015-07-26
 * Copyright:  ()
 * License:
 **************************************************************/

#include "ScientificCalculatorMain.h"
#include <wx/msgdlg.h>
#include <sstream>
#include <iostream>
#include <stdio.h>

//(*InternalHeaders(ScientificCalculatorFrame)
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

//(*IdInit(ScientificCalculatorFrame)
const long ScientificCalculatorFrame::ID_TEXTCTRL1 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON1 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON2 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON3 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON4 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON5 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON6 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON7 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON8 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON9 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON10 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON11 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON12 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON13 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON14 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON15 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON16 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON17 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON18 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON19 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON20 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON21 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON22 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON23 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON24 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON25 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON26 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON27 = wxNewId();
const long ScientificCalculatorFrame::ID_BUTTON28 = wxNewId();
const long ScientificCalculatorFrame::idMenuQuit = wxNewId();
const long ScientificCalculatorFrame::idMenuAbout = wxNewId();
const long ScientificCalculatorFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ScientificCalculatorFrame,wxFrame)
    //(*EventTable(ScientificCalculatorFrame)
    //*)
END_EVENT_TABLE()

ScientificCalculatorFrame::ScientificCalculatorFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ScientificCalculatorFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(366,331));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("0"), wxPoint(16,8), wxSize(328,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    Button1 = new wxButton(this, ID_BUTTON1, _("save"), wxPoint(16,40), wxSize(75,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("C"), wxPoint(184,40), wxSize(75,24), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button3 = new wxButton(this, ID_BUTTON3, _("Close"), wxPoint(264,40), wxSize(75,24), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button4 = new wxButton(this, ID_BUTTON4, _("load"), wxPoint(104,40), wxSize(75,24), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button5 = new wxButton(this, ID_BUTTON5, _("√"), wxPoint(16,72), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button6 = new wxButton(this, ID_BUTTON6, _("sin"), wxPoint(16,112), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    Button7 = new wxButton(this, ID_BUTTON7, _("."), wxPoint(16,272), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    Button8 = new wxButton(this, ID_BUTTON8, _("7"), wxPoint(16,232), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    Button9 = new wxButton(this, ID_BUTTON9, _("4"), wxPoint(16,192), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON9"));
    Button10 = new wxButton(this, ID_BUTTON10, _("1"), wxPoint(16,152), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON10"));
    Button11 = new wxButton(this, ID_BUTTON11, _("^"), wxPoint(104,72), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Button12 = new wxButton(this, ID_BUTTON12, _("cos"), wxPoint(104,112), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON12"));
    Button13 = new wxButton(this, ID_BUTTON13, _("2"), wxPoint(104,152), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON13"));
    Button14 = new wxButton(this, ID_BUTTON14, _("5"), wxPoint(104,192), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON14"));
    Button15 = new wxButton(this, ID_BUTTON15, _("8"), wxPoint(104,232), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON15"));
    Button16 = new wxButton(this, ID_BUTTON16, _("log"), wxPoint(184,72), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON16"));
    Button17 = new wxButton(this, ID_BUTTON17, _("0"), wxPoint(104,272), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON17"));
    Button18 = new wxButton(this, ID_BUTTON18, _("tan"), wxPoint(184,112), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON18"));
    Button19 = new wxButton(this, ID_BUTTON19, _("3"), wxPoint(184,152), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON19"));
    Button20 = new wxButton(this, ID_BUTTON20, _("6"), wxPoint(184,192), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON20"));
    Button21 = new wxButton(this, ID_BUTTON21, _("9"), wxPoint(184,232), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON21"));
    Button22 = new wxButton(this, ID_BUTTON22, _("="), wxPoint(184,272), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON22"));
    Button23 = new wxButton(this, ID_BUTTON23, _("Label"), wxPoint(264,72), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON23"));
    Button24 = new wxButton(this, ID_BUTTON24, _("x!"), wxPoint(264,112), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON24"));
    Button25 = new wxButton(this, ID_BUTTON25, _("*"), wxPoint(264,192), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON25"));
    Button26 = new wxButton(this, ID_BUTTON26, _("-"), wxPoint(264,232), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON26"));
    Button27 = new wxButton(this, ID_BUTTON27, _("/"), wxPoint(264,152), wxSize(75,31), 0, wxDefaultValidator, _T("ID_BUTTON27"));
    Button28 = new wxButton(this, ID_BUTTON28, _("+"), wxPoint(264,272), wxSize(75,32), 0, wxDefaultValidator, _T("ID_BUTTON28"));
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

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnButton1Click);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnButton10Click);
    Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnButton13Click);
    Connect(ID_BUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnButton19Click);
    Connect(ID_BUTTON24,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnButton24Click);
    Connect(ID_BUTTON26,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnButton26Click);
    Connect(ID_BUTTON28,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnButton28Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ScientificCalculatorFrame::OnAbout);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&ScientificCalculatorFrame::OnClose);
    //*)
}


ScientificCalculatorFrame::~ScientificCalculatorFrame()
{
    //(*Destroy(ScientificCalculatorFrame)
    //*)
}

double currentValue;
int prevOperator = 0;

void ScientificCalculatorFrame::append(std::string newValue) {
    std::string stringValue = std::string(TextCtrl1->GetValue());

    boolean replaceFlag = false;
    boolean ignoreFlag = false;

    if(stringValue == "0") {
        replaceFlag = true;
        if (newValue == "." || newValue == "0") {
            ignoreFlag = true;
        }
    }

    if(ignoreFlag) {
        return;
    }

    if(replaceFlag) {
        stringValue = "";
    }

    stringValue = stringValue + newValue;
    wxString wxStringValue(stringValue);
    TextCtrl1->SetValue(wxStringValue);

}

void ScientificCalculatorFrame::calculate(int newOperator, double newValue) {
    if (prevOperator == 0) {
        currentValue = newValue;
        prevOperator = newOperator;
        wxString zeroString("0");
        TextCtrl1->SetValue(zeroString);
    } else {
        double calculatedValue;

        if (prevOperator == 1) {
            calculatedValue = currentValue + newValue;
            prevOperator = newOperator;
        }
        if (prevOperator == 2) {
            calculatedValue = currentValue - newValue;
            prevOperator = newOperator;
        }
        currentValue = calculatedValue;
        std::ostringstream strs;
        strs << calculatedValue;
        std::string stringValue = strs.str();
        wxString wxStringValue(stringValue);
        TextCtrl1->SetValue(wxStringValue);
    }
}
void ScientificCalculatorFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ScientificCalculatorFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void ScientificCalculatorFrame::OnClose(wxCloseEvent& event)
{

}

void ScientificCalculatorFrame::OnButton1Click(wxCommandEvent& event)
{

}

void ScientificCalculatorFrame::OnButton24Click(wxCommandEvent& event)
{
}

void ScientificCalculatorFrame::OnButton13Click(wxCommandEvent& event)
{
      append("2");
}

void ScientificCalculatorFrame::OnButton28Click(wxCommandEvent& event)
{
    std::string stringValue = std::string(TextCtrl1->GetValue());
    double doubleValue = atof(stringValue.c_str());
    calculate(1, doubleValue);
}

void ScientificCalculatorFrame::OnButton26Click(wxCommandEvent& event)
{
    std::string stringValue = std::string(TextCtrl1->GetValue());
    double doubleValue = atof(stringValue.c_str());
    calculate(2, doubleValue);
}

void ScientificCalculatorFrame::OnButton10Click(wxCommandEvent& event)
{
    append("1");
}

void ScientificCalculatorFrame::OnButton19Click(wxCommandEvent& event)
{
}
