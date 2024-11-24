#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    string str = "\\\\(@^_^@)//";
    for(int i = 0; i < n; i++)
    {
        if(s.substr(i, 11) == str)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}