//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class BasePage {
//public:
//	void head() {
//		cout << "网页头部" << endl;
//	}
//	void footer() {
//		cout << "网页底部" << endl;
//	}
//	void left() {
//		cout << "网页左边栏" << endl;
//	}
//};
//
//class CPP : public BasePage {
//public:
//	void content() {
//		cout << "这是cpp的内容" << endl;
//	}
//};
//
//
//class Java : public BasePage {
//public:
//	void content() {
//		cout << "这是Java的内容" << endl;
//	}
//};
//
//
//void test01() {
//	CPP c1;
//	c1.head();
//	c1.footer();
//	c1.left();
//	c1.content();
//
//	Java j1;
//	j1.head();
//	j1.footer();
//	j1.left();
//	j1.content();
//	return;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}