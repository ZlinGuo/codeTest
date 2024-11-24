#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int a[N];
int b[N];
int c[N];
int n;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        c[i] = a[i] - b[i];
    }

    sort(c + 1, c + n + 1);

    for(int i = n - 1; i >= 1; i--)
    {
        if(c[i] != c[n])
        {
            c[n] += c[i];
            break;
        }
    }
    cout << c[n] << endl;
    return 0;
}
