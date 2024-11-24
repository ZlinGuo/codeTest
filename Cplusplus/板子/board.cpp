#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

// --------------------------------------------------

ll qmi1(ll a, ll b) // ������
{
    ll ans = 1; // ��¼��, a������Ϊ����x
    while(b) // ��������ö��b�Ķ�����λ
    {
        if(b & 1) // ö�ٵ�b�Ķ�����λΪ1ʱ, b%1Ϊtureʱ, �����
        {
            ans = ans * a;
        }
        b >>= 1; // b����һλ, �ж���һλ�ǲ���һ, �ȼ���b����2
        a = a * a;  // ��������, a*1 -> a*2
    }

    return ans;
}

ll qmi2(ll a, ll b, ll p) // ������ ȡģ�汾
{
    ll ans = 1; // ��¼��, a������Ϊ����x
    while(b) // ��������ö��b�Ķ�����λ
    {
        if(b & 1) // ö�ٵ�b�Ķ�����λΪ1ʱ, b%1Ϊtureʱ, �����
        {
            //ans = (ans % p) * (a % p) % p; // ��ֹans * a��long long
            ans = ans * a % p;
        }
        b >>= 1; // b����һλ, �ж���һλ�ǲ���һ, �ȼ���b����2
        a = a * a % p;  // ��������, a*1 -> a*2
    }

    return ans;
}

// --------------------------------------------------

// ����� ����
ll c[1000][1000];
const int mod = 1e9 + 7;

void get_it(int n)
{
    c[0][0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == i || j == 0)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % mod;
            }
        }
    }
}

// ��ʽ
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

ll d(ll a, ll b)
{
    return (f[a] * inf[a - b]) % mod * inf[b] % mod;
}

int main1()
{
    get_it(1001);
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        cout << c[a][b] << endl;
    }
    return 0;
}

// -------------------------------------------------------------------

// ����ȡģ
int func()
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
}

// -------------------------------------------------------------------

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);


    return 0;
}