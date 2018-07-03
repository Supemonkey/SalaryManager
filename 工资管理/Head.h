#pragma once
#include<string>
#include<iostream>
using namespace std;
//��Ҫ���������
typedef struct
{
	string EmpInfo[9];
	double Salary[4] = { 0 };
	int Age[2];
	double Cost[4] = { 0 };
	//��˼��
	//���ʿ���       ...EmpInfo[0]
	//���֤��        ...EmpInfo[1]
	//����            ...EmpInfo[2]
	//�Ա�            ...EmpInfo[3]
	//����            ...EmpInfo[4]
	//����ְ��        ...EmpInfo[5]
	//����ְ�Ʊ��    ...EmpInfo[6]
	//��ͥ�绰����    ...EmpInfo[7]
	//�ֻ�����        ...EmpInfo[8]

	//��������       ...Salary[0]
	//ְ����       ...Salary[1]
	//���ֲ���       ...Salary[2]
	//�ر���       ...Salary[3]

	//����           ...Age[0]
	//���           ...Age[1]

	//ˮ��            ...Cost[0]
	//���            ...Cost[1]
	//����          ...Cost[2]
	//��·���ӷ�      ...Cost[3]
	//˰              ...Cost[4]
}stu;

typedef struct WorkPoison {
	stu People;
	struct WorkPoison *Next;
}WP;
//�������������Ϣ����
typedef struct Storage
{
	string num;//���  ...EmpInfo[6]
	string name;//���� ...EmpInfo[2]
	string sex;//�Ա� ...EmpInfo[3]
	int age;//����...Age[0]
	string Posi;//ְλ   ...EmpInfo[5]
	double Sala;//����  ��Salary[0]+Salary[1]��*�ٷֱ�+Salary[2]+Salary[3]-Cost[0]-Cost[1]-Cost[2]-Cost[3]
	int rank;//����
	int log = 0;//���
	Storage *Next;
}Sto;
//����ְ��������Ϣ
typedef struct EssentInfo
{
	string Name;//����     ...EmpInfo[2]
	string Sex;//�Ա�     ...EmpInfo[3]
	int Age;//...Age[0]
	string Idcard;//���֤��    ...EmpInfo[1]
	string PosiId;//����ְ�Ʊ��  ...EmpInfo[6]
	string PosiName;//����ְ��  ...EmpInfo[5]
	string Department;//����  ...EmpInfo[4]
	int WorkAge;///����...Age[1]
	string HomeNumber;//��ͥ���� ...EmpInfo[7]
	string PoisonNumber;//�绰����...EmpInfo[8]
	string Salacard;//���ʿ���   ...EmpInfo[0]
	EssentInfo *Next;
}Ess;
//���湤�ʻ�����Ϣ����
typedef struct Wages
{
	string name;//Ϊ�˲���
	string num;//����ְ�Ʊ��    ...EmpInfo[6]
	string Posiname;//����ְ�� ...EmpInfo[5]
	double BasicSala;//��������   ...Salary[0]
	double PosiSala;//ְλ����   ...Salary[1]
	double SuppleSala;//���Բ���   ...Salary[2]
	Wages *Next;
}Wage;

//���ÿ۳���Ϣ
typedef struct Deductions
{
	string name;//Ϊ�˲���
	string num;//Ϊ�˲���
	string SalaId;//...EmpInfo[0]
	double WaterFee;//ˮ��    ...Cost[0]
	double EleFee;//���   ...Cost[1]
	double CleanFee;//����    ...Cost[2]
	double TVFee;//��·���ӷ�    ...Cost[3]
	Deductions *Next;
}Dedu;

//���ʵ�����
typedef struct PayrollData
{
	string SalaId;//����   ...EmpInfo[0]
	string Name;//����   ...EmpInfo[2]
	string num;
	double ShouldPay;//Ӧ������	 ...Salary[0]+Salary[1]
	double WaterFee;//ˮ��     ...Cost[0]
	double EleFee;//���     ...Cost[1]
	double cleanFee;//����     ...Cost[2]
	double TVFee;//��·���ӷ�    ...Cost[3]
	double TaxFee;//˰   ...��Salary[0]+Salary[1]��*�ٷֱ�
	double Payroll;//ʵ������ ��Salary[0]+Salary[1]��*�ٷֱ�+Salary[2]+Salary[3]-Cost[0]-Cost[1]-Cost[2]-Cost[3]
	double SpeciReward;//�ر���  ...Salary[3]
	PayrollData *Next;
}Payroll;

//���к���
