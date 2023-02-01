//#include<iostream>
//using namespace std;
//
//template<typename T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	//利用模板实现交换
//	//1、自动类型推导
//	//mySwap(a, b);
//
//	//2、显示指定类型
//	mySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////int main() {
////	test01();
////	system("pause");
////	return 0;
////}