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
//	Person(const Person &p) {
//		//������������ϵ��������ԣ�������������
//		age = p.age;
//		cout << "�������캯��" << endl;
//	}
//	~Person() {
//		cout << "��������" << endl;
//	}
//};
//
////����
//void test1() {
//	//1. ���ŷ�
//	Person p1;	//Ĭ�Ϲ��캯�����ã�
//	//ע����ù��캯��ʱ��Ҫ���ϣ������������ţ�����������Ϊ����һ������������
//	Person p2(10);	//�в������캯��
//	Person p3(p2);	//�������캯��
//	cout << "p2's age = " << p2.age << endl;
//	cout << "p3's age = " << p3.age << endl;
//
//	//2. ��ʾ��
//	Person p4;//Ĭ�Ϲ��캯�����ã�
//	Person p5 = Person(10);//�в������캯��
//	Person p6 = Person(p5);//�������캯��
//	Person(10);//�������󣬵�ǰ��ִ���꣬ϵͳ�����̻��գ���������
//
//	//2.3 ��ʽת����
//	Person p7 = 10; // Person p7 = Person(10); 
//	Person p8 = p7; // Person p8 = Person(p7); 
//
//	//ע��2���������� �������캯�� ��ʼ���������� ��������Ϊ�Ƕ�������
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