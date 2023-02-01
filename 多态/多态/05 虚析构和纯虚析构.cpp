#include<iostream>
#include<string>

using namespace std;
class Animal
{
public:

	Animal()
	{
		cout << "Animal 构造函数调用！" << endl;
	}

	//Speak函数就是纯虚函数
	virtual void speak() = 0;
	
	 /*~Animal()
	{
		cout << "Animal析构函数调用！" << endl;
	}*/

	//析构函数加上virtual关键字，变成虚析构函数
	/*virtual ~Animal()
	{
		cout << "Animal虚析构函数调用！" << endl;
	}*/

	//纯虚析构,使用的时候，必须要类外实现，因为父类也有可能有数据咋堆区
	//有了纯虚析构之后，类也是抽象类，无法实例化对象
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal 纯虚析构函数调用！" << endl;
}

class Cat :public Animal
{
public:
	string *m_Name;
	Cat(string name)
	{
		cout << "Cat构造函数调用！" << endl;
		//堆区创造一个属性
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << "小猫在说话" << endl;
	}
	~Cat()
	{
		cout << "Cat析构函数调用!" << endl;
		if (this->m_Name != NULL) {
			delete m_Name;
			m_Name = NULL;
		}
	}

};


class Dog :public Animal
{
public:
	virtual void speak()
	{
		cout << "小狗在说话" << endl;
	}

};

//
//多态满足条件： 
//1、有继承关系
//2、子类重写父类中的虚函数
//多态使用：
//父类指针或引用指向子类对象

void test01()
{
	Animal* ani = new Cat("Tom");
	//父类指针咋析构的时候，不会调用子类的析构函数，从而导致子类中如果有堆区属性，出现内存泄露
	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
	//怎么解决？给基类增加一个虚析构函数
	//虚析构函数就是用来解决通过父类指针释放子类对象
	ani->speak();
	delete ani;
}


int main() {
	test01();
	system("pause");
	return 0;
}