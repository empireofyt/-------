#include<iostream>
#include<string>

using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout, Person& p);
private: 
	//���������ó�Ա������������
	//����p.operator<<(cout)  �򻯰汾p<<cout�����������ǵ�����
	/*void operator<<(cout) {

	}*/

	int m_A;
	int m_B;
public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
};

//ֻ������ȫ�ֺ����������������
//����operator<<(cout�� p)  �򻯰汾cout<<p������Ҫ��
ostream& operator<<(ostream& cout, Person& p) {
	cout << "m_A" << p.m_A << "m_B" << p.m_B << endl;
	return cout;
}

void test01() {
	Person p(10, 10);

	//��ʽ���˼�룬���巵�ص�����Ϊostream&����cout << p����һ��cout�����Լ�����endl
	cout << p << endl;
	return ;
}

int main() {
	test01();
	system("pause");
	return 0;
}