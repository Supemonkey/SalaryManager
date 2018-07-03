#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
using namespace std;

void PinterEssent(EssentInfo *Ehead, int year)
{
	EssentInfo *Ep;
	Ep = Ehead->Next;
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);// ǰ��ɫ_��ɫ
	cout << "***********************************************  ְ��������Ϣ  **********************************************" << endl;
	cout << "|����     |" << "�Ա�   |" << "����   |"
		<< "���֤��  |" << "����ְ�Ʊ�� |" << "����ְ��  |"
		<< "����     |" << "����  |" << "�绰���� |"
		<< "��ͥ���� |" << "���ʿ��� |" << endl;
	while (Ep != NULL) {
		PrintEssentInfo(Ep, year);
		Ep = Ep->Next;
	}
	cout << "*************************************************************************************************************" << endl << endl;
}
void PrintStorage(Storage *Shead) {
	Storage *Sp;
	Sp = Shead->Next;
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);// ǰ��ɫ_��ɫ
	cout << "*************************  ������Ϣ����  ***********************" << endl;
	cout << "|���� |" << "����     |" << "�Ա�   |"
		<< "����  |" << "����ְ�Ʊ�� |"
		<< "����ְ��  |" << "����  |" << endl;
	while (Sp != NULL) {
		PrintStorageInfo(Sp);
		Sp = Sp->Next;
	}
	cout << "****************************************************************" << endl << endl;
}

void PrintWages(Wages *Whead) {
	Wages *Wp;
	Wp = Whead->Next;
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);// ǰ��ɫ_��ɫ
	cout << "**********************  ���ʻ�����Ϣ  *********************" << endl;
	cout << "|����ְ�Ʊ�� |" << "�����ƺ�  |" << "��������  |"
		<< "ְλ����  |" << "���Բ���  |" << endl;
	while (Wp != NULL) {
		PrintWagesInfo(Wp);
		Wp = Wp->Next;
	}
	cout << "***********************************************************" << endl << endl;
}
void PrintDeductions(Deductions *Dhead) {
	Deductions *Dp;
	Dp = Dhead->Next;
	cout << "****************  ���ÿ۳���Ϣ  ****************" << endl;
	cout << "|���ʿ���  |" << "ˮ��  |" << "���  |"
		<< "����  |" << "��·���ӷ�  |" << endl;
	while (Dp != NULL) {
		PrintDeductionsInfo(Dp);
		Dp = Dp->Next;
	}
	cout << "************************************************" << endl << endl;
}

void PrintPayrollData(PayrollData *Phead) {
	PayrollData *Pp;
	Pp = Phead->Next;
	cout << "******************************************  ���ʵ�����  ******************************************" << endl;
	cout << "|����     |" << "���ʿ���  |" << "ˮ��  |"
		<< "���  |" << "����  |" << "��·���ӷ�  |"
		<< "˰��  |" << "Ӧ������  |" << "ʵ������  |"
		<< "�ر���  |" << endl;
	while (Pp != NULL) {
		PrintPayrollDataInfo(Pp);
		Pp = Pp->Next;
	}
	cout << "**************************************************************************************************" << endl << endl;
}