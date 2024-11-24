#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

const int N = 1000010;

int n;
int arr[1000010];

int gcd(int x, int y)
{
    if(y > x)
    {
        swap(x,y);
    }
    while(y != 0)
    {
        int tmp = x;
        x = y;
        y = tmp % y;
    }
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[1];
    if(n == 1)
    {
        cout << ans << endl;
        return 0;
    }
    else
    {
        ans = gcd(ans, arr[2]);
        for(int i = 3; i <= n; i++)
        {
            ans = gcd(ans, arr[i]);
        }
    }
    cout << ans << endl;
    return 0;
}