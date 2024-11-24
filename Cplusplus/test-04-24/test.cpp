#include <iostream>
using namespace std;

void Func(int a, int b = 20, int c = 30)
{
	cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}

int main()
{
    //Func();//此时未给a缺省值, 必须要给它传一个参数, 不然就会报错
    Func(1);
    Func(1,2);
    Func(1,2,3);
    return 0;
}