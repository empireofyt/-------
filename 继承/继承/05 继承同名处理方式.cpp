//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base {
//public:
//	Base() {
//		m_A = 100;
//	}
//	void func() {
//		cout << "父类的函数" << endl;
//	}
//
	//void func(int m_A) {
	//	cout << "父类的函数有参数" << endl;
	//}
//	int m_A;
//};
//
//
//class Son : public Base {
//public:
//	Son() {
//		m_A = 200;
//	}
//
//	void func() {
//		cout << "子类的函数" << endl;
//	}
//	int m_A;
//};
//
//
//void test01() {
//	Son b;
//	cout << b.m_A << endl;//直接访问，即为子类的同名成员
//	cout << b.Base::m_A << endl;//加上作用域，即可访问父类的同名成员
//	b.func();//直接访问，即为子类的同名函数
//	b.Base::func();//加上作用域，即可访问父类的同名函数
//
//	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
//	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//	//b.func(100);
//	b.Base::func(100);
//
//	return;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}