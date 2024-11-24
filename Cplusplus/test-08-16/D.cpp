#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

int main()
{
    string str;
    ll m;
    cin >> str >> m;
    ll ans = 0;
    for(int i = 0; str[i]; i++)
    {
        ans = (ans * 10 + str[i] - '0') % m;
    }
    cout << ans << endl;
    return 0;
}