#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n;
    long long arr[n + 1];
    arr[0] = 0;
    long long sum[n + 1];
    sum [0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sum[1] = arr[1];
    cin >> t;
    int l1,r1,l2,r2;
    for(int i = 2; i <= n; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }
    while(t--)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        if(sum[r1] - sum[l1 - 1] > sum[r2] - sum[l2 -1])
        {
            cout << "kaorouxianren" << endl;
        }
        else if(sum[r1] - sum[l1 -1] < sum[r2] - sum[l2 - 1])
        {
            cout << "laopaixuanshou" << endl;
        }
        else
        {
            cout << "draw" << endl;
        }
    }
    return 0;
}