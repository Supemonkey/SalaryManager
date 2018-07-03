#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
//电话号码
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
//特别奖励
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
//各种补助
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
//部门
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
//水费
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
//电费
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
//清洁费
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
//闭门电视费
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