/***************************************************************
 * Name:      ScientificCalApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Suraj ()
 * Created:   2015-07-18
 * Copyright: Suraj ()
 * License:
 **************************************************************/

#include "ScientificCalApp.h"

//(*AppHeaders
#include "ScientificCalMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ScientificCalApp);

bool ScientificCalApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ScientificCalFrame* Frame = new ScientificCalFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
