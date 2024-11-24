#include <bits/stdc++.h>

using namespace std;

int n = 0, x = 0, t = 0;

int main()
{
    cin >> n >> x >> t;
    long long a[n + 1] = {0};
    long long b[n + 1] = {0};

    for(int i = 1; i <= x; i++)
    {
        int y = 0, z = 0;
        cin >> y >> z;
        if(y > n)
        {
            b[1] += y / n;
            y %= n;
        }
        if(y > n - z + 1)
        {
            b[z]++;
            b[1]++;
            b[y - (n - z)]--;
        }
        else
        {
            b[z]++;
            b[z + y]--;
        }
    }
    
    for(int i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + b[i];
    }

    while(t--)
    {
        int i = 0;
        cin >> i;
        cout << a[i] << endl;
    }
    return 0;
}