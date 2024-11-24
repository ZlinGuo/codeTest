#include <bits/stdc++.h>

using namespace std;

// string b = "";
// char zh[2] = {'0', '1'};
// long long n;

// void func(int m)
// {
    
//     for(long long i = m; i > 0; i /= 2)
//     {
//         b = zh[i % 2] + b;
//     }
//     return ;
// }
// int main()
// {
//     int o = 0;
//     cin >> o;
//     if(o == 0)
//     {
//         cout << "0" << endl;
//         return 0;
//     }
//     func(o);
//     long long num_0 = 0, num_1 = 0;
//     for(long long i = 0; i < (long long)b.size(); i++)
//     {
//         if(b[i] == '0')
//         {
//             num_0++;
//         }
//         else
//         {
//             num_1++;
//         }
//     } 
//     if(num_0 > num_1)
//     {
//         cout << "0" << endl;
//         return 0;
//     }
//     n = o + 1;
//     while(num_0 <= num_1)
//     {
//         num_0 = num_1 = 0;
//         b = "";
//         //string s = to_string(l);
//         func(n);
//         for(long long i = 0; i < (long long)b.size(); i++)
//         {
//             if(b[i] == '0')
//             {
//                 num_0++;
//             }
//             else
//             {
//                 num_1++;
//             }
//         } 
//         if(num_0 > num_1)
//         {
//             cout << n - o << endl;
//             return 0;
//         }
//         n++;
//     }
    
//     return 0;
// }

const int N=1e6+10;
int a[N];
	
int main()
{
    int n;
	cin>>n;
	vector<int> a;
	int nn = n;
	int x = 0,y = 0;
	while(nn > 0)
    {
		int k = nn % 2;
		a.push_back(k);
		if(k == 0) x ++;
		else y ++;
		nn /= 2;
	}
	if(x > y){
		cout<<"0"<<endl;
		return 0;
	}
	int len = a.size();
	for(int i = 0;i < len;i ++){
		if(a[i] == 0) continue;
		else{
			int j = i;
			while(j < len && a[j] == 1){
				a[j] = 0;
				j ++;
			} 
			if(j == a.size()) a.push_back(1),len ++;
			else a[j] = 1;
			int x = 0,y = 0;
			for(int k = 0;k < len;k ++){
				if(a[k] == 0) x ++;
				else y ++;
			}
			if(x > y) break;
		}
	}
	int ans = 0;
	for(int i = 0;i < len;i ++){
		if(a[i] == 1) ans += pow(2,i);
	}
	ans -= n;
	cout<<ans<<endl;
    return 0;
}