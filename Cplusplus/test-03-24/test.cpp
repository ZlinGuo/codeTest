// #include <bits/stdc++.h>
// using namespace std;

// const int N = 10010;

// int ans = 0;
// int n;
// int num[N] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
// int arr[N];

// int Sum(int i)
// {
//     int sumFire = 0;
//     if(num[i])
//         return num[i];
//     else
//     {
//         while(i)
//         {
//             sumFire += num[i % 10];
//             i /= 10;
//         }
//         return sumFire;
//     }
// }

// void dfs(int x, int sum)
// {
//     if(sum > n)
//         return ;
//     if(x > 3)
//     {
//         if(arr[1] + arr[2] == arr[3] && sum == n )
//         {
//             ans++;
//         }
//         return ;
//     }
//     for(int i = 0; i <= 1000; i++)
//     {
//         arr[x] = i;
//         dfs(x + 1, sum + Sum(i));
//         arr[x] = 0;//恢复现场
//     }
// }

// int main()
// {
//     scanf("%d", &n);
//     n -= 4;
//     dfs(1, 0);
//     printf("%d\n", ans);
//     return 0;
// }


