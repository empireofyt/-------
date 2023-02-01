//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//
//void test01() {
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);//不指定全部地址，新建在当前项目的目录下
//
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//	}
//	
//	//读文件的四种方法
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
//	//c 未读到文件尾,效率最低
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