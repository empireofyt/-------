//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base {
//public:
//	//纯虚函数，此时类为抽象类
//	virtual void func() = 0;
//};
//
////子类必须重写父类中的纯虚函数，否则无法实例化对象
//class Son :public Base {
//public:
//	virtual void func() {//virtual可以省略
//		cout << "son" << endl;
//	}
//};
//
//void test01() {
//	//Base b;	//抽象类无法实例化对象
//	Base* b = new Son;
//	b->func();
//	delete b;
//	return;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}