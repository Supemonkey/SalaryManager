#pragma once
#include"Menu.h"
#include"FunDefinition .h"
#include"Class.h"
//����
WorkPoison *CreateWageManage()
{
	WorkPoison *head, *p, *q;
	int i = 1;
	int m = 1;
	q = new WorkPoison;
	head = q;
	p = q;
	int year;
	cout << "�������ʱ����ݣ�";
	cin >> year;
	while (m != 0) {
		q = new WorkPoison;
		p->Next = q;
		p = q;
		p->People.Age[1] = year;
		cout << "��" << i << "������Ϣ" << endl;
		cout << "����������ְ��������Ϣ" << endl;
		cout << "���ʿ��ţ����֤�ţ��������Ա𣬲��ţ�����ְ�ƣ�"
			"����ְ�Ʊ�ţ���ͥ���룬�绰���룬����" << endl;
		cin >> p->People.EmpInfo[0] >> p->People.EmpInfo[1] >>
			p->People.EmpInfo[2] >> p->People.EmpInfo[3] >>
			p->People.EmpInfo[4] >> p->People.EmpInfo[5] >>
			p->People.EmpInfo[6] >> p->People.EmpInfo[7] >>
			p->People.EmpInfo[8] >> p->People.Age[0];
		if (p->People.EmpInfo[5] == "����Ա") {
			double hour;
			cout << "�������ϰ�ʱ����";
			cin >> hour;
			Technology Tec(p->People, hour);
			p->People.Salary[0] = Tec.GetBasicSala();
			p->People.Salary[1] = Tec.GetPosiSala();
		}
		else if (p->People.EmpInfo[5] == "����") {
			Manager Man(p->People);
			p->People.Salary[0] = Man.GetBasicSala();
			p->People.Salary[1] = Man.GetPosiSala();
		}
		else if (p->People.EmpInfo[5] == "����Ա") {
			int m;
			cout << "�������Ʒ����������";
			cin >> m;
			Sales Sale(p->People, m);
			p->People.Salary[0] = Sale.GetBasicSala();
			p->People.Salary[1] = Sale.GetPosiSala();
		}
		else if (p->People.EmpInfo[5] == "���۾���") {
			SalesManager SaleMan(p->People);
			p->People.Salary[0] = SaleMan.GetBasicSala();
			p->People.Salary[1] = SaleMan.GetPosiSala();
		}
		else {
			cout << "�޴�ְҵ�����������롣����" << endl;
			system("pause");
			system("cls");
			continue;
		}
		cout << "��" << i << "������������ɣ��Ƿ������" << endl;
		cin >> m;
		i++;
	}
	p->Next = NULL;
	system("cls");
	return head;
}