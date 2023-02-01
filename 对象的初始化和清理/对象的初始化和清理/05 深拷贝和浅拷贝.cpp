//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// 深拷贝和浅拷贝
//
//class Person {
//public:
//	int age;
//	int *height;//设计为指针，是为了把height开辟在堆区
//
//	Person() {
//		cout << "无参数构造" << endl;
//	}
//
//	Person(int a, int h) {
//		age = a;
//		height= new int(h);//把身高开辟在堆区
//		cout << "有参数构造" << endl;
//	}
//
//	// 拷贝构造函数  
//	Person(const Person& p) {
//		cout << "拷贝构造函数!" << endl;
//		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
//		age = p.age;
//		// height = p.height; // 这就是编译器自动进行的浅拷贝
//		height = new int(*p.height);	//使用new，在堆区新开辟一个空间
//
//	}
//
//	~Person() {
//		//将堆区开辟的数据做释放操作
//		if (height != NULL)
//		{
//			delete height;
//		}
//		cout << "析构函数" << endl;
//	}
//};
//
//void test01() {
//	Person p1(18, 160);
//	cout << "p1's age =" << p1.age << endl;
//	cout << "p1's height =" << *p1.height << endl;
//
//	Person p2(p1);
//	cout << "p2's age =" << p2.age << endl;
//	cout << "p2's height =" << *p2.height << endl;
//}
//
//
//int main() {
//	test01();
//
//	system("pause");
//	return 0;
//}