//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
////�������ļ���д�ļ�
//class Person {
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01() {
//	ofstream ofs;
//	//ֱ������+��ʼ��Ҳ��
//	//ofstream ofs("person.txt", ios::out | ios::binary);
//
//	ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "����",19 };
//	//(const char*)��Ϊ�˽�person���͵�ָ��ǿ��ת��Ϊchar����ָ��
//	ofs.write((const char*)&p, sizeof(Person));
//	ofs.close();
//}
//
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}