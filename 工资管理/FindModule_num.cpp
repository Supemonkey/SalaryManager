#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
void FindEssent_Num(EssentInfo *Ehead, string num, int year) {
	EssentInfo *Ep;
	int z = 1;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (Ep->PosiId == num) {
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

void FindStorage_Num(Storage *Shead, string num) {
	Storage *Sp;
	Sp = Shead->Next;
	while (Sp != NULL) {
		if (Sp->num == num) {
			cout << "*************************  ������Ϣ����  ***********************" << endl;
			cout << "|���� |" << "����     |" << "�Ա�   |" << "����  |" << "����ְ�Ʊ�� |" << "����ְ��  |" << "����  |" << endl;
			PrintStorageInfo(Sp);
			cout << "****************************************************************" << endl;
			break;
		}
		Sp = Sp->Next;
	}
}

void FindWages_Num(Wages *Whead, string num) {
	Wages *Wp;
	Wp = Whead->Next;
	while (Wp != NULL) {
		if (Wp->num == num) {
			cout << "**********************  ���ʻ�����Ϣ  *********************" << endl;
			cout << "|����ְ�Ʊ�� |" << "�����ƺ�  |" << "��������  |" << "ְλ����  |" << "���Բ���  |" << endl;
			PrintWagesInfo(Wp);
			cout << "***********************************************************" << endl;
			break;
		}
		Wp = Wp->Next;
	}
}

void FindDeductions_Num(Deductions *Dhead, string num) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->num == num) {
			cout << "****************  ���ÿ۳���Ϣ  ****************" << endl;
			cout << "|���ʿ���  |" << "ˮ��  |" << "���  |" << "����  |" << "��·���ӷ�  |" << endl;
			PrintDeductionsInfo(Dp);
			cout << "************************************************" << endl;
			break;
		}
		Dp = Dp->Next;
	}
}

void FindPayrollData_Num(PayrollData *Phead, string num) {
	PayrollData *Pp;
	Pp = Phead->Next;
	while (Pp != NULL) {
		if (Pp->num == num) {
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