#pragma once //��ֹͷ�ļ��ظ�����
#include<iostream>
#include<string>

using namespace std;
//�����ฺ����������£�
// 1 ���û��Ĺ�ͨ�˵�����
// 2 ��ְ����ɾ�Ĳ�Ĳ���
// 3 ���ļ��Ķ�д����

class WorkerManager {
public:
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�����
	void exitSystem();


	~WorkerManager();
};