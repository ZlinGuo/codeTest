// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     Student(int num = 0)
//     {
//             _num = num;
//     }

//     void Input()
//     {
//         for(int i = 0; i < _num; i++)
//         {
//             cout << "input " << i << " :";
//             cin >> _grades[i];
//         }
//     }

//     Student operator++()
//     {
//         for(int i = 0; i < _num; i++)
//         {
//             if(_grades[i] < 60)
//             {
//                 _grades[i] = 60;
//             }
//             else if(_grades[i] == 60)
//             {
//                 _grades[i] = 61;
//             }
//         }
//         return (*this);
//     }
//     void Output()
//     {
//         for(int i = 0; i < _num; i++)
//         {
//             cout << "output " << i + 1 << " :" << _grades[i] << endl;
//         }
//     }
// private:
//     int _num;
//     int _grades[50];
// };


// int main()
// {
//     puts("Please enter the number of students:");
//     int n = 0;
//     cin >> n;
//     Student d1(n);
//     d1.Input();
//     cout << "----------------" << endl;
//     ++d1;
//     d1.Output();
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

void Swap(int& a, int& b)
{
   int tmp = a;
   a = b;
   b = tmp;
   return ;
}

int main()
{
   //cout << "Hello World!" << endl;

   //cout << "100 " << endl <<"A " << endl << "3.140000" << endl;

   // char a = 0;
   // a = getchar();
   // putchar(a);

   // int a = 0, b = 0;
   // cin >> a >> b;
   // Swap(a, b);
   // cout << a << " " << b << endl;

   // char a = 0;
   // cin >> a;
   // cout << (char)(a - 32) << endl;

   // int n = 0;
   // cin >> n;
   // n *= 10;
   // cout << n / 3 << " " << n % 3 << endl;

   // int a = 0, b = 0, c = 0;
   // cin >> a >> b >> c;
   // cout << a + b + c << " " << a * b * c << " ";
   // printf("%.2lf", (a + b + c) / 3.0);

   // int a = 0;
   // cin >> a;
   int a,b,back_up;
scanf("%d",&a);//读取一个整数 a；
while (a)
{

    printf("%d\n",a%10);
    a=a/10;
}


   return 0;
}