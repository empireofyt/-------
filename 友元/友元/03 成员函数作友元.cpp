#include<iostream>
#include<string>

using namespace std;
class Building;

class GoodGuy {
private:
	Building* building;
public:
	GoodGuy();
	void visit();
	void visit2();
};

class Building {
//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
friend void GoodGuy::visit();

public:
	Building();
	string m_SittingRoom;
private: 
	string m_BedRoom;
};

Building::Building(){
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}


GoodGuy::GoodGuy() {
	building = new Building;
}
//是友元成员函数，所以可以访问私有成员变量
void GoodGuy::visit() {
	cout << "访问" << building->m_SittingRoom << endl;
	cout << "访问" << building->m_BedRoom << endl;
}

void GoodGuy::visit2() {
	cout << "访问" << building->m_SittingRoom << endl;
	//cout << "访问" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGuy gg;
	gg.visit();
	gg.visit2();

}

int main() {

	test01();
	system("pause");
	return 0;
}