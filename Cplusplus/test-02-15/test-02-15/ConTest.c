#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include <windows.h>

void menu()
{
	printf("******************************************\n");
	printf("******1. �����ϵ��    2. ɾ����ϵ��******\n");
	printf("******3. �޸���ϵ��    4. ������ϵ��******\n");
	printf("******5. �鿴��ϵ��    0. �˳�ͨѶ¼******\n");
	printf("******************************************\n");

}

int main()
{
	int flag = -1;
	do
	{
		menu();
		printf("��ѡ����Ҫ���еĲ����� \n");
		scanf("%d", &flag);
		switch (flag)
		{
			//�����ϵ��
			case 1:
				break;
			//ɾ����ϵ��
			case 2:
				break;
			//�޸���ϵ��
			case 3:
				break;
			//������ϵ��
			case 4:
				break;
			//�鿴��ϵ��
			case 5:
				break;
			//�˳�ͨѶ¼
			case 0:
				printf("�����˳�ͨѶ¼...\n");
				Sleep(1000);
				printf("�˳��ɹ���\n");
				break;
			default :
			break;
		}
	} while(flag);

	return 0;
}