//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class AbstractDrinking {
//public:
//	//��ˮ�����ݣ����뱭�У���������
//	virtual void Boil() = 0;
//	virtual void Brew() = 0;
//	virtual void PourIntoCup() = 0;
//	virtual void Putsth() = 0;
//
//	void makeDrink() {
//		Boil();
//		Brew();
//		PourIntoCup();
//		Putsth();
//	}
//};
//
//
//class Coffee :public AbstractDrinking {
//public:
//	//��ˮ�����ݣ����뱭�У���������
//	virtual void Boil() {
//		cout << "Boil coffee" << endl;
//	}
//	virtual void Brew() {
//		cout << "Brew coffee" << endl;
//	}
//	virtual void PourIntoCup() {
//		cout << "PourIntoCup coffee" << endl;
//	}
//	virtual void Putsth() {
//		cout << "Putsth coffee" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking {
//public:
//	//��ˮ�����ݣ����뱭�У���������
//	virtual void Boil() {
//		cout << "Boil Tea" << endl;
//	}
//	virtual void Brew() {
//		cout << "Brew Tea" << endl;
//	}
//	virtual void PourIntoCup() {
//		cout << "PourIntoCup Tea" << endl;
//	}
//	virtual void Putsth() {
//		cout << "Putsth Tea" << endl;
//	}
//};
//
//void doWork(AbstractDrinking* abs) {
//	//����ָ����ýӿ�
//	abs->makeDrink();
//	delete abs;//�ͷ�
//}
//
//void test01() {
//	doWork(new Coffee);
//	doWork(new Tea);
//	return;
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}