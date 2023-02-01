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
//	Person(const Person &p) {
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "拷贝构造函数" << endl;
//	}
//	~Person() {
//		cout << "析构函数" << endl;
//	}
//};
//
////调用
//void test1() {
//	//1. 括号法
//	Person p1;	//默认构造函数调用，
//	//注意调用构造函数时不要加上（），加上括号，编译器会认为这是一个函数的声明
//	Person p2(10);	//有参数构造函数
//	Person p3(p2);	//拷贝构造函数
//	cout << "p2's age = " << p2.age << endl;
//	cout << "p3's age = " << p3.age << endl;
//
//	//2. 显示法
//	Person p4;//默认构造函数调用，
//	Person p5 = Person(10);//有参数构造函数
//	Person p6 = Person(p5);//拷贝构造函数
//	Person(10);//匿名对象，当前行执行完，系统会立刻回收，马上析构
//
//	//2.3 隐式转换法
//	Person p7 = 10; // Person p7 = Person(10); 
//	Person p8 = p7; // Person p8 = Person(p7); 
//
//	//注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
//	//Person p5(p4);
//
//}
//
//
////int main() {
////	test1();
////
////	system("pause");
////	return 0;
////}