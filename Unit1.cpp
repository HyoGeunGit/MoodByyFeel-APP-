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
	Sad[1]="������";
	Sad[2]="�װ�ʹ�";
	Sad[3]="����ϴ�";
	Sad[4]="�����";
	Sad[5]="�ϱ� �ȴ�";
	Sad[6]="�ȴ�";
	Sad[7]="������";
	Sad[8]="�ǰ��ϴ�";
	Sad[9]="�ظԱ�ȴ�";
	Sad[10]="��";
	happy[1]="��ڴ�";
	happy[2]="����";
	happy[3]="����� ���Ҵ�";
	happy[4]="���Ҵ�";
	happy[5]="���";
	happy[6]="�����";
	happy[7]="^^";
	happy[8]="^^7";
	happy[9]="^��^";
	happy[10]="��!";
	Angry[1]="ȭ����";
	Angry[2]="������";
	Angry[3]="����";
	Angry[4]="��";
	Angry[5]="�̵ֹ�����";
	Angry[6]="���μ�";
	Angry[7]="�輱ö";
	Angry[8]="�׿�������ʹ�";
	Angry[9]="����";
	Angry[10]="�����";
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

