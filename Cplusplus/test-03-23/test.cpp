// #include <bits/stdc++.h>
// using namespace std;

// const int N = 25;

// int n, k;
// int arr[N];
// int q[N];
// int num = 0;

// bool is_prime(int sum)
// {
//     if(sum < 2)
//     {
//         return false;
//     }

//     for(int i = 2; i <= sum / i; i++)
//     {
//         if(sum % i == 0)
//         return false;
//     }
//     return true;
// }

// void dfs(int x , int start)
// {
//     if(xn - x)
//     if(x > k)
//     {
//         int sum = 0;
//         for(int i = 1; i <= k; i++)
//         {
//             sum += arr[i];
//         }
//         if(is_prime(sum))
//         {
//             num++;
//         }
//         return ;
//     }

//     for(int i = start; i <= n; i++)
//     {
//         arr[x] = q[i];
//         dfs(x + 1, i + 1);
//         arr[x] = 0;
//     }
// }

// int main()
// {
//     scanf("%d %d", &n, &k);
//     for(int i = 1; i <= n; i++)
//     {
//         scanf("%d", &q[i]);
//     }
//     dfs(1, 1);
//     printf("%d\n", num);
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// const int N = 20;

// int n;
// int nums = 0;
// int arr[N];
// int ans[60000][N];

// void dfs(int x, int sum)//x 表示第几种调料  sum 表示前x-1种调料质量和
// {
//     if(sum > n)
//         return ;
//     if(x > 10)
//     {
//         if(sum == n)
//         {
//             nums++;
//            for(int i = 1; i <= 10; i++)
//            {
//             ans[nums][i] = arr[i];
//            }
//         }
//         return ;
//     }
//     for(int i = 1; i <= 3; i++)
//     {
//         arr[x] = i;
//         dfs(x + 1, sum + i);
//         arr[x] = 0;
//     }
// }

// int main()
// {
//     scanf("%d", &n);
//     dfs(1,0);
//     printf("%d\n", nums);
//     for(int i = 1; i <= nums; i++)
//     {
//         for(int j = 1; j <= 10; j++)
//         {
//             printf("%d ", ans[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

const int N = 10010;

int n, m;
int arr[N];
int mars[N];
bool vis[N];
int res = 0;

void dfs(int x)
{
    if(x > n)
    {
        res++;
        if(res == m + 1)
        {
            for(int i = 1; i <= n; i++)
            {
                printf("%d ", arr[i]);
            }
            return ;
        }
        return ;
    }

    for(int i = 1; i <= n; i++)
    {
        if(!res)
        {
            i = mars[x];
        }
        if(!vis[i])
        {
            vis[i] = true;
            arr[x] = i;
            dfs(x + 1);
            vis[i] = false;
            arr[x] = 0;
        }
    }
}

int main()
{
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &mars[i]);
    }
    dfs(1);
    return 0;
}