#include<iostream>
#include<string>
using namespace std;

//结构体数组
//1 定义结构体
struct Student
{
	//成员列表
	string name;
	int age;
	int score;
};

int main() {
	//2 创建结构体数组
	struct Student stuArr[3] = {
		{"张三", 19, 32},
		{"李四", 12, 99},
		{"王五", 32, 79}
	};

	// 3 给结构体数组中的元素赋值
	stuArr[2].age = 30;

	//4遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名： " << stuArr[i].name << " 年龄：" << stuArr[i].age << " 成绩：" << stuArr[i].score << endl;
	}

	system("pause");
	return 0;
}