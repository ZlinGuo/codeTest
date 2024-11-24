#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

ll c[1010][1010];
const int mod = 1e9 + 7;

void comb(int n)
{
    c[0][0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == i || j == 0)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
            }
        }
    }
}

int main()
{
    comb(1001);
    int T = 0;
    cin >> T;
    while(T--)
    {
        int a,b;
        cin >> a >> b;
        cout << c[a][b] << endl;
    }
    return 0;
}