#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
//�绰����
void ModifyEssentInfoPoisonNumber_Num(EssentInfo *Ehead, string num, string poisonNumber) {
	EssentInfo *Ep;
	int z = 1;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (Ep->PosiId == num) {
			Ep->PoisonNumber = poisonNumber;
			break;
		}
		Ep = Ep->Next;
	}
}
//�ر���
void ModifyPayrollDataSpeciReward_Num(PayrollData *Phead, string num, double SpeciReward) {
	PayrollData *Pp;
	Pp = Phead->Next;
	while (Pp != NULL) {
		if (Pp->num == num) {
			Pp->SpeciReward = SpeciReward;
			break;
		}
		Pp = Pp->Next;
	}
}
//���ֲ���
void ModifyWagesSuppleSala_Num(Wages *Whead, string num, double SuppleSala) {
	Wages *Wp;
	Wp = Whead->Next;
	while (Wp != NULL) {
		if (Wp->num == num) {
			Wp->SuppleSala = SuppleSala;
			break;
		}
		Wp = Wp->Next;
	}
}
//����
void ModifyEssentInfoDepartment_Num(EssentInfo *Ehead, string num, string Department) {
	EssentInfo *Ep;
	int z = 1;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (Ep->PosiId == num) {
			Ep->Department = Department;
			break;
		}
		Ep = Ep->Next;
	}
}
//ˮ��
void ModifyDeductionsWaterFee_Num(Deductions *Dhead, string num, double WaterFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->num == num) {
			Dp->WaterFee = WaterFee;
			break;
		}
		Dp = Dp->Next;
	}
}
//���
void ModifyDeductionsEleFee_Num(Deductions *Dhead, string num, double EleFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->num == num) {
			Dp->EleFee = EleFee;
			break;
		}
		Dp = Dp->Next;
	}
}
//����
void ModifyDeductionsCleanFee_Num(Deductions *Dhead, string num, double CleanFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->num == num) {
			Dp->CleanFee = CleanFee;
			break;
		}
		Dp = Dp->Next;
	}
}
//���ŵ��ӷ�
void ModifyDeductionsTVFee_Num(Deductions *Dhead, string num, double TVFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->num == num) {
			Dp->TVFee = TVFee;
			break;
		}
		Dp = Dp->Next;
	}
}