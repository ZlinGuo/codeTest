#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    int days[200010];
    int arr[200010];
    for(int i = 0; i < n; i++)
    {
        cin >> days[i];
        arr[i] = days[i];
    }
    sort(arr, arr + n);
    int ans[k];
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == days[j])
            {
                // cout << j + 1 << " ";
                ans[i] = j + 1;
                break;
            }
        }
    }
    sort(ans, ans + k);
    cout << endl;
    for(int i = 0;i < k; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}