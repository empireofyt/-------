#include<iostream>
#include<string>
using namespace std;

//�ṹ������
//1 ����ṹ��
struct Student
{
	//��Ա�б�
	string name;
	int age;
	int score;
};

int main() {
	//2 �����ṹ������
	struct Student stuArr[3] = {
		{"����", 19, 32},
		{"����", 12, 99},
		{"����", 32, 79}
	};

	// 3 ���ṹ�������е�Ԫ�ظ�ֵ
	stuArr[2].age = 30;

	//4�����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << "������ " << stuArr[i].name << " ���䣺" << stuArr[i].age << " �ɼ���" << stuArr[i].score << endl;
	}

	system("pause");
	return 0;
}