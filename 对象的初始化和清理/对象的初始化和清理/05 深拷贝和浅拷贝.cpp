//#include<iostream>
//#include<string>
//
//using namespace std;
//
//// �����ǳ����
//
//class Person {
//public:
//	int age;
//	int *height;//���Ϊָ�룬��Ϊ�˰�height�����ڶ���
//
//	Person() {
//		cout << "�޲�������" << endl;
//	}
//
//	Person(int a, int h) {
//		age = a;
//		height= new int(h);//����߿����ڶ���
//		cout << "�в�������" << endl;
//	}
//
//	// �������캯��  
//	Person(const Person& p) {
//		cout << "�������캯��!" << endl;
//		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
//		age = p.age;
//		// height = p.height; // ����Ǳ������Զ����е�ǳ����
//		height = new int(*p.height);	//ʹ��new���ڶ����¿���һ���ռ�
//
//	}
//
//	~Person() {
//		//���������ٵ��������ͷŲ���
//		if (height != NULL)
//		{
//			delete height;
//		}
//		cout << "��������" << endl;
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