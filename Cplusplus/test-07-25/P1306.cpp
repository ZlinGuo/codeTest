#include <bits/stdc++.h>

using namespace std;

const int N = 50;

int n,m;
int arr[N];
int st[N];

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
        st[i] = 1;
    }
    //memset(st, 1, sizeof(st));
    for(int i = 1; i <= m; i++)
    {
        st[arr[i]] = 0;
    }
    for(int i = 1; i <= n - 1; i++)
    {
        if(st[i] == st[i + 1] && st[i] == 0)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    
    for(int i = 3; i <= n; i++)
    {
        if(st[i] != 0)
        {
            st[i] = st[i - 1] + st[i - 2];
        }
        else 
            continue;
    }
    cout << st[n] << endl;
    return 0;
}
