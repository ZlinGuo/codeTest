#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

void divide(int m)
{
    for(int i = 2; i * i <= m; i++)
    {
        if(m % i == 0)
        {
            int cnt = 0;
            while(m % i == 0)
            {
                m /= i;
                cnt++;
            }
            cout << i << " " << cnt << endl;
        }
    }
    if(m > 1)
    {
        cout << m << " " << 1 << endl;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        divide(m);
    }
    return 0;
}