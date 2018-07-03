#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
//电话号码
void ModifyEssentInfoPoisonNumber_Name(EssentInfo *Ehead, string name, string poisonNumber) {
	EssentInfo *Ep;
	int z = 1;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (Ep->Name == name) {
			Ep->PoisonNumber = poisonNumber;
			break;
		}
		Ep = Ep->Next;
	}
}
//特别奖励
void ModifyPayrollDataSpeciReward_Name(PayrollData *Phead, string name, double SpeciReward) {
	PayrollData *Pp;
	Pp = Phead->Next;
	while (Pp != NULL) {
		if (Pp->Name == name) {
			Pp->SpeciReward = SpeciReward;
			break;
		}
		Pp = Pp->Next;
	}
}
//各种补助
void ModifyWagesSuppleSala_Name(Wages *Whead, string name, double SuppleSala) {
	Wages *Wp;
	Wp = Whead->Next;
	while (Wp != NULL) {
		if (Wp->name == name) {
			Wp->SuppleSala = SuppleSala;
			break;
		}
		Wp = Wp->Next;
	}
}
//部门
void ModifyEssentInfoDepartment_Name(EssentInfo *Ehead, string name, string Department) {
	EssentInfo *Ep;
	int z = 1;
	Ep = Ehead->Next;
	while (Ep != NULL) {
		if (Ep->Name == name) {
			Ep->Department = Department;
			break;
		}
		Ep = Ep->Next;
	}
}
//水费
void ModifyDeductionsWaterFee_Name(Deductions *Dhead, string name, double WaterFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->name == name) {
			Dp->WaterFee = WaterFee;
			break;
		}
		Dp = Dp->Next;
	}
}
//电费
void ModifyDeductionsEleFee_Name(Deductions *Dhead, string name, double EleFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->name == name) {
			Dp->EleFee = EleFee;
			break;
		}
		Dp = Dp->Next;
	}
}
//清洁费
void ModifyDeductionsCleanFee_Name(Deductions *Dhead, string name, double CleanFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->name == name) {
			Dp->CleanFee = CleanFee;
			break;
		}
		Dp = Dp->Next;
	}
}
//闭门电视费
void ModifyDeductionsTVFee_Name(Deductions *Dhead, string name, double TVFee) {
	Deductions *Dp;
	Dp = Dhead->Next;
	while (Dp != NULL) {
		if (Dp->name == name) {
			Dp->TVFee = TVFee;
			break;
		}
		Dp = Dp->Next;
	}
}