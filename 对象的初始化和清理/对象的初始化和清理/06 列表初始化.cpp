#include<iostream>
#include<string>

using namespace std;
 
class Person {
public:
	int a, b, c;
	//初始化列表
	Person(int aa, int bb, int cc) :a(aa), b(bb), c(cc)
	{

	}
};

void test() {
	Person p1(10,20,43);
	cout << p1.a << "  " << p1.b << "  " << p1.c << "  " << endl;
}

int main() {

	test();

	system("pause");
	return 0;
}