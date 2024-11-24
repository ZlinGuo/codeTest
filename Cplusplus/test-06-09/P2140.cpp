#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
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
    for(int i = 0; i < N;i ++)
    {
        
    }
    return 0;
}