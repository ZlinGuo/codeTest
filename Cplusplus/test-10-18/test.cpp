#include <bits/stdc++.h>

using namespace std;

void test_list01()
{
    list<int> lt1 = {1,2,3,4,5,6,7};
    list<int>::iterator it = lt1.begin();
    while(it != lt1.end())
    {
        cout << *it << ' ';
        ++it;
    }
    cout << endl;
    
    for(auto i : lt1)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    test_list01();
    return 0;
}