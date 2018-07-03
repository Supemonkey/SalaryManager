#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
void DeletEssentInfo_Num(EssentInfo *Ehead, string num) {
	EssentInfo *Ep, *Eq;
	Ep = Ehead->Next;
	Eq = Ehead;
	while (Ep != NULL) {
		if (Ep->PosiId == num && Ep->Next == NULL) {
			Eq->Next = NULL;
		}
		else if (Ep->PosiId == num) {
			Eq->Next = Ep->Next;
			free(Ep);
			break;
		}
		Ep = Ep->Next;
		Eq = Eq->Next;
	}
}

void DeletStorage_Num(Storage *Shead, string num) {
	Storage *Sp, *Sq;
	Sp = Shead->Next;
	Sq = Shead;
	while (Sp != NULL) {
		if (Sp->num == num && Sp->Next == NULL) {
			Sq->Next = NULL;
			break;
		}
		else if (Sp->num == num) {
			Sq->Next = Sp->Next;
			free(Sp);
			break;
		}
		Sp = Sp->Next;
		Sq = Sq->Next;
	}
}

void DeletWages_Num(Wages *Whead, string num) {
	Wages *Wp, *Wq;
	Wp = Whead->Next;
	Wq = Whead;
	while (Wp != NULL) {
		if (Wp->num == num && Wp->Next == NULL) {
			Wq->Next = NULL;
			break;
		}
		else if (Wp->num == num) {
			Wq->Next = Wp->Next;
			free(Wp);
			break;
		}
		Wp = Wp->Next;
		Wq = Wq->Next;
	}
}

void DeletDeductions_Num(Deductions *Dhead, string num) {
	Deductions *Dp, *Dq;
	Dp = Dhead->Next;
	Dq = Dhead;
	while (Dp != NULL) {
		if (Dp->num == num && Dp->Next == NULL) {
			Dq->Next = NULL;
			break;
		}
		else if (Dp->num == num) {
			Dq->Next = Dp->Next;
			free(Dp);
			break;
		}
		Dp = Dp->Next;
		Dq = Dq->Next;
	}
}

void DeletPayrollData_Num(PayrollData *Phead, string num) {
	PayrollData *Pp, *Pq;
	Pp = Phead->Next;
	Pq = Phead;
	while (Pp != NULL) {
		if (Pp->num == num && Pp->Next == NULL) {
			Pq->Next = NULL;
			break;
		}
		else if (Pp->num == num) {
			Pq->Next = Pp->Next;
			free(Pp);
			break;
		}
		Pp = Pp->Next;
		Pq = Pq->Next;
	}
}