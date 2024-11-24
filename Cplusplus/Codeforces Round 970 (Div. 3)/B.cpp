// #include <bits/stdc++.h>

// using namespace std;

// #define endl '\n'
// typedef long long ll;

// ll a,b;

// void solve()
// {

// }

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long
#include <iostream>
#include <cmath>
using namespace std;
 
bool checkMatrix(const string &s, int side) {
    for (int i = 0; i < side; ++i) {
        if (s[i * side] != '1' || s[i * side + side - 1] != '1') return false;
    }
    for (int i = 0; i < side; ++i) {
        if (s[i] != '1' || s[(side - 1) * side + i] != '1') return false;
    }
    for (int i = 1; i < side - 1; ++i) {
        for (int j = 1; j < side - 1; ++j) {
            if (s[i * side + j] != '0') return false;
        }
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int side = sqrt(n);
        if (side * side != n) {
            cout << "No" << endl;
        } else {
            cout << (checkMatrix(s, side) ? "Yes" : "No") << endl;
        }
    }
    return 0;
}