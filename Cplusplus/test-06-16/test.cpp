#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[100010];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    while(m--)
    {
        int l = 0, r = n;
        int x = 0;
        cin >> x;
        while(l < r)
        {
            int mid = (l + r) / 2;
            if(arr[mid] > x)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << n - l << endl;
    }
    return 0;
}