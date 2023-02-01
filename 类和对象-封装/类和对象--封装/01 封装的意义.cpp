#include<iostream>
using namespace std;
#include<string>

const double PI = 3.14;
//设计一个学生类，属性有姓名和学号，可以给两者赋值，可以显示两者
class Student {
public:
	string m_Name;
	string m_ID;
	void setName(string name) {
		m_Name = name;
	}
	void setID(string ID) {
		m_ID = ID;
	}

	void showName(){
		cout <<"姓名：" << m_Name << endl;
	}
	void showNumID() {
		cout << "学号：" << m_ID << endl;
	}
};

//设计一个圆类，求圆的周长  2*PI*半径
class Circle {
	//访问权限
public:
	int m_r;

	double calculateZC() {
		return 2 * PI * m_r;
	}
};

int main() {
	/*Circle c1;
	c1.m_r = 3;
	cout << c1.m_r << c1.calculateZC() << endl;*/

	Student s1;
	s1.setName("张三");
	s1.setID("12454341");
	s1.showName();
	s1.showNumID();
	system("pause");

	return 0;
}