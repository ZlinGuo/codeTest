#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;

int e[N], ne[N], idx, head;

void add_head(int x)
{
    e[idx] = x;
    ne[idx] = head;
    head = idx++;
}

void remove(int k)
{
    ne[k] = ne[ne[k]];
}

void add_k(int k, int x)
{
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx++;
}

int main()
{
    idx = 0;
    head = -1;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        char s[2];
        cin >> s;
        if(s[0] == 'H')
        {
            int x;
            cin >> x;
            add_head(x);
        }
        else if(s[0] == 'D')
        {
            int k;
            cin >> k;
            if(k == 0)
            {
                head = ne[head];
            }
            else
            {
                remove(k - 1);
            }
            
        }
        else
        {
            int k,x;
            cin >> k >> x;
            add_k(k - 1,x);
        }

    }
    for(int i = head; i != -1; i = ne[i])
        {
            cout << e[i] << ' ';
        }
    return 0;
}