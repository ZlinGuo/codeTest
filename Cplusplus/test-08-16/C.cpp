#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

const int mod = 1e9 + 7;
const int N = 2 * 1e5 + 10;

ll f[N];
ll inf[N];

ll qmi(ll a, ll b)
{
    ll ans = 1;
    while(b)
    {
        if(b & 1)
        {
            ans = (ans * a) % mod;
        }
        b >>= 1;
        a = (a * a) % mod;
    }
    return ans;
}

void get_it()
{
    f[0] = inf[0] = 1;
    for(int i = 1; i <= 200000; i++)
    {
        f[i] = (f[i - 1] * i) % mod;
        inf[i] = inf[i - 1] * qmi(i, mod - 2) % mod;
    }
}

ll c(ll a, ll b)
{
    return (f[a] * inf[a - b]) % mod * inf[b] % mod;
}
int main()
{
    get_it();
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        cout << c(a,b)<< endl;
    }

    return 0;
}