#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1e5 + 10;

int n;
int a[N], q[N];
 
int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++) 
    {
        cin >> a[i];
    }

    q[0] = -2e9;
    int ans = 0;
    for (int i = 0; i < n; i ++)
    {
        int l = 0, r = ans;
        while (l < r)
        {
            int mid = l + r + 1 >> 1;
            if (q[mid] < a[i]) 
            {
                l = mid;
            } 
            else 
            {
                r = mid - 1;
            } 
        }

        ans = max(ans, r + 1);
        q[r + 1] = a[i];
    }
    
    cout << ans << endl;
    
    return 0;
}