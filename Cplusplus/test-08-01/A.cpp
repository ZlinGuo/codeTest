#include <bits/stdc++.h>

using namespace std;

const int N = 110;

int arr[N][N];
int st[N][N];
int r;

int main()
{
    cin >> r;
    memset(arr, 0, sizeof(arr));

    for(int i = 1; i <= r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> arr[i][j];
        }
    }

    st[1][1] = arr[1][1];
    for(int i = 2; i <= r; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            st[i][j] = max(st[i - 1][j], st[i - 1][j - 1]) + arr[i][j];
        }
    }

    int ans = 0;

    for(int i = 1; i <= r; i++)
    {
        ans = max(ans, st[r][i]);
    }

    cout << ans << endl;
    return 0;
}