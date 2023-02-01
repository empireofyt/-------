#pragma once //防止头文件重复包含
#include<iostream>
#include<string>

using namespace std;
//管理类负责的内容如下：
// 1 与用户的沟通菜单界面
// 2 对职工增删改查的操作
// 3 与文件的读写交互

class WorkerManager {
public:
	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出程序
	void exitSystem();


	~WorkerManager();
};