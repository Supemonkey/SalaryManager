#pragma once
#include<string>
#include<iostream>
using namespace std;
//需要输入的数据
typedef struct
{
	string EmpInfo[9];
	double Salary[4] = { 0 };
	int Age[2];
	double Cost[4] = { 0 };
	//意思：
	//工资卡号       ...EmpInfo[0]
	//身份证号        ...EmpInfo[1]
	//姓名            ...EmpInfo[2]
	//性别            ...EmpInfo[3]
	//部门            ...EmpInfo[4]
	//技术职称        ...EmpInfo[5]
	//技术职称编号    ...EmpInfo[6]
	//家庭电话号码    ...EmpInfo[7]
	//手机号码        ...EmpInfo[8]

	//基本工资       ...Salary[0]
	//职务工资       ...Salary[1]
	//各种补助       ...Salary[2]
	//特别奖励       ...Salary[3]

	//年龄           ...Age[0]
	//年份           ...Age[1]

	//水费            ...Cost[0]
	//电费            ...Cost[1]
	//清洁费          ...Cost[2]
	//闭路电视费      ...Cost[3]
	//税              ...Cost[4]
}stu;

typedef struct WorkPoison {
	stu People;
	struct WorkPoison *Next;
}WP;
//储存输出基本信息数据
typedef struct Storage
{
	string num;//编号  ...EmpInfo[6]
	string name;//姓名 ...EmpInfo[2]
	string sex;//性别 ...EmpInfo[3]
	int age;//年龄...Age[0]
	string Posi;//职位   ...EmpInfo[5]
	double Sala;//工资  （Salary[0]+Salary[1]）*百分比+Salary[2]+Salary[3]-Cost[0]-Cost[1]-Cost[2]-Cost[3]
	int rank;//排行
	int log = 0;//标记
	Storage *Next;
}Sto;
//储存职工基本信息
typedef struct EssentInfo
{
	string Name;//姓名     ...EmpInfo[2]
	string Sex;//性别     ...EmpInfo[3]
	int Age;//...Age[0]
	string Idcard;//身份证号    ...EmpInfo[1]
	string PosiId;//技术职称编号  ...EmpInfo[6]
	string PosiName;//技术职称  ...EmpInfo[5]
	string Department;//部门  ...EmpInfo[4]
	int WorkAge;///工龄...Age[1]
	string HomeNumber;//家庭号码 ...EmpInfo[7]
	string PoisonNumber;//电话号码...EmpInfo[8]
	string Salacard;//工资卡号   ...EmpInfo[0]
	EssentInfo *Next;
}Ess;
//储存工资基本信息数据
typedef struct Wages
{
	string name;//为了查找
	string num;//技术职称编号    ...EmpInfo[6]
	string Posiname;//技术职称 ...EmpInfo[5]
	double BasicSala;//基本工资   ...Salary[0]
	double PosiSala;//职位工资   ...Salary[1]
	double SuppleSala;//各自补助   ...Salary[2]
	Wages *Next;
}Wage;

//费用扣除信息
typedef struct Deductions
{
	string name;//为了查找
	string num;//为了查找
	string SalaId;//...EmpInfo[0]
	double WaterFee;//水费    ...Cost[0]
	double EleFee;//电费   ...Cost[1]
	double CleanFee;//清洁费    ...Cost[2]
	double TVFee;//闭路电视费    ...Cost[3]
	Deductions *Next;
}Dedu;

//工资单数据
typedef struct PayrollData
{
	string SalaId;//卡号   ...EmpInfo[0]
	string Name;//名字   ...EmpInfo[2]
	string num;
	double ShouldPay;//应发工资	 ...Salary[0]+Salary[1]
	double WaterFee;//水费     ...Cost[0]
	double EleFee;//电费     ...Cost[1]
	double cleanFee;//清洁费     ...Cost[2]
	double TVFee;//闭路电视费    ...Cost[3]
	double TaxFee;//税   ...（Salary[0]+Salary[1]）*百分比
	double Payroll;//实发工资 （Salary[0]+Salary[1]）*百分比+Salary[2]+Salary[3]-Cost[0]-Cost[1]-Cost[2]-Cost[3]
	double SpeciReward;//特别奖励  ...Salary[3]
	PayrollData *Next;
}Payroll;

//所有函数
