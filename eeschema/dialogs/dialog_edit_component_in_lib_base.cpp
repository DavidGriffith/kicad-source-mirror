///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 19 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "dialog_edit_component_in_lib_base.h"

///////////////////////////////////////////////////////////////////////////

DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : DIALOG_SHIM( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bMainSizer;
	bMainSizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bUpperSizer;
	bUpperSizer = new wxBoxSizer( wxVERTICAL );
	
	m_NoteBook = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	m_PanelBasic = new wxPanel( m_NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerBasicPanel;
	bSizerBasicPanel = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* m_OptionsBoxSizer;
	m_OptionsBoxSizer = new wxStaticBoxSizer( new wxStaticBox( m_PanelBasic, wxID_ANY, _("General:") ), wxVERTICAL );
	
	m_AsConvertButt = new wxCheckBox( m_OptionsBoxSizer->GetStaticBox(), wxID_ANY, _("Has alternate symbol (DeMorgan)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_AsConvertButt->SetToolTip( _("Check this option if the symbol has an alternate body style (De Morgan)") );
	
	m_OptionsBoxSizer->Add( m_AsConvertButt, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_ShowPinNumButt = new wxCheckBox( m_OptionsBoxSizer->GetStaticBox(), wxID_ANY, _("Show pin number"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ShowPinNumButt->SetValue(true); 
	m_ShowPinNumButt->SetToolTip( _("Show or hide pin numbers") );
	
	m_OptionsBoxSizer->Add( m_ShowPinNumButt, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_ShowPinNameButt = new wxCheckBox( m_OptionsBoxSizer->GetStaticBox(), wxID_ANY, _("Show pin name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_ShowPinNameButt->SetValue(true); 
	m_ShowPinNameButt->SetToolTip( _("Show or hide pin names") );
	
	m_OptionsBoxSizer->Add( m_ShowPinNameButt, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_PinsNameInsideButt = new wxCheckBox( m_OptionsBoxSizer->GetStaticBox(), wxID_ANY, _("Place pin names inside"), wxDefaultPosition, wxDefaultSize, 0 );
	m_PinsNameInsideButt->SetValue(true); 
	m_PinsNameInsideButt->SetToolTip( _("Check this option to have pin names inside the body and pin number outside.\nIf not checked pins names and pins numbers are outside.") );
	
	m_OptionsBoxSizer->Add( m_PinsNameInsideButt, 0, wxALL, 5 );
	
	
	bSizerBasicPanel->Add( m_OptionsBoxSizer, 0, 0, 5 );
	
	m_staticline3 = new wxStaticLine( m_PanelBasic, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerBasicPanel->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizerMidBasicPanel;
	bSizerMidBasicPanel = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizernbunits;
	bSizernbunits = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextNbUnits = new wxStaticText( m_PanelBasic, wxID_ANY, _("Number of Units:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextNbUnits->Wrap( -1 );
	m_staticTextNbUnits->SetToolTip( _("Enter the number of units for a symbol that contains more than one unit") );
	
	bSizernbunits->Add( m_staticTextNbUnits, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_SelNumberOfUnits = new wxSpinCtrl( m_PanelBasic, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 26, 1 );
	bSizernbunits->Add( m_SelNumberOfUnits, 0, wxBOTTOM|wxRIGHT|wxLEFT|wxEXPAND, 5 );
	
	
	bSizerMidBasicPanel->Add( bSizernbunits, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerOffset;
	bSizerOffset = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextskew = new wxStaticText( m_PanelBasic, wxID_ANY, _("Pin Name Position Offset:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextskew->Wrap( -1 );
	m_staticTextskew->SetToolTip( _("Margin (in 0.001 inches) between a pin name position and the component body.\nA value from 10 to 40 is usually good.") );
	
	bSizerOffset->Add( m_staticTextskew, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_SetSkew = new wxSpinCtrl( m_PanelBasic, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 100, 0 );
	bSizerOffset->Add( m_SetSkew, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizerMidBasicPanel->Add( bSizerOffset, 1, wxEXPAND, 5 );
	
	
	bSizerBasicPanel->Add( bSizerMidBasicPanel, 0, wxEXPAND, 5 );
	
	m_staticline1 = new wxStaticLine( m_PanelBasic, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerBasicPanel->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	m_OptionPower = new wxCheckBox( m_PanelBasic, wxID_ANY, _("Define as power symbol"), wxDefaultPosition, wxDefaultSize, 0 );
	m_OptionPower->SetToolTip( _("Check this option when the symbol is a power symbol") );
	
	bSizerBasicPanel->Add( m_OptionPower, 0, wxALL, 5 );
	
	m_OptionPartsLocked = new wxCheckBox( m_PanelBasic, wxID_ANY, _("All units are not interchangeable"), wxDefaultPosition, wxDefaultSize, 0 );
	m_OptionPartsLocked->SetToolTip( _("Check this option when creating multiple unit symbols and all units are not interchangeable") );
	
	bSizerBasicPanel->Add( m_OptionPartsLocked, 0, wxALL, 5 );
	
	
	m_PanelBasic->SetSizer( bSizerBasicPanel );
	m_PanelBasic->Layout();
	bSizerBasicPanel->Fit( m_PanelBasic );
	m_NoteBook->AddPage( m_PanelBasic, _("Options"), true );
	m_PanelDoc = new wxPanel( m_NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* m_PanelDocBoxSizer;
	m_PanelDocBoxSizer = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextDescription = new wxStaticText( m_PanelDoc, wxID_ANY, _("Description:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDescription->Wrap( -1 );
	m_staticTextDescription->SetToolTip( _("A short description that is displayed in Eeschema.\nCan be a very good help when selecting components in libraries components lists.") );
	
	m_PanelDocBoxSizer->Add( m_staticTextDescription, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_DocCtrl = new wxTextCtrl( m_PanelDoc, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_PanelDocBoxSizer->Add( m_DocCtrl, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	m_staticTextKeywords = new wxStaticText( m_PanelDoc, wxID_ANY, _("Keywords:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKeywords->Wrap( -1 );
	m_staticTextKeywords->SetToolTip( _("Enter key words that can be used to select this symbol.\nKey words cannot have spaces and are separated by a space.") );
	
	m_PanelDocBoxSizer->Add( m_staticTextKeywords, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_KeywordsCtrl = new wxTextCtrl( m_PanelDoc, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_PanelDocBoxSizer->Add( m_KeywordsCtrl, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	m_staticTextDocFileName = new wxStaticText( m_PanelDoc, wxID_ANY, _("Documentation File Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDocFileName->Wrap( -1 );
	m_staticTextDocFileName->SetToolTip( _("Enter the documentation file (a .pdf document) associated with the symbol.") );
	
	m_PanelDocBoxSizer->Add( m_staticTextDocFileName, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_DocfileCtrl = new wxTextCtrl( m_PanelDoc, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 400,-1 ), 0 );
	m_PanelDocBoxSizer->Add( m_DocfileCtrl, 0, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizerPaneldocbutts;
	bSizerPaneldocbutts = new wxBoxSizer( wxHORIZONTAL );
	
	m_ButtonCopyDoc = new wxButton( m_PanelDoc, ID_COPY_DOC_TO_ALIAS, _("Copy Document from Parent"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaneldocbutts->Add( m_ButtonCopyDoc, 0, wxALL, 5 );
	
	m_buttonBrowseDocFiles = new wxButton( m_PanelDoc, ID_BROWSE_DOC_FILES, _("Browse Files"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPaneldocbutts->Add( m_buttonBrowseDocFiles, 0, wxALL, 5 );
	
	
	m_PanelDocBoxSizer->Add( bSizerPaneldocbutts, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	m_PanelDoc->SetSizer( m_PanelDocBoxSizer );
	m_PanelDoc->Layout();
	m_PanelDocBoxSizer->Fit( m_PanelDoc );
	m_NoteBook->AddPage( m_PanelDoc, _("Description"), false );
	m_PanelAlias = new wxPanel( m_NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerMainPanelAlias;
	bSizerMainPanelAlias = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bLeftBoxSizerPanelAlias;
	bLeftBoxSizerPanelAlias = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextAlias = new wxStaticText( m_PanelAlias, wxID_ANY, _("Alias List:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAlias->Wrap( -1 );
	m_staticTextAlias->SetToolTip( _("An alias is a symbol that uses the body of its root symbol.\nIt has its own documentation and keywords.\nA fast way to extend a library with similar symbols.") );
	
	bLeftBoxSizerPanelAlias->Add( m_staticTextAlias, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_PartAliasListCtrl = new wxListBox( m_PanelAlias, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bLeftBoxSizerPanelAlias->Add( m_PartAliasListCtrl, 1, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bSizerMainPanelAlias->Add( bLeftBoxSizerPanelAlias, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bRightBoxSizerPanelAlias;
	bRightBoxSizerPanelAlias = new wxBoxSizer( wxVERTICAL );
	
	m_ButtonAddeAlias = new wxButton( m_PanelAlias, ID_ADD_ALIAS, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	bRightBoxSizerPanelAlias->Add( m_ButtonAddeAlias, 0, wxALL|wxEXPAND, 5 );
	
	m_ButtonEditAlias = new wxButton( m_PanelAlias, wxID_ANY, _("Edit"), wxDefaultPosition, wxDefaultSize, 0 );
	bRightBoxSizerPanelAlias->Add( m_ButtonEditAlias, 0, wxALL, 5 );
	
	m_ButtonDeleteOneAlias = new wxButton( m_PanelAlias, ID_DELETE_ONE_ALIAS, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bRightBoxSizerPanelAlias->Add( m_ButtonDeleteOneAlias, 0, wxALL|wxEXPAND, 5 );
	
	m_ButtonDeleteAllAlias = new wxButton( m_PanelAlias, ID_DELETE_ALL_ALIAS, _("Delete All"), wxDefaultPosition, wxDefaultSize, 0 );
	bRightBoxSizerPanelAlias->Add( m_ButtonDeleteAllAlias, 0, wxALL, 5 );
	
	
	bSizerMainPanelAlias->Add( bRightBoxSizerPanelAlias, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	
	m_PanelAlias->SetSizer( bSizerMainPanelAlias );
	m_PanelAlias->Layout();
	bSizerMainPanelAlias->Fit( m_PanelAlias );
	m_NoteBook->AddPage( m_PanelAlias, _("Aliases"), false );
	m_PanelFootprintFilter = new wxPanel( m_NoteBook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bPanelFpFilterBoxSizer;
	bPanelFpFilterBoxSizer = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bFpFilterLeftBoxSizer;
	bFpFilterLeftBoxSizer = new wxBoxSizer( wxVERTICAL );
	
	m_staticTextFootprints = new wxStaticText( m_PanelFootprintFilter, wxID_ANY, _("Footprints:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFootprints->Wrap( -1 );
	m_staticTextFootprints->SetToolTip( _("A list of footprints names that can be used for this symbol.\nFootprints names can used wildcards like sm* to allow all footprints names starting by sm.") );
	
	bFpFilterLeftBoxSizer->Add( m_staticTextFootprints, 0, wxTOP|wxRIGHT|wxLEFT, 5 );
	
	m_FootprintFilterListBox = new wxListBox( m_PanelFootprintFilter, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bFpFilterLeftBoxSizer->Add( m_FootprintFilterListBox, 1, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	bPanelFpFilterBoxSizer->Add( bFpFilterLeftBoxSizer, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bFpFilterRightBoxSizer;
	bFpFilterRightBoxSizer = new wxBoxSizer( wxVERTICAL );
	
	m_buttonAddFpF = new wxButton( m_PanelFootprintFilter, ID_ADD_FOOTPRINT_FILTER, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	bFpFilterRightBoxSizer->Add( m_buttonAddFpF, 0, wxALL|wxEXPAND, 5 );
	
	m_buttonEditOneFootprintFilter = new wxButton( m_PanelFootprintFilter, wxID_ANY, _("Edit"), wxDefaultPosition, wxDefaultSize, 0 );
	bFpFilterRightBoxSizer->Add( m_buttonEditOneFootprintFilter, 0, wxALL|wxEXPAND, 5 );
	
	m_ButtonDeleteOneFootprintFilter = new wxButton( m_PanelFootprintFilter, ID_DELETE_ONE_FOOTPRINT_FILTER, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bFpFilterRightBoxSizer->Add( m_ButtonDeleteOneFootprintFilter, 0, wxALL|wxEXPAND, 5 );
	
	m_ButtonDeleteAllFootprintFilter = new wxButton( m_PanelFootprintFilter, ID_DELETE_ALL_FOOTPRINT_FILTER, _("Delete All"), wxDefaultPosition, wxDefaultSize, 0 );
	bFpFilterRightBoxSizer->Add( m_ButtonDeleteAllFootprintFilter, 0, wxALL|wxEXPAND, 5 );
	
	
	bPanelFpFilterBoxSizer->Add( bFpFilterRightBoxSizer, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	
	m_PanelFootprintFilter->SetSizer( bPanelFpFilterBoxSizer );
	m_PanelFootprintFilter->Layout();
	bPanelFpFilterBoxSizer->Fit( m_PanelFootprintFilter );
	m_NoteBook->AddPage( m_PanelFootprintFilter, _("Footprint Filter"), false );
	
	bUpperSizer->Add( m_NoteBook, 1, wxEXPAND, 5 );
	
	
	bMainSizer->Add( bUpperSizer, 1, wxEXPAND, 5 );
	
	m_stdSizerButton = new wxStdDialogButtonSizer();
	m_stdSizerButtonOK = new wxButton( this, wxID_OK );
	m_stdSizerButton->AddButton( m_stdSizerButtonOK );
	m_stdSizerButtonCancel = new wxButton( this, wxID_CANCEL );
	m_stdSizerButton->AddButton( m_stdSizerButtonCancel );
	m_stdSizerButton->Realize();
	
	bMainSizer->Add( m_stdSizerButton, 0, wxEXPAND|wxALL, 5 );
	
	
	this->SetSizer( bMainSizer );
	this->Layout();
	bMainSizer->Fit( this );
	
	// Connect Events
	m_OptionPartsLocked->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::OnUpdateInterchangeableUnits ), NULL, this );
	m_ButtonCopyDoc->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::CopyDocFromRootToAlias ), NULL, this );
	m_buttonBrowseDocFiles->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::BrowseAndSelectDocFile ), NULL, this );
	m_ButtonAddeAlias->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::AddAliasOfPart ), NULL, this );
	m_ButtonEditAlias->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::EditAliasOfPart ), NULL, this );
	m_ButtonDeleteOneAlias->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DeleteAliasOfPart ), NULL, this );
	m_ButtonDeleteAllAlias->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DeleteAllAliasOfPart ), NULL, this );
	m_buttonAddFpF->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::AddFootprintFilter ), NULL, this );
	m_buttonEditOneFootprintFilter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::EditOneFootprintFilter ), NULL, this );
	m_ButtonDeleteOneFootprintFilter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DeleteOneFootprintFilter ), NULL, this );
	m_ButtonDeleteAllFootprintFilter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DeleteAllFootprintFilter ), NULL, this );
	m_stdSizerButtonCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::OnCancelClick ), NULL, this );
	m_stdSizerButtonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::OnOkClick ), NULL, this );
}

DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::~DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE()
{
	// Disconnect Events
	m_OptionPartsLocked->Disconnect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::OnUpdateInterchangeableUnits ), NULL, this );
	m_ButtonCopyDoc->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::CopyDocFromRootToAlias ), NULL, this );
	m_buttonBrowseDocFiles->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::BrowseAndSelectDocFile ), NULL, this );
	m_ButtonAddeAlias->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::AddAliasOfPart ), NULL, this );
	m_ButtonEditAlias->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::EditAliasOfPart ), NULL, this );
	m_ButtonDeleteOneAlias->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DeleteAliasOfPart ), NULL, this );
	m_ButtonDeleteAllAlias->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DeleteAllAliasOfPart ), NULL, this );
	m_buttonAddFpF->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::AddFootprintFilter ), NULL, this );
	m_buttonEditOneFootprintFilter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::EditOneFootprintFilter ), NULL, this );
	m_ButtonDeleteOneFootprintFilter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DeleteOneFootprintFilter ), NULL, this );
	m_ButtonDeleteAllFootprintFilter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::DeleteAllFootprintFilter ), NULL, this );
	m_stdSizerButtonCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::OnCancelClick ), NULL, this );
	m_stdSizerButtonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_EDIT_COMPONENT_IN_LIBRARY_BASE::OnOkClick ), NULL, this );
	
}
