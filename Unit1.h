//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Objects.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <System.Bluetooth.Components.hpp>
#include <System.Bluetooth.hpp>
#include <FMX.Media.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TRectangle *Rectangle2;
	TRectangle *Rectangle1;
	TButton *Button1;
	TPanel *Panel1;
	TRectangle *Rectangle3;
	TLabel *Label1;
	TLabel *Label6;
	TComboBox *ComboBox3;
	TListBoxItem *ListBoxItem1;
	TListBoxItem *ListBoxItem2;
	TListBoxItem *ListBoxItem3;
	TListBoxItem *ListBoxItem4;
	TListBoxItem *ListBoxItem5;
	TListBoxItem *ListBoxItem6;
	TListBoxItem *ListBoxItem7;
	TListBoxItem *ListBoxItem8;
	TLabel *Label5;
	TComboBox *ComboBox2;
	TListBoxItem *ListBoxItem15;
	TListBoxItem *ListBoxItem16;
	TListBoxItem *ListBoxItem17;
	TListBoxItem *ListBoxItem18;
	TListBoxItem *ListBoxItem19;
	TListBoxItem *ListBoxItem20;
	TListBoxItem *ListBoxItem21;
	TListBoxItem *ListBoxItem22;
	TListBoxItem *ListBoxItem23;
	TListBoxItem *ListBoxItem24;
	TListBoxItem *ListBoxItem25;
	TListBoxItem *ListBoxItem26;
	TListBoxItem *ListBoxItem27;
	TListBoxItem *ListBoxItem28;
	TLabel *Label7;
	TComboBox *ComboBox1;
	TListBoxItem *ListBoxItem12;
	TListBoxItem *ListBoxItem13;
	TListBoxItem *ListBoxItem14;
	TListBoxItem *ListBoxItem29;
	TListBoxItem *ListBoxItem30;
	TListBox *ListBox1;
	TButton *Button3;
	TButton *Button5;
	TMemo *Memo2;
	TEdit *Edit3;
	TButton *Button2;
	TLabel *Label8;
	TEdit *Edit2;
	TEdit *Edit1;
	TLabel *Label2;
	TButton *Button4;
	TButton *Button6;
	TButton *Button7;
	TPanel *Panel2;
	TRectangle *Rectangle4;
	TLabel *Label3;
	TButton *Button10;
	TBluetooth *Bluetooth1;
	TButton *Button8;
	TListBox *ListBox2;
	TPanel *Panel3;
	TListBox *ListBox3;
	TButton *Button9;
	TButton *connect;
	TRectangle *Rectangle5;
	TLabel *Label4;
	TMediaPlayer *MediaPlayer1;
	void __fastcall Rectangle3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Rectangle4Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall connectClick(TObject *Sender);
	void __fastcall Rectangle5Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	TBluetoothServiceList *service;
	TBluetoothSocket *soc;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
