#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, x = 0, t = 0;
    cin >> n >> x >> t;
    long long a[n + 1] = {0};
    long long b[n + 1] = {0};

    for(int i = 1; i <= x; i++)
    {
        int y = 0, z = 0;
        cin >> y >> z;
        if(y > n)
        {
            a[1] += y / n;
            y %= n;
        }
        if(y > n - z + 1)
        {
            a[z]++;
            a[1]++;
            a[y - (n - z)]--;
        }
        else
        {
            a[z]++;
            a[z + y]--;
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }

    while(t--)
    {
        int q = 0;
        cin >> q;
        cout << b[q] << endl;
    }
    return 0;
}