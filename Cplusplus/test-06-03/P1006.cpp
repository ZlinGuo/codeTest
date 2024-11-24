#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string str;
    int n = 0, m = 0;
    cin >> n >> m;
    cin >> s;
    cin >> str;

    sort(str.begin(), str.end());

    for(int i = 0; i < n; i++)
    {
        if(!str.empty() && s[i] > str[0])
        {
            cout << str[0];
            i--;
            str.erase(str.begin());
        }
        else
        {
            cout << s[i];
        }
    }
    cout << str;
    return 0;
}