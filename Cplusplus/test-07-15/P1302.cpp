// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n + 1];
//     int b[n + 1];
//     int ans = INT_MIN;
//     //int arr[n + 1];
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//         //cout << a[i] << " ";
//     }
//     //cout << endl;
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> b[i];
//         //cout << b[i] << " ";
//         //arr[i] = a[i] - b[i];
//     }
//     //cout << endl;
    
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = j + 1; j <= n; j++)
//         {
//             if(j == i)
//             {
//                 continue;
//             }
//             if(a[i] + b[j] > a[j] + b[i])
//             {
//                 ans = max(ans, a[i] + a[j] - b[i] - b[j]);
//                 //cout << ans << endl;
//             }
//         }
//     }
//     cout << ans;
//     return 0;
// }
#include <iostream>
#include <algorithm> // 包含 std::sort 和 std::max

using namespace std;

const int MAXN = 100001; // 假设最大 n 的值为 100000

int a[MAXN];
int b[MAXN];
int diff[MAXN];
int indices[MAXN];

// 自定义比较函数
bool compare(int i, int j) {
    return diff[i] > diff[j];
}

int main() {
    int n;
    cin >> n;

    // 读取数组 a 和 b
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        diff[i] = a[i] - b[i]; // 计算 a[i] - b[i]
        indices[i] = i; // 初始化索引数组
    }

    // 对索引数组进行排序，根据 diff 的值降序排列
    sort(indices + 1, indices + n + 1, compare);

    // 计算最大差值
    int ans = INT_MIN;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            ans = max(ans, a[indices[i]] + a[indices[j]] - b[indices[j]] - b[indices[i]]);
        }
    }

    // 输出结果
    cout << ans << endl;

    return 0;
}
