#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t = 0;
    cin >> t;
    while(t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n + 1);
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> a(n + 1);
        a[0] = 0;
        a[1] = 1;
        for(int i = 2; i < n; i++)
        {
            if(arr[i + 1] - arr[i] < arr[i] - arr[i - 1])
            {
                a[i] = a[i - 1] + 1;
            }
            else 
            {
                a[i] = a[i - 1] + arr[i + 1] - arr[i];
            }
        }
        
        vector<ll> b(n + 1);
        b[n] = 0;
        b[n - 1] = 1;
        for(int i = n - 2; i >= 1; i--)
        {
            if(arr[i + 1] - arr[i] <= arr[i + 2] - arr[i + 1])
            {
                b[i] = b[i + 1] + 1;
            }
            else
            {
                b[i] = b[i + 1] + arr[i + 1] - arr[i];
            }
        }
        int m;
        cin >> m;
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            if(x >= y)
            {
                cout << b[y] - b[x] << endl;
            }
            else
            {
                cout << abs(a[y - 1] - a[x - 1]) << endl;
            }
        }

    }
    return 0;
}