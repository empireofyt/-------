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
//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽������
friend void GoodGuy::visit();

public:
	Building();
	string m_SittingRoom;
private: 
	string m_BedRoom;
};

Building::Building(){
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}


GoodGuy::GoodGuy() {
	building = new Building;
}
//����Ԫ��Ա���������Կ��Է���˽�г�Ա����
void GoodGuy::visit() {
	cout << "����" << building->m_SittingRoom << endl;
	cout << "����" << building->m_BedRoom << endl;
}

void GoodGuy::visit2() {
	cout << "����" << building->m_SittingRoom << endl;
	//cout << "����" << building->m_BedRoom << endl;
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