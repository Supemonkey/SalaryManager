#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
void FindEssent_Name(EssentInfo *Ehead, string name, int year) {
	EssentInfo *Ep;
	int z = 1;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (Ep->Name == name) {
			z = 0;
			cout << "***********************************************  ְ��������Ϣ  **********************************************" << endl;
			cout << "|����     |" << "�Ա�   |" << "����   |" << "���֤��  |" << "����ְ�Ʊ�� |" << "����ְ��  |" << "����     |" << "����  |" << "�绰���� |" << "��ͥ���� |" << "���ʿ��� |" << endl;
			PrintEssentInfo(Ep, year);
			cout << "*************************************************************************************************************" << endl;
			break;
		}
		Ep = Ep->Next;
	}
}

void FindStorage_Name(Storage *Shead, string name) {
	Storage *Sp;
	Sp = Shead->Next;
	while (Sp != NULL) {
		if (Sp->name == name) {
			cout << "*************************  ������Ϣ����  ***********************" << endl;
			cout << "|���� |" << "����     |" << "�Ա�   |" << "����  |"
				<< "����ְ�Ʊ�� |" << "����ְ��  |" << "����  |" << endl;
			PrintStorageInfo(Sp);
			cout << "****************************************************************" << endl;
			break;
		}
		Sp = Sp->Next;
	}
}

void FindWages_Name(Wages *Whead, string name) {
	Wages *Wp;
	Wp = Whead->Next;
	while (Wp != NULL) {
		if (Wp->name == name) {
			cout << "**********************  ���ʻ�����Ϣ  *********************" << endl;
			cout << "|����ְ�Ʊ�� |" << "�����ƺ�  |" << "��������  |" << "ְλ����  |" << "���Բ���  |" << endl;
			PrintWagesInfo(Wp);
			cout << "***********************************************************" << endl;
			break;
		}
		Wp = Wp->Next;
	}
}

void FindDeductions_Name(Deductions *Dhead, string name) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->name == name) {
			cout << "****************  ���ÿ۳���Ϣ  ****************" << endl;
			cout << "|���ʿ���  |" << "ˮ��  |" << "���  |" << "����  |" << "��·���ӷ�  |" << endl;
			PrintDeductionsInfo(Dp);
			cout << "************************************************" << endl;
			break;
		}
		Dp = Dp->Next;
	}
}

void FindPayrollData_Name(PayrollData *Phead, string name) {
	PayrollData *Pp;
	Pp = Phead->Next;
	while (Pp != NULL) {
		if (Pp->Name == name) {
			cout << "******************************************  ���ʵ�����  ******************************************" << endl;
			cout << "|����     |" << "���ʿ���  |" << "ˮ��  |"
				<< "���  |" << "����  |" << "��·���ӷ�  |"
				<< "˰��  |" << "Ӧ������  |" << "ʵ������  |"
				<< "�ر���  |" << endl;
			PrintPayrollDataInfo(Pp);
			cout << "**************************************************************************************************" << endl;
			break;
		}
		Pp = Pp->Next;
	}
}