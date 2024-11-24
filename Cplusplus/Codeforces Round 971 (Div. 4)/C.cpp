#include<bits/stdc++.h>

using namespace std;


#define int long long

#define endl '\n'

void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
       
    int l;
    int cnt;
    
    if(x%k==0)
    {
        l=x/k;
    }
    else
    {
        l=(x/k)+1;
    }
    
    if(y%k==0)
    {
        cnt=y/k;
    }
    else
    {
        cnt=(y/k)+1;
    }
    
    int Min=min(l,cnt);
    int Max=max(l,cnt);
    int ans=Min+Max+(Max-Min);
    if(l>cnt)
    {
        ans--;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }

    
    return 0;
}
