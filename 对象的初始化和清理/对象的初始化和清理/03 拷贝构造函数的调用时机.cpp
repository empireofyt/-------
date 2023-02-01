//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// 构造函数的分类及调用
////分类
//
//class Person {
//private:
//
//public:
//	int age;
//	Person() {
//		cout << "无参数构造" << endl;
//	}
//
//	Person(int a) {
//		age = a;
//		cout << "有参数构造" << endl;
//	}
//
//	// 拷贝构造函数
//	Person(const Person& p) {
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "拷贝构造函数" << endl;
//	}
//	~Person() {
//		cout << "析构函数" << endl;
//	}
//};
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//
//	return;
//}
////2. 值传递的方式给函数参数传值
////相当于Person p1 = p;
//void doWork(Person p1) {}
//void test02() {
//	Person p; //无参构造函数
//	doWork(p);
//}
//
//
////3. 以值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//
//int main() {
//	test01();
//	test02();
//	test03();
//
//	system("pause");
//	return 0;
//}