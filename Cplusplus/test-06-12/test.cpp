#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int t = 40;
    // while(t--)
    // {
    //     double m = 0.0;
    //     cin >> m;
    //     cout << m / 32.12 << endl;
    // }
    double sum = 0.0;
    for(int i = 0; i < 40; i++)
    {
        double t = 0.0;
        cin >> t;
        sum += t;
        
    }
    cout << sum / 40.0 << endl;
    return 0;
}