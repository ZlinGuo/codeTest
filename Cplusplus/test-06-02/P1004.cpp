#include <bits/stdc++.h>

using namespace std;


int main()
{
    string S;
    string str;
    int n = 0, m = 0;
    cin >> n >> m;
    cin >> S;
    cin >> str;

    sort(&str[0], &str[m]);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(S[j] > str[i])
            {
                S.insert(j, 1, str[i]);
                break;
            }
        }
        n++;
    }
    cout << S << endl;
    return 0;
}