// #include <bits/stdc++.h>

// using namespace std;

// const int N = 10010;

// int n;
// int arr[N][3];
// int vis[N];
// int ans = 1e9;


// void dfs(int x)
// {
//     if(x > n)
//     {
//         int flag = 0;//判断选没选调料
//         int s = 1,b = 0;
//         for(int i = 1; i <= n; i++)
//         {
            
//             if(vis[i] == 1)
//             {
//                 flag = 1;
//                 s *= arr[i][1];
//                 b += arr[i][2];
//             }
//         }
//         if(flag)
//         {
//             ans = min(ans, abs(s - b));
//         }
        
        
//         return ;
//     }
//     //选
//     vis[x] = 1;
//     dfs(x + 1);
//     vis[x] = 0;

//     //不选
//     vis[x] = 2;
//     dfs(x + 1);
//     vis[x] = 0;
// }

// int main()
// {
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= 2; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     dfs(1);
//     printf("%d\n", ans);
//     return 0;
// }


//#include <bits/stdc++.h>

// using namespace std;

// const int N = 10010;

// int n, a, b;
// int arr[N];
// int ans = 1e9;
// int flag = 0;
// bool st[N] = {false};//存每层楼走没走过

// void dfs(int x, int cnt)//x表示当前楼层, cnt表示按电梯的次数
// {
//     if(cnt >= ans)//剪枝
//         return ;
//     if(x > n || x <= 0) return ;

//     if(x == b)
//     {
//         flag = 1;
//         ans = min(ans,cnt);
//         return ;
//     }
//     st[x] = true;
//     //上
//     if(x + arr[x] <= n && st[x + arr[x]] == false)
//     {
//         st[x + arr[x]] = true;
//         dfs(x + arr[x], ++cnt);
//         st[x + arr[x]] = false;
//     }
//     //下
//     if(x - arr[x] > 0 && st[x - arr[x]] == false)
//     {
//         st[x - arr[x]] = true;
//         dfs(x - arr[x], ++cnt);
//         st[x - arr[x]] = false;
//     }
// }

// int main()
// {
//     scanf("%d%d%d", &n,&a,&b);
//     for(int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     dfs(a, 0);
//     if(flag)
//         printf("%d\n", ans);
//     else
//         printf("-1\n");
//     return 0;
// }



// #include <bits/stdc++.h>

// using namespace std;


// const int N = 25;

// int n,m;
// char g[N][N];
// int ans = 0;
// int dx[] = {0, 1, 0, -1};
// int dy[] = {-1, 0, 1, 0};
// bool st[N][N];
// void dfs(int x, int y)
// {
//     for(int i = 0; i < 4; i++)
//     {
//         int a = x + dx[i];
//         int b = y + dy[i];

//         if(a < 0 || a >= n || b < 0 || b >= m)
//             continue;
//         if(g[a][b] != '.')
//             continue;
//         if(st[a][b])
//             continue;
        
//         st[a][b] = true;
//         ans++;
//         dfs(a, b);
//     }
//     return ;
// }

// int main()
// {
//     scanf("%d%d", &m,&n);
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%s", g[i]);
//     }
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             if(g[i][j] == '@')
//             {
//                 st[i][j] = true;
//                 dfs(i, j);
//             }
//         }
//     }
//     ans++;
//     printf("%d\n", ans);
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// const int N = 110;

// int ans = 0;
// char g[N][N];//地图
// bool st[N][N];//状态
// int n,m;

// int dx[] = {1,1,1,0,0,-1,-1,-1};
// int dy[] = {1,0,-1,1,-1,1,0,-1};

// void dfs(int x, int y)
// {
//     for(int i = 0; i < 8; i++)
//     {
//         int a = x + dx[i];
//         int b = y + dy[i];
//         if(g[a][b] != 'W')  continue;
//         if(a < 0 || a >= n || b < 0 || b >= m)  continue;
//         if(st[a][b]) continue;
        
//         st[a][b] = true;
//         dfs(a, b);
//     }
// }

// int main()
// {
//     scanf("%d%d", &n, &m);
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%s", g[i]);
//     }

//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             if(g[i][j] == 'W' && !st[i][j])
//             {
//                 st[i][j] = true;
//                 dfs(i, j);
//                 ans++;
//             }
//         }
//     }
//     printf("%d\n", ans);
//     return 0;
// }




// #include <bits/stdc++.h>

// using namespace std;


// const int N = 10;

// int n, k;
// int ans = 0;
// char g[N][N];
// bool st[N];

// void dfs(int x, int cnt)//x表示当前在第几行,cnt表示已经下了几枚棋子
// {
//     if(cnt == k)
//     {
//         ans++;
//         return ;
//     }
//     if(x >= n) return;

//     for(int i = 0; i < n; i++)//枚举当前在第几列
//     {
//         if(!st[i] && g[x][i] == '#')
//         {
//             st[i] = true;
//             dfs(x + 1, cnt + 1);
//             st[i] = false;
//         }
//     }
//     dfs(x + 1, cnt);
// }

// int main()
// {
//     while(cin >> n >> k, n > 0 && k > 0)
//     {
//         for(int i = 0; i < n; i++)
//         {
//             scanf("%s", g[i]);
//         }
//         ans = 0;
//         dfs(0, 0);
//         printf("%d\n", ans);
//     }
//     return 0;
// }




#include <bits/stdc++.h>

using namespace std;

const int N = 10;

int n, k;
int arr[N];
int ans = 0;


void dfs(int x, int start, int sum)
{
    if(x > k)
    {
        if(sum == n)
        {
            ans++;
        }
        return ;
    }
    if(sum > n) return ;
    for(int i = start; sum + (k - x + 1) * i  <= n; i++)
    {
        dfs(x + 1, i, sum + i);
    }
}

int main()
{
    scanf("%d%d", &n, &k);
    dfs(1,1,0);
    printf("%d\n", ans);
    return 0;
}