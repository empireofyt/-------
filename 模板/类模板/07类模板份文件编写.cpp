//#include<iostream>
////#include<string>
////#include "person.h"
////#include "person.cpp" //�����ʽ1������cppԴ�ļ�
//
////�����ʽ2����������ʵ��д��һ���ļ���׺����Ϊ.hpp
//#include "person.hpp"
//
//using namespace std;
//////��ģ���Ա��������ʵ��
////template<class T1, class T2 >
////class Person {
////public:
////	//��Ա������������
////	Person(T1 name, T2 age);
////	void showPerson();
////
////public:
////	T1 m_Name;
////	T2 m_Age;
////};
////
//////���캯�� ����ʵ��
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age) {
////	this->m_Age = age;
////	this->m_Name = name;
////}
////
//////��Ա���� ����ʵ��
////template<class T1, class T2>
////void Person<T1, T2>::showPerson() {
////	cout << "����: " << this->m_Name << " ����:" << this->m_Age << endl;
////}
////
//
//void test01() {
//	Person<string, int>p("С��", 35);
//	p.showPerson();
//}
////
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}