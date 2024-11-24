// #include <bits/stdc++.h>

// using namespace std;

// class Calculate
// {
// public:
//     static void Add()
//     {
//         cout << "Please enter two numbers to add:" << endl;
//         double n, m;
//         cin >> n >> m;
//         cout << "The result is: " << n + m << endl;
//         return ;
//     }
//     static void Sub()
//     {
//         cout << "Please enter a number to calculate the absolute:\n";
//         double n, m;
//         cin >> n >> m;
//         cout << "The result is: " << n - m<< endl;
//         return ;
//     }
//     static void Mul()
//     {
//         cout << "Please enter a number to calculate the multiplication:\n";
//         double n, m;
//         cin >> n >> m;
//         cout << "The result is: " << n * m<< endl;
//         return ;
//     }
//     static void Div()
//     {
//         cout << "Please enter a number to calculate the division :\n";
//         double n, m;
//         cin >> n >> m;
//         cout << "The result is: " << n / m<< endl;
//         return ;
//     }
//     static void Abs()
//     {
//         cout << "Please enter a number to calculate the absolute value:\n";
//         double n;
//         cin >> n;
//         cout << "The result is: " << abs(n)<< endl;
//         return ;
//     }
//     static void Squ()
//     {
//         cout << "Please enter a number to calculate the square :\n";
//         double n;
//         cin >> n;
//         cout << "The result is: " << sqrt(n)<< endl;
//         return ;
//     }

// };

// int main()
// {
//     cout << "--------For addition calculation, please enter: 1-------\n--------For subtraction calculation, please enter: 2-------\n--------For multiplication calculation, please enter: 3-------\n--------For division calculation, please enter: 4-------\n--------For absolute value calculation, please enter: 5-------\n--------For square root calculation, please enter: 6-------\n--------To exit the system, please enter: 7-----\n";
    
    
//     while(1)
//     {
//         int n;
//         cout << "Please enter your choice:\n";
//         cin >> n;
//         if(n == 1) //¼Ó
//         {
//             Calculate::Add();
//         }
//         if(n == 2)
//         {
//             Calculate::Sub();
//         }
//         if(n == 3)
//         {
//             Calculate::Mul();
//         }
//         if(n == 4)
//         {
//             Calculate::Div();
//         }
//         if(n == 5)
//         {
//             Calculate::Abs();
//         }
//         if(n == 6)
//         {
//             Calculate::Squ();
//         }
//         if(n == 7)
//         {
//             break;
//         }
//     }

//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// class Swim
// {
// public:
//     Swim(double r = 0)
//     {
//         _r = r;
//     }
//     void Cal()
//     {
//         double p =3.14159;
//         double f,c;
//         cout << "Fencing Cost is $" << 35 * 2 * p * (_r + 3) << endl;
//         cout << "Concrete Cost is $" << 20 * p * (((_r + 3) * (_r + 3)) - _r * _r) << endl;
//     }
// private:
//     double _r;
// };

// int main()
// {   
//     cout << "Please enter the value of the radius:\n";
//     double n;
//     cin >> n;
//     Swim t(n);
//     t.Cal();
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// template<class L>

// class st
// {
// public:
//     st(L a , L b)
//     {
//         _a = a;
//         _b = b;
//     }
    
//     void Max()
//     {
//         cout << "the max is : " << (_a > _b ? _a : _b) << endl; 
//     }
//     void Min()
//     {
//         cout << "the min is : " << (_a < _b ? _a : _b) << endl;
//     }
// private:
//     L _a;
//     L _b;
// };

// int main()
// {
//     cout << "Please enter two integers:\n";
//     int m, n;
//     cin >> m >> n;
//     st t1(m, n);
//     t1.Max();
//     t1.Min();
//     cout << "Please enter two floating point numbers:\n";
//     double j,k;
//     cin >> j >>k;
//     st t2(j,k);
//     t2.Max();
//     t2.Min();
//     cout << "Please enter two characters:\n";
//     char o,i;
//     cin >> o >> i;
//     st t3(o, i);
//     t3.Max();
//     t3.Min();

//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// class Str {
// 	public:
// 		void init() {
// 			s = "Hello world!";
// 		}
// 		void copy(Str a) {
// 			s = a.s;
// 		}
// 		void output() {
// 			cout << s << endl;
// 		}
// 	private:
// 		string s;
// };

// int main() {
// 	Str ob1, ob2;
// 	ob1.init();
// 	ob2.copy(ob1);
// 	ob1.output();
// 	ob2.output();
// 	return 0;
// }



// #include <bits/stdc++.h>

// using namespace std;

// class Student
// {
//     public:
//         Student(string s, double source)
//         {
//             _s = s;
//             _source = source;
//         }
//         friend void Max(Student* stu);

//         bool operator <(const Student& other) const{
//             return _source < other._source;
//         }
//         bool operator >(const Student& other) const{
//             return _source > other._source;
//         }
//     private:
//         string _s;
//         double _source;
// };


// void Max(Student* stu)
// {
//     sort(stu, stu + 5);
//     cout << "Max score:" << (stu + 4)->_source << endl;
//     cout << "His or her student number is:" << (stu + 4)->_s << endl;
// }

// int main()
// {
//     Student t[5] = {{"10010", 78.9}, {"10011", 91.2}, {"10012", 75.1}, {"10013", 80.6}, {"10014", 85.4}};
//     Max(t);
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;

// class Peaple
// {
//     public:
//         Peaple(int a, int h, int w)
//         {
//             _a = a;
//             _h = h;
//             _w = w;
//         }
//         void Eatting()
//         {
//             _w++;
//         }
//         void Sporting()
//         {
//             _h++;
//         }
//         void Sleeping()
//         {
//             _a++;
//             _h++;
//             _w++;
//         }
//         void Show()
//         {
//             cout << "Age:" << _a << "years old\n";
//             cout << "Height:" << _h << "cm\n";
//             cout << "Weight:"<< _w << "jin\n";
//         }
//     protected:
//         int _a;
//         int _h;
//         int _w;
// };

