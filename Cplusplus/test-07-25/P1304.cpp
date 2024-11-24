#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 10;

int n, s;
int arr[N];

int main()
{
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + 1 + n);
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(s - arr[i] >= 0)
        {
            s -= arr[i];
            sum++;
        }
        else
        {
            break;
        }
    }
   cout << sum << endl;

    return 0;
}