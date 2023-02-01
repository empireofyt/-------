//#include<iostream>
//#include<string>
//
//using namespace std;
//
////类模板成员函数创建市级
////类模板中成员函数只有在调用时才创建
//
//class Person1 {	
//public:
//	void ShowPerson1() {
//		cout << "Person1" << endl;
//	}
//};
//
//class Person2 {
//public:
//	void ShowPerson2() {
//		cout << "Person2" << endl;
//	}
//};
//
//template<class T>
//class MyClass {
//public:
//	T obj;
//	//类模板中成员函数，调用时才会创建，所以下面两个函数不会冲突
//	void func1() {
//		obj.ShowPerson1();
//	}
//	void func2() {
//		obj.ShowPerson2();
//	}
//};
//
//void test01() {
//	MyClass<Person1> m;
//	//已经定义，所以只能运行func1
//	m.func1();
//	//m.func2();
//}
//
//int main() {
//	test01();
//	//test02();
//	system("pause");
//	return 0;
//}