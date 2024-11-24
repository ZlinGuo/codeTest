#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, k = 0;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }

    sort(arr.begin(), arr.end());
    vector<int> a;
    for(int i = 0; i < k; i++)
    {
        a.push_back(arr[i].second);
    }
    sort(a.begin(), a.end());
    for(auto i : a)
    {
        cout << i << " ";
    }
    return 0;
}