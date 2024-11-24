#include <bits/stdc++.h>

using namespace std;

const int N = 1e7;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int flag = 0;
    if(s1 == s2)
    {
        cout << "0" << endl;
        return 0;
    }
    if((s1 < s2 && s1.size() == s2.size()) || s1.size() < s2.size())
    {
        swap(s1, s2);
        flag = 1;
    }
    int a[N] = {0};
    int b[N] = {0};
    for(int i = 0; i < s1.size(); i++)
    {
        a[i] = s1[s1.size() - 1 - i] - '0';
    }
    for(int i = 0; i < s2.size(); i++)
    {
        b[i] = s2[s2.size() - 1 - i] - '0';
    }
    
    for(int i = 0; i < N; i++)
    {
        a[i] -= b[i];
        if(a[i] < 0)
        {
            a[i] += 10;
            a[i + 1]--;
        }
    }
    int zero = 0;
    if(flag)
    {
        cout << "-";
    }
    for(int i = N - 1; i >= 0; i--)
    {
        if(a[i] != 0)
        {
            zero = 1;
        }
        if(zero)
        {
            cout << a[i];
        }
    }
    return 0;
}