#include <bits/stdc++.h>

using namespace std;

int v, n;
int ans = 0, tmp = 0;
int arr[30];
int st[30];

int box(int x)
{
    if(x > n)
    {
        for(int i = 1; i <= n; i++)
        {
            if(st[i] == 1 && (tmp > arr[i] || tmp == arr[i]))
            {
                tmp -= arr[i];
                ans = min(ans,tmp);
            }
        }
        return 0;
    }

    st[x] = 1;
    box(x + 1);
    st[x] = 0;

    tmp = v;

    st[x] = 2;
    box(x + 1);
    st[x] = 0;

    
    return 0;
}

int main()
{
    cin >> v >> n;
    ans = v;
    tmp = v;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    box(1);
    cout << ans << endl;
    return 0;
}