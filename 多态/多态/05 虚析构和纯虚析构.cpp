#include<iostream>
#include<string>

using namespace std;
class Animal
{
public:

	Animal()
	{
		cout << "Animal ���캯�����ã�" << endl;
	}

	//Speak�������Ǵ��麯��
	virtual void speak() = 0;
	
	 /*~Animal()
	{
		cout << "Animal�����������ã�" << endl;
	}*/

	//������������virtual�ؼ��֣��������������
	/*virtual ~Animal()
	{
		cout << "Animal�������������ã�" << endl;
	}*/

	//��������,ʹ�õ�ʱ�򣬱���Ҫ����ʵ�֣���Ϊ����Ҳ�п���������զ����
	//���˴�������֮����Ҳ�ǳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal ���������������ã�" << endl;
}

class Cat :public Animal
{
public:
	string *m_Name;
	Cat(string name)
	{
		cout << "Cat���캯�����ã�" << endl;
		//��������һ������
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << "Сè��˵��" << endl;
	}
	~Cat()
	{
		cout << "Cat������������!" << endl;
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
		cout << "С����˵��" << endl;
	}

};

//
//��̬���������� 
//1���м̳й�ϵ
//2��������д�����е��麯��
//��̬ʹ�ã�
//����ָ�������ָ���������

void test01()
{
	Animal* ani = new Cat("Tom");
	//����ָ��զ������ʱ�򣬲����������������������Ӷ���������������ж������ԣ������ڴ�й¶
	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
	//��ô���������������һ������������
	//���������������������ͨ������ָ���ͷ��������
	ani->speak();
	delete ani;
}


int main() {
	test01();
	system("pause");
	return 0;
}