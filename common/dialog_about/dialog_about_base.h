///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May  6 2016)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __DIALOG_ABOUT_BASE_H__
#define __DIALOG_ABOUT_BASE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/sizer.h>
#include <wx/aui/auibook.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_ABOUT_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_ABOUT_BASE : public wxDialog 
{
	private:
	
	protected:
		wxStaticBitmap* m_bitmapApp;
		wxStaticText* m_staticTextAppTitle;
		wxStaticText* m_staticTextCopyright;
		wxStaticText* m_staticTextBuildVersion;
		wxStaticText* m_staticTextLibVersion;
		wxAuiNotebook* m_auiNotebook;
		wxButton* m_btShowVersionInfo;
		wxButton* m_btCopyVersionInfo;
		wxButton* m_btOk;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onShowVersionInfo( wxCommandEvent& event ) { event.Skip(); }
		virtual void onCopyVersionInfo( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DIALOG_ABOUT_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 750,471 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~DIALOG_ABOUT_BASE();
	
};

#endif //__DIALOG_ABOUT_BASE_H__
