#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;

void primes(ll g)
{
    if(g == 1)
    {
        cout << "No" << endl;
        return ;
    }
    else if(g == 2 || g == 3 || g == 5)
    {
        cout << "Yes" << endl;
        return ;
    }
    else if(n % 2 == 0 || n % 3 == 0)
    {
        cout << "No" << endl;
        return ;
    }
    else
    {
        for(ll i = 5; i * i <= n; i += 6)
        {
            if(n % i == 0 || n % (i + 2) == 0)
            {
                cout << "No" << endl;
                return ;
            }
        }
    }
    cout << "Yes" << endl;
    return ;
}

int main()
{
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> n;
        primes(n);
    }
    return 0;
}