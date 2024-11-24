#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
//
//void Prime_of_1018(int *p)
//{
//	int j = 0;
//	for (int i = 1; i <= 1018; i++)
//	{
//		if (1018 % i == 0)
//		{
//			*(p + j) = i;
//			j++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[100] = { 0 };
//	Prime_of_1018(arr);
//	int count = 1;
//	int flag = 0;
//	for (int i = 2; i <= 2020; i++)
//	{
//		for (int j = 1;arr[j] != '\0'; j++)
//		{
//			if (i % arr[j] == 0)
//			{
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			count++;
//		}
//		flag = 0;
//	}
//	cout << count;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int other = 10;
//	int mouce = i, eyes = 2 * i, legs = 4 * i;
//	int num = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		mouce = i, eyes = 2 * i, legs = 4 * i;
//		if (legs <= 10)
//		{
//			num = num + other + 4;
//		}
//		else if (legs <= 20 && eyes <= 10)
//		{
//			num = num + other + 5;
//		}
//		if (legs > 20 && legs % 10 == 0 && eyes <= 10)
//		{
//			num = num + other + 6;
//		}
//		if (legs > 20 && legs % 10 != 0 && eyes <= 10)
//		{
//			num = num + other + 7;
//		}
//		if (legs % 10 == 0 && eyes <= 20 && mouce <= 10)
//		{
//			num = num + other + 6;
//		}
//		if (legs % 10 != 0 && eyes > 20 && eyes % 10 == 0 && mouce <= 10)
//		{
//			num = num + other + 6;
//		}
//		if (legs % 10 == 0 && eyes > 20 && eyes % 10 != 0 && mouce <= 10)
//		{
//			num = num + other + 6;
//		}
//		if (legs > 10 && eyes > 10 && legs % 10 != 0 && eyes % 10 != 0 && mouce <= 10)
//		{
//			num = num + other + 8;
//		}
//		if (legs > 10 && eyes > 10 && mouce > 10 && legs % 10 == 0 && eyes % 10 == 0)
//		{
//			num = num + other + 7;
//		}
//		if (legs > 10 && eyes > 10 && mouce > 10 && legs % 10 == 0 && eyes % 10 != 0)
//		{
//			num = num + other + 8;
//		}
//		if (legs > 10 && eyes > 10 && mouce > 10 && legs % 10 != 0 && eyes % 10 == 0)
//
//		{
//			num = num + other + 8;
//		}
//		if (legs > 10 && eyes > 10 && mouce > 10 && legs % 10 != 0 && eyes % 10 != 0)
//		{
//			num = num + other + 9;
//		}
//	}
//	cout << num - 10;
//	return 0;
//
//}

////3,110,400+2,799,360+3,110,400+2,799,360 +1,944,000+1,814,400+3,037,500
//int main()
//{
//	printf("%d\n", 16*6*10*9*9+16*10*9*9*9+6*15*10*9*9+10*15*9*9*9+10*9*9*15*15+10*9*15*15*15+10*9*15*15*15+6*5*10*9*9*9+6*5*5*10*10*10+6*10*9*9*9*9+6*10*6*10*9*9+10*6*5*10*9*9+10*6*10*9*9*9+10*9*6*10*9*9+10*9*9*9*9*9+74100);
//	return 0;
//}



