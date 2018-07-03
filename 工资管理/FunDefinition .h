#pragma once
#include<iostream>
#include<windows.h>
#include"Class.h"
#include<fstream>
using namespace std;
//�ҳ�Ҫ��ӡ������
void PinterEssent(EssentInfo *Ehead, int year);
void PrintStorage(Storage *Shead);
void PrintWages(Wages *Whead);
void PrintDeductions(Deductions *Dhead);
void PrintPayrollData(PayrollData *Phead);
//��ɴ�ӡ����
void PrintEssentInfo(EssentInfo *Ep, int year);
void PrintStorageInfo(Storage *Sp);
void PrintWagesInfo(Wages *Wp);
void PrintDeductionsInfo(Deductions *Dp);
void PrintPayrollDataInfo(PayrollData *Pp);

//����
EssentInfo *GetEssentInfo(WorkPoison *head);
Storage *GetStorage(WorkPoison *head);
Wages *GetWages(WorkPoison *head);
Deductions *GetDeductions(WorkPoison *head);
PayrollData *GetPayrollData(WorkPoison *head);
double Tax(double ShouldPay);
//��������ɾ��
void DeletEssentInfo_Name(EssentInfo *Ehead, string name);
void DeletStorage_Name(Storage *Shead, string name);
void DeletWages_Name(Wages *Whead, string name);
void DeletDeductions_Name(Deductions *Dhead, string name);
void DeletPayrollData_Name(PayrollData *Phead, string name);
//���ձ��ɾ��
void DeletEssentInfo_Num(EssentInfo *Ehead, string num);
void DeletStorage_Num(Storage *Shead, string num);
void DeletWages_Num(Wages *Whead, string num);
void DeletDeductions_Num(Deductions *Dhead, string num);
void DeletPayrollData_Num(PayrollData *Phead, string num);
//�����ֲ���
void FindEssent_Name(EssentInfo *Ehead, string name, int year);
void FindStorage_Name(Storage *Shead, string name);
void FindWages_Name(Wages *Whead, string name);
void FindDeductions_Name(Deductions *Dhead, string name);
void FindPayrollData_Name(PayrollData *Phead, string name);
//����Ų���
void FindEssent_Num(EssentInfo *Ehead, string num, int year);
void FindStorage_Num(Storage *Shead, string num);
void FindWages_Num(Wages *Whead, string num);
void FindDeductions_Num(Deductions *Dhead, string num);
void FindPayrollData_Num(PayrollData *Phead, string num);
//���������޸���Ϣ
void ModifyEssentInfoPoisonNumber_Name(EssentInfo *Ehead, string name, string poisonNumber);
void ModifyPayrollDataSpeciReward_Name(PayrollData *Phead, string name, double SpeciReward);
void ModifyWagesSuppleSala_Name(Wages *Whead, string name, double SuppleSala);
void ModifyEssentInfoDepartment_Name(EssentInfo *Ehead, string name, string Department);
void ModifyDeductionsWaterFee_Name(Deductions *Dhead, string name, double WaterFee);
void ModifyDeductionsEleFee_Name(Deductions *Dhead, string name, double EleFee);
void ModifyDeductionsCleanFee_Name(Deductions *Dhead, string name, double CleanFee);
void ModifyDeductionsTVFee_Name(Deductions *Dhead, string name, double TVFee);
//���ձ���޸���Ϣ
void ModifyEssentInfoPoisonNumber_Num(EssentInfo *Ehead, string num, string poisonNumber);
void ModifyPayrollDataSpeciReward_Num(PayrollData *Phead, string num, double SpeciReward);
void ModifyWagesSuppleSala_Num(Wages *Whead, string num, double SuppleSala);
void ModifyEssentInfoDepartment_Num(EssentInfo *Ehead, string num, string Department);
void ModifyDeductionsWaterFee_Num(Deductions *Dhead, string num, double WaterFee);
void ModifyDeductionsEleFee_Num(Deductions *Dhead, string num, double EleFee);
void ModifyDeductionsCleanFee_Num(Deductions *Dhead, string num, double CleanFee);
void ModifyDeductionsTVFee_Num(Deductions *Dhead, string num, double TVFee);
//����
EssentInfo *EssentInfoBubbleSort(EssentInfo *Ehead);
Wages *WagesBubbleSort(Wages *Whead);
Deductions *DeductionsBubbleSort(Deductions *Dhead);
PayrollData *PayrollDataBubbleSort(PayrollData *Phead);
Storage *StorageBubbleSort(Storage *Shead);

void ManangeSala(PayrollData *Phead, EssentInfo *Ehead);

//�õ����
void getCursor(int x, int y);
//�˳�ѡ��
void OptionMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead, char s);
//void WriteEssentInfoData(WorkPoison *head);
//void WriteWagesData(WorkPoison *head);
//void WriteDeductionsData(WorkPoison *head);
//void WritePayrollDataData(WorkPoison *head);
//void WriteStorageData(WorkPoison *head);

//void ManangeSala(WorkPoison *head);
//
//void BubbleSort();
WorkPoison *CreateWageManage();
