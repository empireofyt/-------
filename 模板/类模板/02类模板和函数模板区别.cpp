//#include<iostream>
//#include<string>
//
//using namespace std;
//
////类模板
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
////1. 类模板没有自动类型推导的使用方式。只能使用显示指定类型方式
//
//void test01() {
//	//无法用自动类型推导
//	//Person p1("小孙", 999);
//	Person<string, int> p1("小孙", 999);
//	p1.showPerson();
//}
//
////2. 类模板在模板参数列表中可以有默认参数
//void test02() {
//	Person<string> p1("小朱", 999);
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