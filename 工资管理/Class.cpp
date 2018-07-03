#include"Class.h"
using namespace std;

Employ::Employ(stu People)
{
	this->People = People;
}

Employ::~Employ()
{
}

string Employ::GetSalacard()
{
	return this->People.EmpInfo[0];
}

string Employ::GetIdcard()
{
	return this->People.EmpInfo[1];
}

string Employ::GetName()
{
	return this->People.EmpInfo[2];
}

string Employ::GetSex()
{
	return this->People.EmpInfo[3];
}

string Employ::GetDepartment()
{
	return this->People.EmpInfo[4];
}

string Employ::GetPosiName()
{
	return this->People.EmpInfo[5];
}

string Employ::GetPosiId()
{
	return this->People.EmpInfo[6];
}

string Employ::GetHomeNumber()
{
	return this->People.EmpInfo[7];
}

string Employ::GetPoisonNumber()
{
	return this->People.EmpInfo[8];
}

double Employ::GetBasicSala()
{
	if (People.EmpInfo[5] == "����Ա") {
		this->People.Salary[0] = 0;
	}
	else if (People.EmpInfo[5] == "����") {
		this->People.Salary[0] = 8000;
	}
	else if (People.EmpInfo[5] == "����Ա") {
		this->People.Salary[0] = 0;
	}
	else {
		this->People.Salary[0] = 5000;
	}
	return this->People.Salary[0];
}

double Employ::GetSuppleSala()
{
	return this->People.Salary[2];
}

double Employ::GetSpeciReward()
{
	return this->People.Salary[3];
}

int Employ::GetAge()
{
	return this->People.Age[0];
}

int Employ::GetWorkAge()
{
	return this->People.Age[1];
}

double Employ::GetWaterFee()
{
	return this->People.Cost[0];
}

double Employ::GetEleFee()
{
	return this->People.Cost[1];
}

double Employ::GetCleanFee()
{
	return this->People.Cost[2];
}

double Employ::GetTVFee()
{
	return this->People.Cost[3];
}

void Employ::getSal(double P)
{
	this->People.Salary[1] = P;
}

double Employ::GetPosiSala()
{
	return this->People.Salary[1];
}

//������Ա
Technology::Technology(stu people, double hour) :Employ(people)
{
	double m = 100 * hour;
	getSal(m);
}
//���۾���
SalesManager::SalesManager(stu people) :Employ(people)
{
	double m = 0;
	getSal(m);
}

//����
Manager::Manager(stu people) :Employ(people)
{
	double m = 0;
	getSal(m);
}

//����
Sales::Sales(stu people, int sum) :Employ(people)
{
	double m = sum * 0.04 * 1000;
	getSal(m);
}