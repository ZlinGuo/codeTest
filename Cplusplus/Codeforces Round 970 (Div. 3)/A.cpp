#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

ll a,b;
void solve(){
    cin >> a >> b;
    if(a != 0)
    {
        if((a == b*2) || ((b == 0 && a != 0) && a % 2 ==0) || (b % 2 == 0 && (b * 2 - a) % 2 == 0) || (a - b * 2) % 2 == 0)
        cout << "YES" << endl;
        else
        cout << "NO" << endl; 
    }
    if(a == 0)
    {
        if(b % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}