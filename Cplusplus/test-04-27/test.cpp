#include <iostream>
using namespace std;
// 1、参数类型不同
int Add(int left, int right)
{
    cout << "int Add(int left, int right)" << endl;
    return left + right;
}
double Add(double left, double right)
{
    cout << "double Add(double left, double right)" << endl;
    return left + right;
}

// 2、参数个数不同
void f()
{
	cout << "f()" << endl;
}

void f(int a)
{
	cout << "f(int a)" << endl;
}

// 3、参数类型顺序不同
void f(int a, char b)
{
	cout << "f(int a,char b)" << endl;
}

void f(char b, int a)
{
	cout << "f(char b, int a)" << endl;
}
void TestRef()
{
   int a = 10;
   int b = 20;
   // int& ra;   // 该条语句编译时会出错
   int& ra = a;
   int& rra = a;
   //ra = b;
   printf("%p %p %p\n", &a, &ra, &rra);
}
int main()
{
    
    Add(10, 20);
    Add(10.1, 20.2);
    
    //调用时不能有歧义, 不然会报错
    f();
    f(10);
    f(10, 'a');
    f('a', 10);  
    
    //返回值不同无法区分, 因此返回值不是重载的条件!
    
    return 0;
}