//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base {
//public:
//	//���麯������ʱ��Ϊ������
//	virtual void func() = 0;
//};
//
////���������д�����еĴ��麯���������޷�ʵ��������
//class Son :public Base {
//public:
//	virtual void func() {//virtual����ʡ��
//		cout << "son" << endl;
//	}
//};
//
//void test01() {
//	//Base b;	//�������޷�ʵ��������
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