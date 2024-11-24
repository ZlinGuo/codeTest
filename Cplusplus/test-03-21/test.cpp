// #include <bits/stdc++.h>

// using namespace std;

// int n;

// int fib(int x)
// {
//     if(x == 1)
//     {
//         return 1;
//     }
//     if(x == 2)
//     return 2;
//     return fib(x - 1) + fib(x - 2);
// }

// int main()
// {
//     scanf("%d", &n);
//     int ret = fib(n);
//     printf("%d\n",ret);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 20;
// int n = 0;
// int vis[N];

// void dfs(int x)
// {
//     if(x > n)
//     {
//         for(int i = 1; i <= n; i++)
//         {
//             if(vis[i] == 1)
//             {
//                 printf("%d ", i);
//             }
//         }
//         printf("\n");
//         return ;
//     }
//     vis[x] = 1;//选
//     dfs(x + 1);
//     vis[x] = 0;

//     vis[x] = 2;//不选
//     dfs(x + 1);
//     vis[x] = 0;
// }
// int main()
// {
//     scanf("%d", &n);
//     dfs(1);
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// const int N = 10;

// int n = 0;
// bool vis[N];//判断选没选过这个数
// int arr[N];

// void dfs(int x = 0)
// {
//     if(x > n)
//     {
//         for(int i = 1; i <= n; i++)
//         {
//             printf("%5d", arr[i]);
//         }
//         printf("\n");
//         return ;   
//     }

//     for(int i = 1; i <= n; i++)
//     {
//         if(!vis[i])//如果没选过
//         {
//             vis[i] = true;
//             arr[x] = i;
//             dfs(x + 1);
//             vis[i] = false;
//             arr[x] = 0;
//         }
//     }
// }

// int main()
// {
//     scanf("%d", &n);
//     dfs(1);
//     return 0;
// }


// #include <iostream> 
// using namespace std; 
// int sum=0;//定义全局变量sum 
// void fac(int n,int step)//函数 
// { if(n<0) return; if(n==0&&step%2==0)//如果台阶数为0，步数是偶数 
// sum++;//sum加加 
// fac(n-1,step+1);//台阶数减一，步数加一 
// fac(n-2,step+1);//台阶数减二，步数加一 
// } 
// int main() { int i,j,n=39;//初始化 
// fac(n,0);//调用函数 
// cout<<sum;//输出结果 
// return 0; 
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int N= 20;

// int n;
// int vis[N];

// void dfs(int x)
// {
//     if(x > n)
//     {
//         for(int i = 0; i <= n; i++)
//         {
//             if(vis[i] == 1)
//             {
//                 printf("%d ", i);
//             }
//         }
//         printf("\n");
//         return ;
//     }
//     vis[x] = 2;
//     dfs(x + 1);
//     vis[x] = 0;

//     vis[x] = 1;
//     dfs(x + 1);
//     vis[x] = 0;
// }

// int main()
// {
//     scanf("%d", &n);
//     dfs(1);
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int n;

// int fib(int n)
// {
//     if(n == 0)
//         return 0;
//     if(n == 1)
//         return 1;
//     if(n == 2)
//         return 1;
//     if(n == 3)
//         return 2;
//     return fib(n - 1) + fib(n -2);
// }

// int main()
// {
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++)
//     {
//         long long ret = fib(i);
//         printf("%d ", ret);
//     }
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{

    return 0;
}