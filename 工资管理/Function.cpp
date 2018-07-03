#pragma once
#include"Menu.h"
#include<fstream>
#include<iomanip>
#include<string>
#include"FunDefinition .h"
#include"Class.h"
//void WriteEssentInfoData(WorkPoison *head)
//{
//	EssentInfo *Ehead, *Ep;
//	Ehead = GetEssentInfo(head);
//}
//void WriteWagesData(WorkPoison *head)
//{
//	Wages *Whead, *Wp;
//	Whead = GetWages(head);
//}
//void WriteDeductionsData(WorkPoison *head) {
//	Deductions *Dhead, *Dp;
//	Dhead = GetDeductions(head);
//}
//void WritePayrollDataData(WorkPoison *head)
//{
//	PayrollData *Phead, *Pp;
//	Phead = GetPayrollData(head);
//}
//void WriteStorageData(WorkPoison *head)
//{
//	Storage *Shead, *Sp;
//	Shead = GetStorage(head);
//}
double Tax(double Shouldpay)
{
	double taxdata = 0;
	if (Shouldpay < 800) {
		taxdata = 0;
	}
	else {
		if (Shouldpay > 800)
			taxdata += (Shouldpay - 800)*0.05;
		if (Shouldpay > 1400)
			taxdata += (Shouldpay - 1400)*0.1;
	}
	return taxdata;
}
//���۲�A,B,C
void ManangeSala(PayrollData *Phead, EssentInfo *Ehead) {
	PayrollData *Pp = Phead->Next;
	EssentInfo *Ep = Ehead->Next;
	double temp[3] = { 0 };
	while (Ep != NULL) {
		if (Ep->PoisonNumber == "����Ա") {
			if (Ep->Department == "���۲�A")
				temp[0] += Pp->ShouldPay / 0.04;
			else if (Ep->Department == "���۲�B")
				temp[1] += Pp->ShouldPay / 0.04;
			else
				temp[2] += Pp->ShouldPay / 0.04;
		}
		Ep = Ep->Next;
		Pp = Pp->Next;
	}
	Ep = Ehead->Next;
	Pp = Phead->Next;
	while (Ep != NULL) {
		if (Ep->PoisonNumber == "���۾���") {
			if (Ep->Department == "���۲�A") {
				Pp->ShouldPay += temp[0];
				Pp->TaxFee = Tax(Pp->ShouldPay);
				Pp->Payroll = Pp->ShouldPay - Pp->TaxFee;
			}
			else if (Ep->Department == "���۲�B") {
				Pp->ShouldPay += temp[1];
				Pp->TaxFee = Tax(Pp->ShouldPay);
				Pp->Payroll = Pp->ShouldPay - Pp->TaxFee;
			}
			else {
				Pp->ShouldPay += temp[2];
				Pp->TaxFee = Tax(Pp->ShouldPay);
				Pp->Payroll = Pp->ShouldPay - Pp->TaxFee;
			}
		}
		Ep = Ep->Next;
		Pp = Pp->Next;
	}
}
void getCursor(int x, int y) {
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}

void OptionMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead, char s)
{
	Menu M;
	char m;
	ifstream file("ѡ��.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 13);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m)
	{
	case '1': {
		switch (s)
		{
		case '1':M.MainMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		case '2':M.ModiMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		case '3':M.ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		case'4':M.DeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		case'5':M.FindMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		case '6':M.PrintMenu(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		case'7':M.ModiInforMenu_name(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		case'8':M.ModiInforMenu_num(head, Ehead, Shead, Whead, Dhead, Phead);
			break;
		}
	}
	case '2':break;
	default: {
		cout << "�޴�ѡ��....";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, s);
		break;
	}
	}
}