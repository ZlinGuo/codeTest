// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string a, b, d = "";
//     int c = 0;
//     char s[16] = {'0', '1', '2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

//     cin >> a;
//     cin >> b;
//     if(b == "0")
//     {
//         cout << "0\n0\n0\n0\n";
//         return 0;
//     }

//     for(int i = 0; i < b.size(); i++)
//     {
//         int x = 0;
//         if(b[i] == 'A')
//         {
//             x = 10;
//         }
//         else if(b[i] == 'B')
//         {
//             x = 11;
//         }
//         else if(b[i] == 'C')
//         {
//             x = 12;
//         }
//         else if(b[i] == 'D')
//         {
//             x = 13;
//         }
//         else if(b[i] == 'E')
//         {
//             x = 14;
//         }
//         else if(b[i] == 'F')
//         {
//             x = 15;
//         }
//         else 
//         {
//             x = b[i] - '0';
//         }
//         if(a == "BIN")
//         {
//             if(a=="BIN")c=c*2+x;
//         }
//         else if(a == "OCT")
//             c = c * 8 + x;
//         else if(a == "DEC")
//             c = c * 10 + x;
//         else
//             c = c * 16 + x;
//     }
//     for(int x = c; x > 0; x /= 16)
//         d = s[x % 16] + d;
//     cout << d << endl;
//     d = "";
//     for(int x = c; x > 0; x /= 10)
//         d = s[x % 10] + d;
//     cout << d << endl;
//     d = "";
//     for(int x = c; x > 0; x /= 8)
//         d = s[x % 8] + d;
//     cout << d << endl;
//     d = "";
//     for(int x = c; x > 0; x /= 2)
//         d = s[x % 2] + d;
//     cout << d << endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// long long h,n,a[100010],c[100010];
// bool check(long long x){
// 	long long cnt = 0;
// 	for(int i = 0; i < n; i ++)
//     {
// 		cnt += a[i] * ((x - 1 + c[i]) / c[i]);
// 		if(cnt >= h)return 1;
// 	}
// 	return 0;
// }
// int main(){
// 	cin >> h >> n;
// 	for(int i = 0; i < n; i ++)
//         cin >> a[i];
// 	for(int i = 0; i < n; i ++)
//         cin >> c[i];
// 	long long l = 1, r = 1e12;
// 	while(l < r)
//     {
// 		long long mid = ( l + r) / 2;
// 		if(check(mid))
//             r = mid;
// 		else 
//             l = mid + 1;
// 	}
// 	cout << l << "\n";
// 	return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int m,n0,a0[105],n1,a1[105],n2,a2[105];
int main(){
	cin>>m;
	while(m>0)
    {
		a0[n0] = m % 3;
		n0++;
        m /= 3;
	}
	for(int i = 0, j = 1;i < n0; i++,j *=3){
		if(a0[i] >= 3)
        {
			a0[i+1]++;
			a0[i] -= 3;
		}
		if(a0[i] == 1)
        {
			a2[n2] = j;
            n2++;
		}
		if(a0[i] == 2)
        {
			a0[i] = 0;
            a0[i+1]++;
			a1[n1] = j;
            n1++;
		}
		if(a0[n0] > 0)
            n0++;
	}
	if(n1 == 0)
        cout << "0";
	else for(int i = 0; i < n1; i++)
        cout << a1[i] << " ";
	cout << "\n";
	for(int i = 0;i < n2;i++)
        cout << a2[i] << " ";
	return 0;
}
