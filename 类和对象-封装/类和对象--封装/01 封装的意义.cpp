#include<iostream>
using namespace std;
#include<string>

const double PI = 3.14;
//���һ��ѧ���࣬������������ѧ�ţ����Ը����߸�ֵ��������ʾ����
class Student {
public:
	string m_Name;
	string m_ID;
	void setName(string name) {
		m_Name = name;
	}
	void setID(string ID) {
		m_ID = ID;
	}

	void showName(){
		cout <<"������" << m_Name << endl;
	}
	void showNumID() {
		cout << "ѧ�ţ�" << m_ID << endl;
	}
};

//���һ��Բ�࣬��Բ���ܳ�  2*PI*�뾶
class Circle {
	//����Ȩ��
public:
	int m_r;

	double calculateZC() {
		return 2 * PI * m_r;
	}
};

int main() {
	/*Circle c1;
	c1.m_r = 3;
	cout << c1.m_r << c1.calculateZC() << endl;*/

	Student s1;
	s1.setName("����");
	s1.setID("12454341");
	s1.showName();
	s1.showNumID();
	system("pause");

	return 0;
}