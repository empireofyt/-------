#include<iostream>
#include<string>
#define MAX 1000 //�����������
using namespace std;

//��ϵ�˽ṹ��
struct Person {
	string m_Name;
	int m_Sex;//�Ա�L;1 ��    2Ů
	int m_Age;
	string m_Phone;
	string m_Addr;
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX];//ͨѶ¼�б������ϵ������
	int m_Size;	//ͨѶ¼����Ա����
};


//�˵�����
void showMenu() {
	cout << "***************************  " << endl;
	cout << "*****  1. �����ϵ��  *****  " << endl;
	cout << "*****  2. ��ʾ��ϵ��  *****  " << endl;
	cout << "*****  3. ɾ����ϵ��  *****  " << endl;
	cout << "*****  4. ������ϵ��  *****  " << endl;
	cout << "*****  5. �޸���ϵ��  *****  " << endl;
	cout << "*****  6. �����ϵ��  *****  " << endl;
	cout << "*****  0. �˳�ͨѶ¼  *****  " << endl;
	cout << "***************************  " << endl;
}

//1. �����ϵ��
void addPerson(Addressbooks* abs) {
	//�ж�ͨѶ¼�Ƿ���Ա
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else {
		//��Ӿ�����ϵ
		//����
		string  name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 -- ��    2 -- Ů" << endl;
		int sex = 0;
		while (true) {
			//���������1,2 �����˳�ѭ����������������ѭ���ظ�����
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		// ����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//��ַ
		cout << "�������ͥסַ��" << endl;
		string add;
		cin >> add;
		abs->personArray[abs->m_Size].m_Addr = add;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;

		system("pause");//�����������
		system("cls");//��������
	}
}


//2. ��ʾ��ϵ��
void showPerson(Addressbooks* abs) {
	//���ж�ͨѶ¼����û����
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������" << abs->personArray[i].m_Name <<"\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů" ) << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//�����������
	system("cls");//��������
}

//�����ϵ���Ƿ���ڣ������ڷ�����ϵ���������еľ���λ�ã������򷵻�-1
//��������������һ����ͨѶ¼��һ���ǶԱ���������Ϊ��Ƶ�ʱ���������������ж��˵�
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}

	}
	return -1;
}

//3. ɾ����ϵ��
void deletePerson(Addressbooks* abs) {
	cout << "������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	//retΪ-1��ʾû�ҵ�����ϵ��
	//�˴�absǰ�治��Ҫ����&����Ϊ�˴���abs����Ϊָ��ģ���deletePerson���������ʵ��
	int ret = isExist(abs, name);
	if (ret == -1) {
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	else {
		for (int i = ret; i < abs->m_Size; i++) {
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		//����ͨѶ¼����Ա��Ŀ
		abs->m_Size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//4. ������ϵ��
void findPerson(Addressbooks* abs) {
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����
	int ret = isExist(abs, name);
	if (ret == -1) {
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	else {
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << (abs->personArray[ret].m_Sex == 1 ? "��" : "Ů") << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}

	system("pause");
	system("cls");
}


//4. �޸���ϵ��
void modifyPerson(Addressbooks* abs) {
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����
	int ret = isExist(abs, name);
	if (ret == -1) {
		cout << "δ�ҵ�����ϵ��" << endl;
	}
	else {
		//����
		string  name;
		cout << "������������ " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1 -- ��    2 -- Ů" << endl;
		int sex = 0;
		while (true) {
			//���������1,2 �����˳�ѭ����������������ѭ���ظ�����
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		// ����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//��ַ
		cout << "�������ͥסַ��" << endl;
		string add;
		cin >> add;
		abs->personArray[ret].m_Addr = add;

		cout << "�޸ĳɹ�" << endl;
	}

	system("pause");
	system("cls");
}

// 5. ���ͨѶ¼
void cleanPerson(Addressbooks* abs) {
	abs->m_Size = 0;
	cout << "�����ͨѶ¼" << endl;
	system("pause");
	system("cls");
}


int main() {
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	//�û�ѡ���������
	int select = 0;

	while (true) {
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:	//1. �����ϵ��
			addPerson(&abs);//���õ�ַ���ݣ���������ʵ��
			break;
		case 2:	//2. ��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:	//3. ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:	//4. ������ϵ��
			findPerson(&abs);
			break;
		case 5:	//5. �޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:	//6. �����ϵ��
			cleanPerson(&abs);
			break;
		case 0:	//0. �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}