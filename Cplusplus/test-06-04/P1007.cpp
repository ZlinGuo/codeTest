#include <bits/stdc++.h>

using namespace std;


int main()
{
    set<int> st;
    int t = 0; 
    int n = 0;
    int arr[100010];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for(int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    t = st.size();
    cout << t << endl;

    for(auto tmp = st.begin(); tmp != st.end(); tmp++)
    {
        cout << *tmp << " ";
    }
    return 0;
}