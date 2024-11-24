// #include <cstdio>
// #include <cstring>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// const int N = 6;
// char g[N][N], backup[N][N];
// int dx[5] = { -1, 0, 1, 0, 0 }, dy[5] = { 0, 1, 0, -1, 0 };

// //用这种的连带会很方便能够避免发生缺漏，也更加容易扩展
// void turn(int x, int y)
// {
//         for (int i = 0; i < 5; i++)
//         {
//                int a = x + dx[i], b = y + dy[i];
//                if (a < 0 || a >= 5 || b < 0 || b >= 5) continue;   // 在边界外，直接忽略即可
//                g[a][b] ^= 1;
//         }
// }
// int main()
// {
//         int T;
//         cin >> T;
//         while (T--)
//         {
//                for (int i = 0; i < 5; i++) cin >> g[i];
//                int res = 10;
//                for (int op = 0; op < 32; op++)                    //操作数2^5，全排第一行，可以进行2^5不同的操作
//                {
//                        memcpy(backup, g, sizeof g);
//                        int step = 0;
//                        for (int i = 0; i < 5; i++)
//                               if (op >> i & 1)
//                               {
//                                       step++;
//                                       turn(0, i);
//                               }
//                        for (int i = 0; i < 4; i++)
//                               for (int j = 0; j < 5; j++)
//                                       if (g[i][j] == '0')
//                                       {
//                                              step++;
//                                              turn(i + 1, j);
//                                       }
                                      
//                        bool dark = false;
//                        for (int i = 0; i < 5; i++)
//                               if (g[4][i] == '0')
//                               {
//                                       dark = true;
//                                       break;
//                               }
                              
//                        if (!dark) res = min(res, step);            //min方法必须加头文件#include <algorithm>
//                        memcpy(g, backup, sizeof g);                //还原继续测试，取到最小的步数
//                }
               
//                if (res > 6) res = -1;
//                cout << res << endl;
//         }
//         return 0;
// }


#include <iostream>

using namespace std;

//union u_type
//{
//    int i;
//    char ch;
//}temp;
//int main()
//{
//    temp.i = 305;
//    cout << temp.ch;
//    return 0;
//}


//struct student
//{
//	int age;
//	int num;
// } ;
// int main()
// {
// 	struct student stu[3] = {{1001,20},{1002, 19},{1003, 21}};
// 	struct student *p;
// 	p = stu;
// 	//cout << (*++p).age;
// 	
//	 return 0;
// }

//struct n
//{
//	int x;
//	char c;
//};
//
//void func(struct n b)
//{
//	b.x = 20;
//	b.c = 'y';
//}

//const int N = 10010;
//
//int ans = 0;
//int arr[N];
//
//void dfs(int x)
//{
//	if(x > 14)
//	{
//		int num = 2;
//		int a = 0, b = 0;
//		for(int i = 1; i <= 14; i++)
//		{
//			if(arr[i] == 1)
//			{
//				a++;
//				num *= 2;
//			}
//			if(arr[i] == 2)
//			{
//				b++;
//				num--;
//			}
//		}
//		if(num == 1 && a == 5 && b ==9)
//		{
//			ans ++;
//		}
//		return ;
//	}
//	arr[x] = 1;
//	dfs(x + 1);
//	arr[x] = 0;
//	
//	arr[x] = 2;
//	dfs(x + 1);
//	arr[x] = 0;
//}
//
//int main()
//{
//	int num = 2;
//	dfs(1);
//	printf("%d\n", ans);
//	return 0;
//}

//const int N = 10010;
//
//int ans = 0;
//int sum = 0;
//
//int dfs(int x)
//{
//	if(x == 1) return 1;
//	if(x == 2) return 1;
//	return dfs(x - 1) + dfs(x - 2);
//}
//
//int main()
//{
//	int ret = dfs(39);
//	cout << ret << endl;
//	return 0;
//}


int main()
{
	// int ans = 0; 
	// int num = 0;//        
	// int n = 0;
    // int flag = 0;
	// scanf("%d", &n);
	// num = n / 3 + n % 3;
	// while(num >= 2)
	// {
    //     flag = 1;
	// 	ans += num;
	// 	num = num / 3 + num % 3;
		
	// 	if(num == 2)
	// 	{
	// 		ans ++;
	// 		num = 0;
	// 	}
	// }

    // if(flag == 0)
    // {
    //     ans += num;
    // }
    // if(num == 1)
    // {
    //     ans++;
    // }
	// cout << ans << endl;
    cout << "11";
	return 0;
}
