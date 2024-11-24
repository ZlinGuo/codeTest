#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
//int main()
//{
//	char a[1000];
//	for (int i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	int ret = strlen(a);
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);
	printf("%x,&x\n", ptr1[-1], *ptr2);
	return 0;
}