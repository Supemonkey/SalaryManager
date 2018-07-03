#include "Menu.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}
void Menu::MainMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("�˵�.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(44, 24);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {head = CreateWageManage();
		Ehead = GetEssentInfo(head);
		Shead = GetStorage(head);
		Whead = GetWages(head);
		Dhead = GetDeductions(head);
		Phead = GetPayrollData(head);
		cout << "�����ɹ���������" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		break;
	}
	case '2':
		if (head == NULL) {
			getCursor(30, 10);
			cout << "���ȴ������ݡ�����";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		else {
			ManangeSala(Phead, Ehead);
			Ehead = EssentInfoBubbleSort(Ehead);
			Whead = WagesBubbleSort(Whead);
			Dhead = DeductionsBubbleSort(Dhead);
			Phead = PayrollDataBubbleSort(Phead);
			Shead = StorageBubbleSort(Shead);
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		break;
	case '3': {
		if (head == NULL) {
			getCursor(30, 10);
			cout << "���ȴ������ݡ�����";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		else {
			PrintMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		}
		break;
	}
	case '4':
		if (head == NULL) {
			getCursor(30, 10);
			cout << "���ȴ������ݡ�����";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		else {
			getCursor(30, 10);
			cout << "��δ���";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		break;
	case '5':
		if (head == NULL) {
			getCursor(30, 10);
			cout << "���ȴ�������....";
			system("pause");
			system("cls");
			OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		}
		else  ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '6': break;
	default: {
		getCursor(30, 10);
		cout << "û�д���ѡ�񡣡�����";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '1');
		break;
	}
	}
}

void Menu::ModiMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("�޸�.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		ModiInforMenu_name(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	}
	case '2': {
		ModiInforMenu_num(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	}

	case '3':ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		cout << "û�д���ѡ�񡣡�����" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '2');
		break;
	}
	}
}
void Menu::DeleMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("ɾ��.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string name;
		cout << "�������Ա�����֣�";
		cin >> name;
		DeletEssentInfo_Name(Ehead, name);
		DeletStorage_Name(Shead, name);
		DeletWages_Name(Whead, name);
		DeletDeductions_Name(Dhead, name);
		DeletPayrollData_Name(Phead, name);
		cout << "ɾ���ɹ�����������" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '4');
		break;
	}
	case '2': {
		string num;
		cout << "�������Ա����ţ�";
		cin >> num;
		DeletEssentInfo_Num(Ehead, num);
		DeletStorage_Num(Shead, num);
		DeletWages_Num(Whead, num);
		DeletDeductions_Num(Dhead, num);
		DeletPayrollData_Num(Phead, num);
		cout << "ɾ���ɹ�����������" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '4');
		break;
	}
	case '3':ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		cout << "û�д���ѡ�񡣡�����" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '4');
		break;
	}
	}
}

void Menu::FindMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("����.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 15);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string name;
		int year;
		cout << "�������ʱ����ݣ�";
		cin >> year;
		cout << "������Ա����������";
		cin >> name;
		FindEssent_Name(Ehead, name, year);
		FindStorage_Name(Shead, name);
		FindWages_Name(Whead, name);
		FindDeductions_Name(Dhead, name);
		FindPayrollData_Name(Phead, name);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '5');
		break;
	}
	case '2': {
		string num;
		int year;
		cout << "�������ʱ����ݣ�";
		cin >> year;
		cout << "������Ա����������";
		cin >> num;
		FindEssent_Num(Ehead, num, year);
		FindStorage_Name(Shead, num);
		FindWages_Name(Whead, num);
		FindDeductions_Name(Dhead, num);
		FindPayrollData_Name(Phead, num);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '5');
		break;
	}
	case '3':ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;

	default: {
		cout << "û�д���ѡ�񡣡�����" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '5');
		break;
	}
	}
}
void Menu::ModiDeleMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("��ɾ��.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 18);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1':ModiMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '2':DeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '3':FindMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '4':MainMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		cout << "û�д���ѡ�񡣡�����" << endl;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '3');
		break;
	}
	}
}

