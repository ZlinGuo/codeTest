#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[10010];

bool check(int x)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > x)
        {
            sum += arr[i] - x;
        }
    }
    return sum >= m;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int l = 0, r = 2e5;
    while(l < r)
    {
        int mid = (l + r + 1) / 2;
        if(check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << r << endl;
    return 0;
}