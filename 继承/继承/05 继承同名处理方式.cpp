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
//		cout << "����ĺ���" << endl;
//	}
//
	//void func(int m_A) {
	//	cout << "����ĺ����в���" << endl;
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
//		cout << "����ĺ���" << endl;
//	}
//	int m_A;
//};
//
//
//void test01() {
//	Son b;
//	cout << b.m_A << endl;//ֱ�ӷ��ʣ���Ϊ�����ͬ����Ա
//	cout << b.Base::m_A << endl;//���������򣬼��ɷ��ʸ����ͬ����Ա
//	b.func();//ֱ�ӷ��ʣ���Ϊ�����ͬ������
//	b.Base::func();//���������򣬼��ɷ��ʸ����ͬ������
//
//	//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ��������а汾��ͬ����Ա����
//	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
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