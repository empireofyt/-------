#include<iostream>
#include<string>
#define MAX 1000 //定义最大人数
using namespace std;

//联系人结构体
struct Person {
	string m_Name;
	int m_Sex;//性别L;1 男    2女
	int m_Age;
	string m_Phone;
	string m_Addr;
};

//通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX];//通讯录中保存的联系人数组
	int m_Size;	//通讯录中人员个数
};


//菜单界面
void showMenu() {
	cout << "***************************  " << endl;
	cout << "*****  1. 添加联系人  *****  " << endl;
	cout << "*****  2. 显示联系人  *****  " << endl;
	cout << "*****  3. 删除联系人  *****  " << endl;
	cout << "*****  4. 查找联系人  *****  " << endl;
	cout << "*****  5. 修改联系人  *****  " << endl;
	cout << "*****  6. 清空联系人  *****  " << endl;
	cout << "*****  0. 退出通讯录  *****  " << endl;
	cout << "***************************  " << endl;
}

//1. 添加联系人
void addPerson(Addressbooks* abs) {
	//判断通讯录是否满员
	if (abs->m_Size == MAX) {
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else {
		//添加具体联系
		//姓名
		string  name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男    2 -- 女" << endl;
		int sex = 0;
		while (true) {
			//若输入的是1,2 可以退出循环；若输入有误，则循环重复输入
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		// 年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		
		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;

		//地址
		cout << "请输入家庭住址：" << endl;
		string add;
		cin >> add;
		abs->personArray[abs->m_Size].m_Addr = add;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;

		system("pause");//按任意键继续
		system("cls");//清屏操作
	}
}


//2. 显示联系人
void showPerson(Addressbooks* abs) {
	//先判断通讯录中有没有人
	if (abs->m_Size == 0) {
		cout << "当前记录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名：" << abs->personArray[i].m_Name <<"\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女" ) << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏操作
}

//检测联系人是否存在，若存在返回联系人在数组中的具体位置，不在则返回-1
//函数两个参数，一个是通讯录，一个是对比姓名，因为设计的时候，是利用姓名来判断人的
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}

	}
	return -1;
}

//3. 删除联系人
void deletePerson(Addressbooks* abs) {
	cout << "请输入要删除的联系人：" << endl;
	string name;
	cin >> name;

	//ret为-1表示没找到此联系人
	//此处abs前面不需要加上&，因为此处的abs是作为指针的，是deletePerson函数传入的实参
	int ret = isExist(abs, name);
	if (ret == -1) {
		cout << "未找到此联系人" << endl;
	}
	else {
		for (int i = ret; i < abs->m_Size; i++) {
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		//更新通讯录中人员数目
		abs->m_Size--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}

//4. 查找联系人
void findPerson(Addressbooks* abs) {
	cout << "请输入要查找的联系人：" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否存在
	int ret = isExist(abs, name);
	if (ret == -1) {
		cout << "未找到此联系人" << endl;
	}
	else {
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}

	system("pause");
	system("cls");
}


//4. 修改联系人
void modifyPerson(Addressbooks* abs) {
	cout << "请输入要查找的联系人：" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否存在
	int ret = isExist(abs, name);
	if (ret == -1) {
		cout << "未找到此联系人" << endl;
	}
	else {
		//姓名
		string  name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男    2 -- 女" << endl;
		int sex = 0;
		while (true) {
			//若输入的是1,2 可以退出循环；若输入有误，则循环重复输入
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		// 年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//地址
		cout << "请输入家庭住址：" << endl;
		string add;
		cin >> add;
		abs->personArray[ret].m_Addr = add;

		cout << "修改成功" << endl;
	}

	system("pause");
	system("cls");
}

// 5. 清空通讯录
void cleanPerson(Addressbooks* abs) {
	abs->m_Size = 0;
	cout << "已清空通讯录" << endl;
	system("pause");
	system("cls");
}


int main() {
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	//用户选择输入变量
	int select = 0;

	while (true) {
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1:	//1. 添加联系人
			addPerson(&abs);//利用地址传递，可以修饰实参
			break;
		case 2:	//2. 显示联系人
			showPerson(&abs);
			break;
		case 3:	//3. 删除联系人
			deletePerson(&abs);
			break;
		case 4:	//4. 查找联系人
			findPerson(&abs);
			break;
		case 5:	//5. 修改联系人
			modifyPerson(&abs);
			break;
		case 6:	//6. 清空联系人
			cleanPerson(&abs);
			break;
		case 0:	//0. 退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}