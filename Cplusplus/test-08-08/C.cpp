#include <bits/stdc++.h>

using namespace std;

const int N = 40;

int arr[N][N];
int n,m;

int main(){
    cin >> n >> m;
    arr[0][1] = 1;
    for(int i = 1;i <= m;i ++)
    {
        for(int j = 1;j <= n;j ++)
        {
            if(j == 1)
                arr[i][j] = arr[i - 1][n] + arr[i - 1][j + 1];
            else if(j == n)
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][1];
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
        }
    }
    cout << arr[m][1] << endl;
    return 0;
}