//#include<iostream>
////#include<string>
////#include "person.h"
////#include "person.cpp" //解决方式1，包含cpp源文件
//
////解决方式2，将声明和实现写到一起，文件后缀名改为.hpp
//#include "person.hpp"
//
//using namespace std;
//////类模板成员函数类外实现
////template<class T1, class T2 >
////class Person {
////public:
////	//成员函数类内声明
////	Person(T1 name, T2 age);
////	void showPerson();
////
////public:
////	T1 m_Name;
////	T2 m_Age;
////};
////
//////构造函数 类外实现
////template<class T1, class T2>
////Person<T1, T2>::Person(T1 name, T2 age) {
////	this->m_Age = age;
////	this->m_Name = name;
////}
////
//////成员函数 类外实现
////template<class T1, class T2>
////void Person<T1, T2>::showPerson() {
////	cout << "姓名: " << this->m_Name << " 年龄:" << this->m_Age << endl;
////}
////
//
//void test01() {
//	Person<string, int>p("小猪", 35);
//	p.showPerson();
//}
////
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}