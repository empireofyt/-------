//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// ���캯���ķ��༰����
////����
//
//class Person {
//private:
//
//public:
//	int age;
//	Person() {
//		cout << "�޲�������" << endl;
//	}
//
//	Person(int a) {
//		age = a;
//		cout << "�в�������" << endl;
//	}
//
//	// �������캯��
//	Person(const Person& p) {
//		//������������ϵ��������ԣ�������������
//		age = p.age;
//		cout << "�������캯��" << endl;
//	}
//	~Person() {
//		cout << "��������" << endl;
//	}
//};
//
////1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01() {
//	Person p1(20);
//	Person p2(p1);
//
//	return;
//}
////2. ֵ���ݵķ�ʽ������������ֵ
////�൱��Person p1 = p;
//void doWork(Person p1) {}
//void test02() {
//	Person p; //�޲ι��캯��
//	doWork(p);
//}
//
//
////3. ��ֵ��ʽ���ؾֲ�����
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