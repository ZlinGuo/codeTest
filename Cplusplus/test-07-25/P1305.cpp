#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 10;

int n,k,t;
int arr[N];
int ans = 0;

int main()
{
    cin >> n >> k >> t;
    for(int i = 1; i <= k; i++)
    {
        cin >> arr[i];
    }
    int m = arr[1];

    for(int i = 2; i <= k; i++)
    {
        if(arr[i] - m + 1 <= t)
        {
            ans++;
        }
        else 
        {
            m = arr[i];
        }
    }
    cout << ans << endl;
    return 0;
}