//#include<iostream>
//#include<string>
//using namespace std;
//
////1 创建学生数据类型：包括姓名 年龄 分数
//struct Student
//{
//	//成员列表
//	string name;
//	int age;
//	int score;
//}s3;
//
//// 2 通过学生类型创建具体学生
//
//int main() {
//	// 2.1 struct Student S1;  struct在创建时可以省略
//	//	Student s1;
//	struct Student s1;
//	s1.name = "张三";
//	s1.age = 10;
//	s1.score = 100;
//	cout << "姓名：" << s1.name << "年龄：" << s1.age << "成绩：" << s1.score << endl;
//	//2.2 struct Student S2 = {..};
//	struct Student s2 = { "李四", 23, 99 };
//	cout << "姓名：" << s2.name << "年龄：" << s2.age << "成绩：" << s2.score << endl;
//	//2.3 在定义结构体时顺便创建结构体变量
//	s3.name = "王五";
//	s3.age = 17;
//	s3.score = 89;
//	system("pause");
//	return 0;
//}