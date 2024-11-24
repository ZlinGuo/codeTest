#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a[2334] = {0};
    int b[2334] = {0};
    for(int i = 0; i < s1.size(); i++)
    {
        a[i] = s1[s1.size() - 1 - i] - '0';
    }
    for(int i = 0; i < s2.size(); i++)
    {
        b[i] = s2[s2.size() - 1 - i] - '0';
    }
    for(int i = 0; i < 2334; i++)
    {
        a[i] += b[i];
        if(a[i] >= 10)
        {
            a[i] %= 10;
            a[i + 1]++;
        }
    }
    int zero = 0;
    for(int i = 2333; i >= 0; i--)
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