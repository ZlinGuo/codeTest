#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int arr[1010];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 
    sort(arr, arr + n);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;   
    }
    return 0;
}