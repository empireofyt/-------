//#include<iostream>
//#include<string>
//
//using namespace std;
////��ģ����̳�
//template<class T>
//class Base {
//	T m;
//};
//
////class Son :public Base
////����c++������Ҫ����������ڴ棬����֪��������T�����Ͳſ������¼̳�
//class Son :public Base<int> {
//
//};
//
//void test01() {
//	Son c;
//}
//
////��������ָ����������T�����ͣ�����Ҳ���Ϊ��ģ��
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