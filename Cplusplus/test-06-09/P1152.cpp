#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int ans = 0;
    ll n = 0, c = 0;
    cin >> n >> c;
    ll arr[n];
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    ll l = 0, r = n - 1;
    while(l <= r)
    {
        if(arr[r] - arr[l] != c)
        {
            r--;
        }
        if(arr[r] - arr[l] == c)
        {
            ans++;
            r--;
        }
        if(r == l)
        {
            l++;
            r = n - 1;
        }
    }
    cout << ans << endl;
    return 0;
}