void Menu::PrintMenu(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("��ӡ.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 24);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		PrintStorage(Shead);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case '2': {
		PrintWages(Whead);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case '3': {
		int year;
		cout << "�������ʱ����ݣ�";
		cin >> year;
		PinterEssent(Ehead, year);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case '4': {
		PrintDeductions(Dhead);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case'5': {
		PrintPayrollData(Phead);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	case '6':MainMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		cout << "û�д���ѡ��ϵͳĬ���˳�";break;
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '6');
		break;
	}
	}
}
void Menu::ModiInforMenu_name(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("�޸���Ϣ.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 27);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");

	switch (m) {
	case '1': {
		string name;
		cout << "�������Ա�����֣�";
		cin >> name;
		string poisonNumber;
		cout << "�������µ��ֻ����룺";
		cin >> poisonNumber;
		ModifyEssentInfoPoisonNumber_Name(Ehead, name, poisonNumber);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '2': {
		string name;
		cout << "�������Ա�����֣�";
		cin >> name;
		double SuppleSala;
		cout << "�����Ա���ĸ��Բ������ܷѣ�";
		cin >> SuppleSala;
		ModifyWagesSuppleSala_Name(Whead, name, SuppleSala);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '3': {
		string name;
		cout << "�������Ա�����֣�";
		cin >> name;
		double SpeciReward;
		cout << "�������Ա�����ر������ܷѣ�";
		cin >> SpeciReward;
		ModifyPayrollDataSpeciReward_Name(Phead, name, SpeciReward);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '4': {
		string name;
		cout << "�������Ա�����֣�";
		cin >> name;
		string Department;
		cout << "�������Ա���軻�Ĳ��ţ�";
		cin >> Department;
		ModifyEssentInfoDepartment_Name(Ehead, name, Department);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '5': {
		string name;
		cout << "�������Ա�����֣�";
		cin >> name;
		double WaterFee;
		cout << "�������Ա�����õ�ˮ�ѣ�";
		cin >> WaterFee;
		ModifyDeductionsWaterFee_Name(Dhead, name, WaterFee);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '6': {
		string name;
		cout << "�������Ա�����֣�";
		cin >> name;
		double CleanFee;
		cout << "�������Ա�����õ����ѣ�";
		cin >> CleanFee;
		ModifyDeductionsCleanFee_Name(Dhead, name, CleanFee);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case'7': {
		string name;
		cout << "�������Ա�����֣�";
		cin >> name;
		double TVFee;
		cout << "�������Ա�����õı�·���ӷѣ�";
		cin >> TVFee;
		ModifyDeductionsTVFee_Name(Dhead, name, TVFee);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	case '8': ModiDeleMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	case '0':ModiMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		cout << "�޴�ѡ��";
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '7');
		break;
	}
	}
}
void Menu::ModiInforMenu_num(WorkPoison *head, EssentInfo *Ehead, Storage *Shead, Wages *Whead, Deductions *Dhead, PayrollData *Phead)
{
	char m;
	ifstream file("�޸���Ϣ.txt", ios::out);
	while (file)
		cout << (char)file.get();
	file.close();
	getCursor(37, 27);
	cout << "���������ѡ�";
	cin >> m;
	system("cls");
	switch (m) {
	case '1': {
		string num;
		cout << "������Ա����ţ�";
		cin >> num;
		string poisonNumber;
		cout << "�������µ��ֻ����룺";
		cin >> poisonNumber;
		ModifyEssentInfoPoisonNumber_Num(Ehead, num, poisonNumber);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '2': {
		string num;
		cout << "������Ա����ţ�";
		cin >> num;
		double SuppleSala;
		cout << "�����Ա���ĸ��Բ������ܷѣ�";
		cin >> SuppleSala;
		ModifyWagesSuppleSala_Num(Whead, num, SuppleSala);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '3': {
		string num;
		cout << "������Ա����ţ�";
		cin >> num;
		double SpeciReward;
		cout << "�������Ա�����ر������ܷѣ�";
		cin >> SpeciReward;
		ModifyPayrollDataSpeciReward_Num(Phead, num, SpeciReward);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '4': {
		string num;
		cout << "������Ա����ţ�";
		cin >> num;
		string Department;
		cout << "�������Ա���軻�Ĳ��ţ�";
		cin >> Department;
		ModifyEssentInfoDepartment_Num(Ehead, num, Department);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '5': {
		string num;
		cout << "������Ա����ţ�";
		cin >> num;
		double WaterFee;
		cout << "�������Ա�����õ�ˮ�ѣ�";
		cin >> WaterFee;
		ModifyDeductionsWaterFee_Num(Dhead, num, WaterFee);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '6': {
		string num;
		cout << "������Ա����ţ�";
		cin >> num;
		double EleFee;
		cout << "�������Ա�����õĵ�ѣ�";
		cin >> EleFee;
		ModifyDeductionsEleFee_Num(Dhead, num, EleFee);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '7': {
		string num;
		cout << "������Ա����ţ�";
		cin >> num;
		double CleanFee;
		cout << "�������Ա�����õ����ѣ�";
		cin >> CleanFee;
		ModifyDeductionsCleanFee_Num(Dhead, num, CleanFee);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case'8': {
		string num;
		cout << "������Ա����ţ�";
		cin >> num;
		double TVFee;
		cout << "�������Ա�����õı�·���ӷѣ�";
		cin >> TVFee;
		ModifyDeductionsTVFee_Num(Dhead, num, TVFee);
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	case '0':ModiMenu(head, Ehead, Shead, Whead, Dhead, Phead);
		break;
	default: {
		system("pause");
		system("cls");
		OptionMenu(head, Ehead, Shead, Whead, Dhead, Phead, '8');
		break;
	}
	}
}