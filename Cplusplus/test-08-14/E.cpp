#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

ll lcm(ll x, ll y)
{
    ll X = x, Y = y;
    while(y != 0)
    {
        ll tmp = x;
        x = y;
        y = tmp % y;
    }

    return X / x * Y;
}

int main()
{
    int T;
    ll a,b;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        ll ans = lcm(a,b);
        cout << ans << endl;
    }
    return 0;
}