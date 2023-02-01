//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
////二进制文件，写文件
//class Person {
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01() {
//	ofstream ofs;
//	//直接声明+初始化也可
//	//ofstream ofs("person.txt", ios::out | ios::binary);
//
//	ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "张三",19 };
//	//(const char*)是为了将person类型的指针强制转化为char类型指针
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