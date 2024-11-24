#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll sum1 = 0;
    ll sum2 = 0;
    int l = 0, r = n - 1;
    int l2 = 0, r2 = 0;
    int flag = 0;

    while(l <= r)
    {
        if(n == 1)
        {
            break;
        }
        if(sum1 < sum2 || sum1 == 0)
        {
            sum1 += arr[l];
            l++;
            l2++;
        }
        else if(sum2 < sum1 || sum2 == 0)
        {
            sum2 += arr[r];
            r--;
            r2++;
        }
        if(sum1 == sum2)
        {
            flag = 1;
            cout << l2 << " " << r2 << endl;
            break;
        }
    }
    
    if(flag == 0)
    {
        cout << "-1" << endl;
    }
    return 0;
}