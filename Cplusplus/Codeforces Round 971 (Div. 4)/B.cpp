#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

// const int N = 510;
// int n;
// char arr[N][4];

// void solve()
// {
    
//     cin >> n;
    
//     {
//         for(int i = n - 1; i >= 0; i--)
//         {
//             cin >> arr[i][0];
//             cin >> arr[i][1];
//             cin >> arr[i][2];
//             cin >> arr[i][3];
//         }
//     }

//     for(int i = 0; i <=3;i++)
//     {
//         if(arr[i][0] == '#')
//         {
//             cout << 1 <<" ";
//         }
//         if(arr[i][1] == '#')
//         {
//             cout << 2 <<" ";
//         }
//         if(arr[i][2] == '#')
//         {
//             cout << 3 <<" ";
//         }
//         if(arr[i][3] == '#')
//         {
//             cout << 4 <<" ";
//         }
        
//     }
//     cout << endl;
//     memset(arr,0,sizeof(arr));
// }

// int main()
// {
//     ios::sync_with_stdio(false);
// 	cin.tie(0); cout.tie(0);

//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }

void solve()
{
    int n;
        cin >> n;
        vector<int> str(n);
        for (int i = n - 1; i >= 0; --i) {
            string a;
            cin >> a;
            for (int j = 0; j < 4; ++j) 
            {
                if (a[j] == '#') 
                {
                    str[i] = j + 1; 
                    break;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << str[i] << " ";
        }
        cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}