// void Print()
// {
//     cout << "Number of people:3\n";
// }
// int main()
// {
//     Peaple st[3] = {{8,120,60}, {14,156,78}, {18,170,110}};
//     int num = 3;
//     st[0].Sleeping();
//     st[0].Sporting();
//     st[0].Eatting();
//     cout << "Number1:" << endl;
//     st[0].Show();

//     st[1].Sleeping();
//     st[1].Sporting();
//     st[1].Eatting();
//     cout << "Number2:" << endl;
//     st[1].Show();

//     st[2].Sleeping();
//     st[2].Sporting();
//     st[2].Eatting();
//     cout << "Number3:" << endl;
//     st[2].Show();


//     Print();
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// class Time
// {
//     public:
//         Time(int h = 0, int m = 0, int s = 0)
//         {
//             _h = h;
//             _m = m; 
//             _s = s;
//         }
    
//         Time operator + (Time& y)
//         {
//             Time t;
//             this->_s += y._s;
//             this->_m += y._m;
//             this->_h += y._h;

//             int tmp = 0;

//             tmp = this->_s / 60;
//             this->_s = this->_s % 60;

//             this->_m += tmp;

//             tmp = this->_m / 60;
//             this->_m = this->_m % 60;

//             this->_h += tmp;

//             t._h = this->_h;
//             t._m = this->_m;
//             t._s = this->_s;
//             return (t);
//         }

//         void Print()
//         {
//             cout << _h << ":" << _m << ":" << _s << endl;
//         }
//     private:
//         int _h;
//         int _m;
//         int _s;
// };


// int main()
// {
//     int h,m,s;
//     puts("Please enter the first time:");
//     cin >> h >> m >> s;
//     Time t1(h, m, s);
//     puts("Please enter the second time:");
//     cin >> h >> m>> s;
//     Time t2(h, m, s);
//     puts("The sum of the two times is:");
//     Time t3 = t1 + t2;
//     t3.Print();
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// class Complex
// {
//     public:
//         void Input()
//         {
//             cin >> _real >> _imag;
//         }
//         friend istream &operator>>(istream &input, Complex &t);
//         friend ostream &operator<<(ostream &output, Complex &t);
//         friend Complex operator+(Complex &x, Complex &y);
//         friend Complex operator+(Complex &x, double y);
//         friend Complex operator+(double y, Complex &x);
//     private:
//         double _real;
//         double _imag;
// };
// Complex operator+(Complex &x, Complex &y)
// {
//     Complex tmp;
//     tmp._real = x._real + y._real;
//     tmp._imag = x._imag + y._imag;
//     return tmp;
// }

// Complex operator+(Complex &x, double y)
// {
//     Complex tmp;
//     tmp._real + x._real + y;
//     tmp._imag = x._imag;
//     return tmp;
// }

// Complex operator+(double y, Complex &x)
// {
//     Complex tmp;
//     tmp._real + x._real + y;
//     tmp._imag = x._imag;
//     return tmp;
// }

// istream &operator>>(istream &input, Complex &t)
// {
//     cin >> t._real >> t._imag;
//     return input;
// }

// ostream &operator<<(ostream &output, Complex &t)
// {
//     if(t._imag > 0)
//     {
//         cout << "(" << t._real << "+" << t._imag << "i" << ")" << endl;
//     }
//     if(t._imag < 0)
//     {
//         cout << "(" << t._real << t._imag <<"i" << ")" << endl;
//     }
//     if(t._imag == 0)
//     {
//         cout << "(" << t._real << ")" << endl;
//     }
//     return output;
// }
// int main()
// {
//     Complex t1, t2, ans;
//     puts("Input real part and imaginary part of complex number:");
//     t1.Input();
//     puts("Input real part and imaginary part of complex number:");
//     t2.Input();
//     double m;
//     puts("Input a real number:");
//     cin >> m;
//     ans = t1 +t2;
//     cout << "c1 + c2 = " << ans;
//     ans = m + t1;
//     cout << "i + c1 = " << ans;
//     ans = t1 + m;
//     cout << "c1 + i = " << ans;
//     return 0;
// }


#include <iostream>

using namespace std;

template<typename numtype>

class Compare

 {
    public:

        Compare(numtype a,numtype b)

        {
            x=a;y=b;
        }

   numtype max()

    {
        return (x>y)?x:y;
    }

   numtype min()

    {
        return (x<y)?x:y;
    }

  private:

    numtype x,y;

 };

int main()

{
    int a,b;

    cout<<"Please enter two integers:"<<endl;

    cin>>a>>b; 

    Compare<int> cmp1(a,b);

    cout<<cmp1.max()<<" is the Maximum of two inteder numbers."<<endl;

    cout<<cmp1.min()<<" is the Minimum of two inteder numbers."<<endl<<endl;

    float c,d;

    cout<<"Please enter two float type data:"<<endl;

    cin>>c>>d;

    Compare<float> cmp2(c,d);

    cout<<cmp2.max()<<" is the Maximum of two float numbers."<<endl;

    cout<<cmp2.min()<<" is the Minimum of two float numbers."<<endl<<endl;

    char e,f;

    cout<<"Please enter two characters:"<<endl;

    cin>>e>>f;

    Compare<char> cmp3(e,f);

    cout<<cmp3.max()<<" is the Maximum of two characters."<<endl;

    cout<<cmp3.min()<<" is the Minimum of two characters."<<endl;

    return 0;

}