#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

vector<pair<int,int>>p;

void divide(int x)
{
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			int s=0;
			while(x%i==0) x/=i,s++;
			p.push_back({i,s});
		}
	}
	if(x>1){
		p.push_back({x,1});
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	if(n==1){
		cout<<1<<' '<<0<<endl;
		return 0;
	}
	
	bool is_prime=1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			is_prime=0;
			break;
		}
	}
	if(is_prime){
		cout<<n<<' '<<0<<endl;
		return 0;
	}
	
	divide(n);
	int ans=1,cnt=0,tmp=0;
	for(auto i:p){
		ans*=i.first;
		tmp=max(tmp,i.second);
	}
	for(int i=0;i<=21;i++){
		int d=pow(2,i);
		if(tmp<=d){
			cnt=i;
			tmp=d;
			break;
		}
	}
	for(auto i:p){
		if(i.second!=tmp){
			cnt++;
			break;
		}
	}
	cout<<ans<<' '<<cnt<<endl;
	return 0;
}
