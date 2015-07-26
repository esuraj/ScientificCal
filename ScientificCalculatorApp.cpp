/***************************************************************
 * Name:      ScientificCalculatorApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2015-07-26
 * Copyright:  ()
 * License:
 **************************************************************/

#include "ScientificCalculatorApp.h"

//(*AppHeaders
#include "ScientificCalculatorMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ScientificCalculatorApp);

bool ScientificCalculatorApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ScientificCalculatorFrame* Frame = new ScientificCalculatorFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
