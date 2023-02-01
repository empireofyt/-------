//#include<iostream>
//#include<string>
//
//using namespace std;
////类模板与继承
//template<class T>
//class Base {
//	T m;
//};
//
////class Son :public Base
////错误，c++编译需要给子类分配内存，必须知道父类中T的类型才可以向下继承
//class Son :public Base<int> {
//
//};
//
//void test01() {
//	Son c;
//}
//
////如果想灵活指定出父类中T的类型，子类也需变为类模板
//template<class T1, class T2>
//class Son2 :public Base<T2> {
//public:
//	Son2()
//	{
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//	T1 obj;
//};
//
//void test02() {
//	Son2<int, char> S2;
//}
//
//int main() {
//
//	test02();
//	system("pause");
//	return 0;
//}