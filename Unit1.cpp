//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.NmXhdpiPh.fmx", _PLAT_ANDROID)

TForm1 *Form1;
	String a;
	String Sad[50],happy[50],Angry[50],memo[45];
	int i=0,j;
	String k;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	k=Edit2->Text;
	a=Memo1->Text;
	Sad[1]="슬프다";
	Sad[2]="죽고싶다";
	Sad[3]="우울하다";
	Sad[4]="힘들다";
	Sad[5]="하기 싫다";
	Sad[6]="싫다";
	Sad[7]="아프다";
	Sad[8]="피곤하다";
	Sad[9]="해먹기싫다";
	Sad[10]="ㅠ";
	happy[1]="기쁘다";
	happy[2]="좋다";
	happy[3]="기분이 좋았다";
	happy[4]="좋았다";
	happy[5]="사랑";
	happy[6]="기모찌";
	happy[7]="^^";
	happy[8]="^^7";
	happy[9]="^오^";
	happy[10]="오!";
	Angry[1]="화난다";
	Angry[2]="ㅈ같다";
	Angry[3]="ㅅㅂ";
	Angry[4]="ㅗ";
	Angry[5]="애미뒤졌다";
	Angry[6]="정민서";
	Angry[7]="김선철";
	Angry[8]="죽여버리고싶다";
	Angry[9]="병신";
	Angry[10]="김수연";
		for (i = 0; i <= 10; i++) {
		if (a.Pos(Sad[i])) {
			ShowMessage("Sad");
			j=1;
			MediaPlayer1->FileName="C:\\Users\\shimh\\Downloads\\Alan Walker - Faded [128].mp3";
			MediaPlayer1->Play();
		}
			if (a.Pos(happy[i])) {
			ShowMessage("happy");
			j=2;
			MediaPlayer1->FileName="C:\\Users\\shimh\\Downloads\\daydream.mp3";
			MediaPlayer1->Play();
		}
			if (a.Pos(Angry[i])) {
			ShowMessage("Angry");
			j=3;
			MediaPlayer1->FileName="C:\\Users\\shimh\\Downloads\\zero hour.mp3";
			MediaPlayer1->Play();
		}
	}
	//	soc->SendData(TEncoding::Unicode):);
	soc->SendData(TEncoding::UTF8->GetBytes(j));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rectangle3Click(TObject *Sender)
{
	Panel1->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Panel1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Rectangle4Click(TObject *Sender)
{
Panel2->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
	Panel3->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{

	ListBox1->Clear();
	for(int x=0 ; x < Bluetooth1->PairedDevices()->Count; x++)
	{
	   ListBox1->Items->Add(Bluetooth1->PairedDevices()->Items[x]->DeviceName);

	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button9Click(TObject *Sender)
{
	ListBox3->Clear();
	for(int x=0 ; x < Bluetooth1->PairedDevices()->Count; x++)
	{
	   ListBox3->Items->Add(Bluetooth1->PairedDevices()->Items[x]->DeviceName);

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::connectClick(TObject *Sender)
{

	int a = ListBox3->ItemIndex;
	if(a>-1)
	{
		if(Bluetooth1->IsPaired(Bluetooth1->PairedDevices()->Items[a]))
		{
			ShowMessage("Pairing Completed.");
			service = Bluetooth1->LastServiceList(Bluetooth1->PairedDevices()->Items[a]);
			soc = Bluetooth1->CreateClientSocket(Bluetooth1->PairedDevices()->Items[a], service->Items[0].UUID,false);
			soc->Connect();

		}
		else
		{
			ShowMessage("fail");
		}
	}
	else
	{
		ShowMessage("Select device");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rectangle5Click(TObject *Sender)
{
	Panel3->Visible=false;
}

//---------------------------------------------------------------------------

