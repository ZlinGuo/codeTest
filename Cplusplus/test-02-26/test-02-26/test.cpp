#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//    int m = 0;
//    scanf("%d", &m);
//    int arr[101] = { 0 };
//    int sum = 0;
//    int j = 0;
//    int tmp = m * m * m;
//    for (int i = 1; i <= 201; i += 2)
//    {
//        arr[j] = i;
//        j++;
//    }
//    while (sum != tmp)
//    {
//        int i = 0;
//        for (i = 0; i < m; i++)
//        {
//            sum += arr[i];
//        }
//        if (sum == tmp && i == m)
//        {
//            printf("%d", arr[0]);
//            for (int k = 1; k < m; k++)
//            {
//                printf("+%d", arr[k]);
//            }
//            break;
//        }
//        else
//        {
//            for (int i = 0; i < m; i++)
//            {
//                arr[i] += 2;
//            }
//        }
//        i = 0;
//        sum = 0;
//
//    }
//
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1001] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int negative = 0;
//	int positive = 0;
//	double average = 0.0;
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > 0)
//		{
//			positive++;
//			sum += arr[i];
//		}
//		if (arr[i] < 0)
//			negative++;
//	}
//	average = sum / (double)positive;
//	if (positive == 0)
//	{
//		printf("%d 0.0", negative);
//	}
//	else
//		printf("%d %.1lf", negative, average);
//	return 0;
//}




#include <stdio.h>

int main()
{
	char str[101] = { 0 };
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		int sz = sizeof(str);
		int FrontofFlag = 1;
		int KindofFlag = 1;
		int up = 0, down = 0, digit = 0;
		for (int j = 0; j < sz; j++)
		{
			if (str[0] >= '0' && str[0] <= '9')
			{
				FrontofFlag = 0;
			}
			if (str[j] <= 'A' && str[j] <= 'a' && str[j] <= '0' && str[j] >= 'Z' && str[j] >= 'z' && str[j] >= '9')
			{
				KindofFlag = 0;
			}
			if (str[j] >= 'A' && str[j] <= 'Z')
			{
				up++;
			}
			if (str[j] >= 'a' && str[j] <= 'z')
			{
				down++;
			}
			if (str[j] >= '0' && str[j] <= '9')
			{
				digit++;
			}
		}
		if(FrontofFlag && KindofFlag && sz >= 8 && ((up && down) || (up && digit) || (down && digit)))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}