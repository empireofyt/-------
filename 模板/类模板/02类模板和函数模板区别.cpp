//#include<iostream>
//#include<string>
//
//using namespace std;
//
////��ģ��
//
//template<class NameType, class AgeType=int>
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson() {
//		cout << "name = " << this->m_Name << "  age = " << this->m_Age << endl;
//	}
//	NameType m_Name;
//	AgeType m_Age;
//
//};
//
//
////1. ��ģ��û���Զ������Ƶ���ʹ�÷�ʽ��ֻ��ʹ����ʾָ�����ͷ�ʽ
//
//void test01() {
//	//�޷����Զ������Ƶ�
//	//Person p1("С��", 999);
//	Person<string, int> p1("С��", 999);
//	p1.showPerson();
//}
//
////2. ��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02() {
//	Person<string> p1("С��", 999);
//	p1.showPerson();
//}
//
//
//int main() {
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}