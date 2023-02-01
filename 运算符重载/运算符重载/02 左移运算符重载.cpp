#include<iostream>
#include<string>

using namespace std;

class Person {
	friend ostream& operator<<(ostream& cout, Person& p);
private: 
	//不可以利用成员函数重载左移
	//本质p.operator<<(cout)  简化版本p<<cout，不满足我们的期望
	/*void operator<<(cout) {

	}*/

	int m_A;
	int m_B;
public:
	Person(int a, int b) {
		m_A = a;
		m_B = b;
	}
};

//只能利用全局函数重载左移运算符
//本质operator<<(cout， p)  简化版本cout<<p，符合要求
ostream& operator<<(ostream& cout, Person& p) {
	cout << "m_A" << p.m_A << "m_B" << p.m_B << endl;
	return cout;
}

void test01() {
	Person p(10, 10);

	//链式编程思想，定义返回的类型为ostream&，则cout << p后还是一个cout，可以继续加endl
	cout << p << endl;
	return ;
}

int main() {
	test01();
	system("pause");
	return 0;
}