#include <bits/stdc++.h>
#define int long long
#define ULL unsigned long long
#define endl "\n"
#define fi first 
#define se second 
using namespace std;
typedef pair<int,int>PII;
typedef pair<double,double>PDD;
const int N=1e5+10;
int n,m;
int ans = 0,p = 0;
void move(int n,vector<int> &a,vector<int> &b,vector<int> &c){
	if(n == 0 || p == 1){
		return ;
	}//��Ϊ�ݹ�߽�
	move(n - 1,a,c,b);//�ƶ��������ݹ飩
	if(p == 1) return ;//�ƶ���������mʱreturn
	int k = a.back();
	a.pop_back();
	c.push_back(k);//��¼���ݲ���
	ans ++;//�������ƶ�����
	if(ans == m){
		p = 1;
		return ;
	}//�߽��ж�
	move(n - 1,b,a,c);//�ƶ��������ݹ飩
}
void solve(){
	p = 0;
	ans = 0;
	cin>>n>>m;
	vector<int> a,b,c;
	for(int i = n;i >= 1;i --) a.push_back(i);
	move(n,a,b,c);	
	cout<<a.size()<<" ";
	for(auto k : a) cout<<k<<" ";
	cout<<endl;
	cout<<b.size()<<" ";
	for(auto k : b) cout<<k<<" ";
	cout<<endl;
	cout<<c.size()<<" ";
	for(auto k : c) cout<<k<<" ";
	cout<<endl;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	solve();
}
