#include<iostream>
#include<string>
using namespace std;

//ͨ��ȫ�ֺ�������ӡperson��Ϣ

//2��ȫ�ֺ��������Ԫ  ����ʵ�� - ��������ģ���������·���������ģ�嶨�壬������Ԫ
//��ǰ�ñ�����֪��person��Ĵ��ڣ���Ҫ��ǰ֪��ȫ�ֺ�������
template<class T1, class T2> 
class Person;
//ȫ�ֺ���������ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	cout << "����ʵ�� ---- ������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
}


template<class T1, class T2 >
class Person {
//ȫ�ֺ���������ʵ��
	friend void printPerson(Person<T1, T2>& p) {
		cout<<  "������ " << p.m_Name << " ���䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ���������ʵ��
	//���ȫ�ֺ���ʱ����ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
	friend void printPerson2<>(Person<T1, T2>& p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};



//1��ȫ�ֺ���������ʵ��
void test01()
{
	Person <string, int >p("Tom", 20);
	printPerson(p);
}

//2��ȫ�ֺ���������ʵ��
void test02()
{
	Person <string, int >p("Jerry", 30);
	printPerson2(p);
}


int main() {
	test01();
	test02();
	system("pause");
	return 0;
}