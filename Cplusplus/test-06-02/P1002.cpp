#include <bits/stdc++.h>

using namespace std;

long long mem[100];

long long fib(int n)
{
    if(mem[n]) 
        return mem[n];
    if(n == 1)  return 1;
    if(n == 2) return 2;
    else 
        mem[n] = fib(n - 1) + fib(n - 2);
    return mem[n];
    
}

int main()
{
    int n = 0;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}






