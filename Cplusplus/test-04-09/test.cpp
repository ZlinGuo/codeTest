// #include <bits/stdc++.h>

// using namespace std;

// const int N = 110;

// int n;
// int g[N][N];
// int dx[] = {1, 1};
// int dy[] = {0, 1};
// int ans = 0;

// void dfs(int x, int y, int sum)
// {
    
//     if(x > n || y > x || y > n) return ;
//     if(sum > ans)
//     {
//         ans = sum;
//     }
//     for(int i = 0; i < 2; i++)
//     {
//         int a = x + dx[i];
//         int b = y + dy[i];
//         dfs(a,b, sum + g[a][b]);
//         return ;
//     }
// }

// int main()
// {
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             scanf("%d", &g[i][j]);
//         }
//     }
//     dfs(1, 1, g[1][1]);
//     printf("%d\n", ans);
//     return 0;
// }



// #include <bits/stdc++.h>

// using namespace std;

// const int N = 50;

// int n;
// int mem[N];
// int dfs(int x)
// {
// 	if(mem[x]) return mem[x];

//     int sum = 0;
// 	if(x == 1)
// 		sum = 1;
// 	else if(x == 2)
// 		sum = 2;
// 	else
// 		sum = dfs(x - 1) + dfs(x - 2);

//     mem[x] = sum;
		
// 	return mem[x];
// }
// int main()
// {
// 	cin >> n;
// 	int ans = dfs(n);
// 	cout << ans;
// 	return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// const int N = 1010;

// int cost[N];

// int dfs(int x, int n)
// {
// 	if(x > n) return 0;

//     else return min(dfs(x + 1, n) + cost[x], dfs(x + 2, n) + cost[x]);

// }

// int main()
// {
//     cost[0] = 0;
//     memset(cost, -1, sizeof(cost));
// 	int i = 2;
// 	cin >> cost[1];
// 	while(getchar() == ',')
// 	{
// 		cin >> cost[i];
// 		i++;
// 	}

// 	int n = 0;
//     for(int i = 1; i <= N; i++)
//     {
//         if(cost[i] != -1)
//             n++;
//     }
//     n--;

// 	int ret1 = dfs(1, n);
//     int ret2 = dfs(0, n);
 
// 	printf("%d\n", min(ret1, ret2) + 1);

// 	return 0;
// }



//摘花生

// #include <bits/stdc++.h>

// using namespace std;

// const int N = 110;

// int t,r,c;
// int g[N][N];
// int mem[N][N];

// int dx[] = {0,1};
// int dy[] = {1,0};

// int dfs(int x, int y)
// {
//     if(mem[x][y]) return mem[x][y];

//     int sum = 0;
// 	if(x > r || y > c)
// 		return 0; 

// 	sum = max(dfs(x, y +1),dfs(x+1,y)) + g[x][y];

//     mem[x][y] = sum;
//     return sum;
// }

// int main()
// {
// 	scanf("%d", &t);
// 	while(t--)
// 	{
//         scanf("%d%d", &r, &c);
// 		for(int i = 1; i <= r; i++)
// 		{
// 			for(int j = 1; j <= c; j++)
// 			{
// 				scanf("%d", &g[i][j]);
// 			}
// 		}
// 		long long ret = dfs(1,1);
// 		printf("%lld\n", ret);
//         memset(mem,0,sizeof(mem));
//         memset(g,0,sizeof(g));
// 	}
// 	return 0;
//  } 




// #include <bits/stdc++.h>

// using namespace std;

// const int N = 1010;

// int r;
// int g[N][N];
// int mem[N][N];
// int f[N][N];

// int dfs(int x, int y)//记忆化数组优化
// {
//     if(mem[x][y])   return mem[x][y];

//     int sum = 0;
//     if(y > x || x > r || y > r)
//         sum = 0;
//     else
//         sum = max(dfs(x + 1, y), dfs(x + 1, y + 1)) + g[x][y];

//     mem[x][y] = sum;
//     return sum;
// }

// int main()
// {
//     scanf("%d", &r);
//     for(int i = 1; i <= r; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             scanf("%d", &g[i][j]);
//         }
//     }

//     int ret = dfs(1,1);

//     for(int i = r; i >= 1; i--)
//     {
//         for(int j = 1; j <= r; j++)
//         {
//             f[i][j] = max(f[i + 1][j], f[i + 1][j + 1]) + g[i][j];
//         } 
//     }
    
//     printf("%d\n",f[1][1]);
//     return 0;
// }



#include <bits/stdc++.h>

using namespace std;

const int N = 1010;

int n,v;
int m[N],w[N];
int mem[N][N];

int dfs(int x, int spV)
{
    if(mem[x][spV])
    {
        return mem[x][spV];
    }

    int sum = 0;
    if(x > n)
    {
        sum = 0;
    }
    else if(spV < m[x])
    {
        sum = dfs(x + 1, spV);
    }
    else if(spV >= m[x])
    {
        sum = max(dfs(x + 1, spV), dfs(x + 1, spV - m[x]) + w[x]);
    }

    mem[x][spV] = sum;
    return sum;
}

int main()
{
    scanf("%d%d", & n, &v);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d%d", &m[i], &w[i]);
    }
     
    int ret  = dfs(1,v);

    printf("%d\n", ret);
    return 0;
}