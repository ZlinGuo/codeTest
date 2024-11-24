#include <bits/stdc++.h>

using namespace std;

const int N = 30;

long long arr[N][N];
int st[N][N];
int n,m;
int z,l;

int main()
{
    cin >> n >> m >> z >> l;

    // for(int i = 0; i <= n; i++)
    // {
    //     arr[1][i] = 1;
    // }
    // for(int i = 0; i <= m; i++)
    // {
    //     arr[i][1] = 1;
    // }

    arr[0][0] = 1;
    //st[z][l] = st[z - 2][l - 1] = st[z - 2][l + 1] = st[z + 2][l + 1] = st[z + 2][l - 1] = st[z - 1][l + 2] = st[z - 1][l - 2] = st[z + 1][l + 2] = st[z + 1][l - 2] = 1;
    int dz[] = {0,-2,-2,2,2,-1,-1,1,1};
    int dl[] = {0, 1,-1,1,-1,2,-2,2,-2};
    for (int i = 0; i < 9; i++) 
    {
        int nz = z + dz[i];
        int nl = l + dl[i];
        if (nz >= 0 && nz <= n && nl >= 0 && nl <= m) 
        {
            st[nz][nl] = 1;
        }
    }
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if(st[i][j])
            {
                arr[i][j] = 0;
            }
            else
            {
                arr[i][j] = max(arr[i][j - 1] + arr[i - 1][j], arr[i][j]);
            }
        }
    }

    cout << arr[n][m] << endl;
    return 0;
}

