//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base {
//public:
//	//静态成员变量特点：定义就分配内存，所有对象共享同一份数据
//	//类内申明，类外初始化
//	static int m_A;
//	static void func() {
//		cout << "父类的函数" << endl;
//	}
//
//	static void func(int m_A) {
//		cout << "父类的函数有参数" << endl;
//	}
//};
//int Base::m_A = 100;
//
//class Son : public Base {
//public:
//	static int m_A;
//	static void func() {
//		cout << "子类的函数" << endl;
//	}
//};
//int Son::m_A = 200;
//
//
//void test01() {
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son b;
//	cout << "Son下m_A = " << b.m_A << endl;//直接访问，即为子类的同名成员
//	cout << "Base下m_A = " << b.Base::m_A << endl;//加上作用域，即可访问父类的同名成员
//
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	cout << "Son下m_A = " << Son::m_A << endl;//直接访问，即为子类的同名成员
//	cout << "Base下m_A = " << Base::m_A << endl;//加上作用域，即可访问父类的同名成员
//	//第一个::代表通过类名方式访问， 第二个::代表作用域
//	cout << "Base下m_A = " << Son::Base::m_A << endl;
//
//	return;
//}
//
//
//void test02() {
//	//通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
//	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//	//s.func(100);
//	s.Base::func(100);
//
//
//	//通过类名访问
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Base::func();
//	Son::Base::func();
//
//	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
//	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//	Son::Base::func(100);
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}