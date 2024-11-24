#include <iostream>

using namespace std;

struct A{

 long a1;

 short a2;

 int a3;

 int *a4;

};

int main()
{
    cout << sizeof(A);
    return 0;
}