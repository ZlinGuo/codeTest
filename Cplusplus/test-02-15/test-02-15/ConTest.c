#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
#include <windows.h>

void menu()
{
	printf("******************************************\n");
	printf("******1. 添加联系人    2. 删除联系人******\n");
	printf("******3. 修改联系人    4. 查找联系人******\n");
	printf("******5. 查看联系人    0. 退出通讯录******\n");
	printf("******************************************\n");

}

int main()
{
	int flag = -1;
	do
	{
		menu();
		printf("请选择您要进行的操作： \n");
		scanf("%d", &flag);
		switch (flag)
		{
			//添加联系人
			case 1:
				break;
			//删除联系人
			case 2:
				break;
			//修改联系人
			case 3:
				break;
			//查找联系人
			case 4:
				break;
			//查看联系人
			case 5:
				break;
			//退出通讯录
			case 0:
				printf("正在退出通讯录...\n");
				Sleep(1000);
				printf("退出成功！\n");
				break;
			default :
			break;
		}
	} while(flag);

	return 0;
}