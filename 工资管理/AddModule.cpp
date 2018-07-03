#pragma once
#include<iostream>
#include"FunDefinition .h"
#include<iomanip>
using namespace std;
EssentInfo *GetEssentInfo(WorkPoison *head) {
	WorkPoison *p;
	Ess *Ep, *Eq, *Ehead;
	Eq = new Ess;
	Ep = Eq;
	Ehead = Eq;
	p = head->Next;
	while (p != NULL) {
		Eq = new Ess;
		Ep->Next = Eq;
		Ep = Eq;
		Ep->Age = p->People.Age[0];
		Ep->WorkAge = p->People.Age[1];
		Ep->Salacard = p->People.EmpInfo[0];
		Ep->Idcard = p->People.EmpInfo[1];
		Ep->Name = p->People.EmpInfo[2];
		Ep->Sex = p->People.EmpInfo[3];
		Ep->Department = p->People.EmpInfo[4];
		Ep->PosiName = p->People.EmpInfo[5];
		Ep->PosiId = p->People.EmpInfo[6];
		Ep->HomeNumber = p->People.EmpInfo[7];
		Ep->PoisonNumber = p->People.EmpInfo[8];
		p = p->Next;
	}
	Ep->Next = NULL;
	return Ehead;
}
Storage *GetStorage(WorkPoison *head) {
	WorkPoison *p;
	Sto *Sp, *Sq, *Shead;
	p = head->Next;
	Sq = new Sto;
	Shead = Sq;
	Sp = Sq;
	int i = 1;
	while (p != NULL) {
		Sq = new Sto;
		Sp->Next = Sq;
		Sp = Sq;
		Sp->age = p->People.Age[0];
		Sp->sex = p->People.EmpInfo[3];
		Sp->name = p->People.EmpInfo[2];
		Sp->num = p->People.EmpInfo[6];
		Sp->Posi = p->People.EmpInfo[5];
		Sp->Sala = (p->People.Salary[0] + p->People.Salary[1]
			+ p->People.Salary[2] + p->People.Salary[3]) -
			(p->People.Cost[0] + p->People.Cost[1] +
				p->People.Cost[2] + p->People.Cost[3]) - Tax(p->People.Salary[0] + p->People.Salary[1]);
		Sp->rank = i;
		Sp->log = 1;
		p = p->Next;
		i++;
	}
	Sp->Next = NULL;
	return Shead;
}
Wages *GetWages(WorkPoison *head) {
	WorkPoison *p;
	Wage *Wp, *Wq, *Whead;
	p = head->Next;
	Wq = new Wage;
	Whead = Wq;
	Wp = Wq;
	while (p != NULL) {
		Wq = new Wage;
		Wp->Next = Wq;
		Wp = Wq;
		Wp->name = p->People.EmpInfo[2];
		Wp->BasicSala = p->People.Salary[0];
		Wp->num = p->People.EmpInfo[6];
		Wp->Posiname = p->People.EmpInfo[5];
		Wp->PosiSala = p->People.Salary[1];
		Wp->SuppleSala = p->People.Salary[2];
		p = p->Next;
	}
	Wp->Next = NULL;
	return Whead;
}
Deductions *GetDeductions(WorkPoison *head) {
	WorkPoison *p;
	Dedu *Dp, *Dq, *Dhead;
	Dq = new Dedu;
	Dhead = Dq;
	Dp = Dq;
	p = head->Next;
	while (p != NULL) {
		Dq = new Dedu;
		Dp->Next = Dq;
		Dp = Dq;
		Dp->name = p->People.EmpInfo[2];
		Dp->num = p->People.EmpInfo[6];
		Dp->CleanFee = p->People.Cost[2];
		Dp->EleFee = p->People.Cost[1];
		Dp->SalaId = p->People.EmpInfo[0];
		Dp->TVFee = p->People.Cost[3];
		Dp->WaterFee = p->People.Cost[0];
		p = p->Next;
	}
	Dp->Next = NULL;
	return Dhead;
}
PayrollData *GetPayrollData(WorkPoison *head) {
	WorkPoison *p;
	Payroll *Pq, *Pp, *Phead;
	p = head->Next;
	Pq = new Payroll;
	Pp = Pq;
	Phead = Pq;
	while (p != NULL) {
		Pq = new Payroll;
		Pp->Next = Pq;
		Pp = Pq;
		Pp->Next = NULL;
		Pp->num = p->People.EmpInfo[6];
		Pp->EleFee = p->People.Cost[1];
		Pp->SalaId = p->People.EmpInfo[0];
		Pp->TVFee = p->People.Cost[3];
		Pp->WaterFee = p->People.Cost[0];
		Pp->cleanFee = p->People.Cost[2];
		Pp->Name = p->People.EmpInfo[2];
		Pp->ShouldPay = p->People.Salary[0] + p->People.Salary[1];
		Pp->SpeciReward = p->People.Salary[3];
		Pp->TaxFee = Tax(Pp->ShouldPay);
		Pp->Payroll = Pp->ShouldPay - Pp->TaxFee;
		p = p->Next;
	}
	return Phead;
}