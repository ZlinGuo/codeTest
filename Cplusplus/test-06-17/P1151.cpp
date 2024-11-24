#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    int a[500000];
    cin >> n >> s;
    reverse(s.begin(), s.end());

    int pos = s.find(".");
    s.erase(pos, 1);
    int sz = s.size();

    for(int i = 0; i < sz; i++)
    {
        a[i + 1] = s[i] - '0';
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= sz; j++)
        {
            a[j] *= 2;
        }
        for(int j = 1; j <= sz; j++)
        {
            if(a[j] >= 10)
            {
                a[j + 1]++;
                a[j] %= 10;
                
            }
        }
        if(a[sz + 1])
            sz++;
    }

    if(a[pos] >= 5)
    {
        a[pos + 1]++;
    }
    for(int i = pos + 1;i <= sz;i++)//检查进位
	{
		a[i+1] += a[i]/10;
		a[i] %= 10;
	}	
	if(a[sz + 1])//再次检查最高位
   		sz++;	
    for(int i = sz; i >= pos + 1; i--)
    {
        cout << a[i];
    }
    return 0;
}

