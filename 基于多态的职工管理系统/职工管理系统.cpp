#include"workerManager.h"

int main() {
	//ʵ���������߶���
	WorkerManager wm;
	//�����洢�û���ѡ��
	int choice = 0;
	while (true) {
		//չʾ�˵�
		wm.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: //�˳�ϵͳ
			wm.exitSystem();
			break;
		case 1: //���ְ��
			break;
		case 2: //��ʾְ��
			break;
		case 3: //ɾ��ְ��
			break;
		case 4: //�޸�ְ��
			break;
		case 5: //����ְ��
			break;
		case 6: //����ְ��
			break;
		case 7: //����ļ�
			break;
		default:
			system("cls");	//�����Ļ
			break;
		}
	}


	system("pause");
	return 0;
}