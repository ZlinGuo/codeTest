#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;


const int N = 1e7 + 10;
const int M = 4e7 + 10;

int a[N];
int primes[M], cnt = 0;
bool not_prime[M];

void get_primes(ll g)
{
    not_prime[1] = true;
    for(int i = 2; i <= g; i++)
    {
        if(!not_prime[i])
        {
            primes[++cnt] = i;
        }
        for(int j = 1; j <= cnt && i * primes[j] <= g; j++)
        {
            not_prime[primes[j] * i] = true;
            if(i % primes[j] == 0)
            {
                break;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    int maxn = 0;
    for(int i = 1; i <= T; i++)
    {
        cin >> a[i];
        maxn = max(maxn, a[i]);
    }
    get_primes(maxn);
    for(int i = 1; i <= T; i++)
    {
        if(not_prime[a[i]])
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}