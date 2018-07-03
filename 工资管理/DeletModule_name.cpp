#pragma once
#include<iostream>
#include<Windows.h>
#include"FunDefinition .h"
#include<iomanip>
void DeletEssentInfo_Name(EssentInfo *Ehead, string name) {
	EssentInfo *Ep, *Eq;
	Ep = Ehead->Next;
	Eq = Ehead;
	while (Ep != NULL) {
		if (Ep->Name == name && Ep->Next == NULL) {
			Eq->Next = NULL;
		}
		else if (Ep->Name == name) {
			Eq->Next = Ep->Next;
			free(Ep);
			break;
		}
		Ep = Ep->Next;
		Eq = Eq->Next;
	}
}

void DeletStorage_Name(Storage *Shead, string name) {
	Storage *Sp, *Sq;
	Sp = Shead->Next;
	Sq = Shead;
	while (Sp != NULL) {
		if (Sp->name == name && Sp->Next == NULL) {
			Sq->Next = NULL;
			break;
		}
		else if (Sp->name == name) {
			Sq->Next = Sp->Next;
			free(Sp);
			break;
		}
		Sp = Sp->Next;
		Sq = Sq->Next;
	}
}

void DeletWages_Name(Wages *Whead, string name) {
	Wages *Wp, *Wq;
	Wp = Whead->Next;
	Wq = Whead;
	while (Wp != NULL) {
		if (Wp->name == name && Wp->Next == NULL) {
			Wq->Next = NULL;
			break;
		}
		else if (Wp->name == name) {
			Wq->Next = Wp->Next;
			free(Wp);
			break;
		}
		Wp = Wp->Next;
		Wq = Wq->Next;
	}
}

void DeletDeductions_Name(Deductions *Dhead, string name) {
	Deductions *Dp, *Dq;
	Dp = Dhead->Next;
	Dq = Dhead;
	while (Dp != NULL) {
		if (Dp->name == name && Dp->Next == NULL) {
			Dq->Next = NULL;
			break;
		}
		else if (Dp->name == name) {
			Dq->Next = Dp->Next;
			free(Dp);
			break;
		}
		Dp = Dp->Next;
		Dq = Dq->Next;
	}
}

void DeletPayrollData_Name(PayrollData *Phead, string name) {
	PayrollData *Pp, *Pq;
	Pp = Phead->Next;
	Pq = Phead;
	while (Pp != NULL) {
		if (Pp->Name == name && Pp->Next == NULL) {
			Pq->Next = NULL;
			break;
		}
		else if (Pp->Name == name) {
			Pq->Next = Pp->Next;
			free(Pp);
			break;
		}
		Pp = Pp->Next;
		Pq = Pq->Next;
	}
}