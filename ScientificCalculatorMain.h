/***************************************************************
 * Name:      ScientificCalculatorMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2015-07-26
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef SCIENTIFICCALCULATORMAIN_H
#define SCIENTIFICCALCULATORMAIN_H

//(*Headers(ScientificCalculatorFrame)
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class ScientificCalculatorFrame: public wxFrame
{
    public:

        ScientificCalculatorFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~ScientificCalculatorFrame();

    private:

        //(*Handlers(ScientificCalculatorFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton24Click(wxCommandEvent& event);
        void OnButton13Click(wxCommandEvent& event);
        void OnButton28Click(wxCommandEvent& event);
        void OnButton26Click(wxCommandEvent& event);
        void OnButton10Click(wxCommandEvent& event);
        void OnButton19Click(wxCommandEvent& event);
        //*)

        void calculate(int newOperator, double newValue);
        void append(std::string newValue);

        //(*Identifiers(ScientificCalculatorFrame)
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_BUTTON10;
        static const long ID_BUTTON11;
        static const long ID_BUTTON12;
        static const long ID_BUTTON13;
        static const long ID_BUTTON14;
        static const long ID_BUTTON15;
        static const long ID_BUTTON16;
        static const long ID_BUTTON17;
        static const long ID_BUTTON18;
        static const long ID_BUTTON19;
        static const long ID_BUTTON20;
        static const long ID_BUTTON21;
        static const long ID_BUTTON22;
        static const long ID_BUTTON23;
        static const long ID_BUTTON24;
        static const long ID_BUTTON25;
        static const long ID_BUTTON26;
        static const long ID_BUTTON27;
        static const long ID_BUTTON28;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(ScientificCalculatorFrame)
        wxButton* Button20;
        wxButton* Button4;
        wxButton* Button1;
        wxButton* Button14;
        wxButton* Button26;
        wxButton* Button22;
        wxButton* Button2;
        wxButton* Button23;
        wxButton* Button6;
        wxButton* Button10;
        wxButton* Button11;
        wxButton* Button5;
        wxButton* Button3;
        wxButton* Button7;
        wxButton* Button25;
        wxButton* Button28;
        wxStatusBar* StatusBar1;
        wxButton* Button19;
        wxButton* Button9;
        wxButton* Button21;
        wxTextCtrl* TextCtrl1;
        wxButton* Button17;
        wxButton* Button18;
        wxButton* Button15;
        wxButton* Button13;
        wxButton* Button16;
        wxButton* Button27;
        wxButton* Button24;
        wxButton* Button8;
        wxButton* Button12;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // SCIENTIFICCALCULATORMAIN_H
