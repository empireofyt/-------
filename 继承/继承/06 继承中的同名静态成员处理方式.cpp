//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base {
//public:
//	//��̬��Ա�����ص㣺����ͷ����ڴ棬���ж�����ͬһ������
//	//���������������ʼ��
//	static int m_A;
//	static void func() {
//		cout << "����ĺ���" << endl;
//	}
//
//	static void func(int m_A) {
//		cout << "����ĺ����в���" << endl;
//	}
//};
//int Base::m_A = 100;
//
//class Son : public Base {
//public:
//	static int m_A;
//	static void func() {
//		cout << "����ĺ���" << endl;
//	}
//};
//int Son::m_A = 200;
//
//
//void test01() {
//	//ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son b;
//	cout << "Son��m_A = " << b.m_A << endl;//ֱ�ӷ��ʣ���Ϊ�����ͬ����Ա
//	cout << "Base��m_A = " << b.Base::m_A << endl;//���������򣬼��ɷ��ʸ����ͬ����Ա
//
//	//ͨ����������
//	cout << "ͨ���������ʣ� " << endl;
//	cout << "Son��m_A = " << Son::m_A << endl;//ֱ�ӷ��ʣ���Ϊ�����ͬ����Ա
//	cout << "Base��m_A = " << Base::m_A << endl;//���������򣬼��ɷ��ʸ����ͬ����Ա
//	//��һ��::����ͨ��������ʽ���ʣ� �ڶ���::����������
//	cout << "Base��m_A = " << Son::Base::m_A << endl;
//
//	return;
//}
//
//
//void test02() {
//	//ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
//	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
//	//s.func(100);
//	s.Base::func(100);
//
//
//	//ͨ����������
//	cout << "ͨ���������ʣ� " << endl;
//	Son::func();
//	Base::func();
//	Son::Base::func();
//
//	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
//	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
//	Son::Base::func(100);
//}
//
//int main() {
//	test02();
//	system("pause");
//	return 0;
//}