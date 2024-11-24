#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;


ll qmi(ll a, ll b, ll p)
{
    ll ans = 1;
    while(b)
    {
        if(b & 1) 
        {
            ans = (ans % p) * (a % p) % p;
        }
        b >>= 1;
        a = a * a % p;
    }

    return ans;
}
int main()
{
    ll a,b;
    cin >> a >> b;
    cout << qmi(a, b, 1e9 + 7) << endl;
    return 0;
}