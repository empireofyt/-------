//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//
//void test01() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);//��ָ��ȫ����ַ���½��ڵ�ǰ��Ŀ��Ŀ¼��
//
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ��" << endl;
//	}
//	
//	//���ļ������ַ���
//	//1. 
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}*/
//
//	//2
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf))) {
//		cout << buf << endl;
//	}*/
//
//	//3
//	/*string buf;
//	while (getline(ifs, buf)) {
//		cout << buf << endl;
//	}*/
//
//	//4 
//	char c;
//	//c δ�����ļ�β,Ч�����
//	while ((c = ifs.get()) != EOF) {
//		cout << c;
//	}
//
//	ifs.close();
//	return;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}