// #include <bits/stdc++.h>

// using namespace std;

// bool cmp(int x, int y)
// {
//     return x > y;
// }

// int main()
// {
// //     // double f;
// //     // cin >> f;
// //     // double c = 5 * (f - 32) / 9.0;
// //     // printf("Celsius=%.2lf\n", c);

// //     // double sum = 0.0;
// //     // int n;
// //     // cin >> n;
// //     // for(float i = 1.0; i <= n; i++)
// //     // {
// //     //     sum += 1.0 / i;
// //     // }
// //     // printf("n=%d,sum=%.7f\n", n, sum);


//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n ; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr, arr + n, cmp);
//     for(int i = 0; i < n - 1; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << arr[n - 1] << endl;
//     return 0;
// }

// // float dist(float x1, float y1, float x2, float y2)
// // {
// //     return sqrt(((y2 - y1) *(y2 - y1) + (x2 - x1) * (x2 - x1)));
// // }

// // int  main(){
// //         float  xs,ys,xe,ye,d;
// //         scanf("%f%f",&xs,&ys);
// //         scanf("%f%f",&xe,&ye);
// //         d=dist(xs,ys,xe,ye);
// //         printf("Distance=%.2f",d);
// //         return  0;
// // }


// #include <bits/stdc++.h>

// using namespace std;

// class Box
// {
//     public:
//         void Print()
//         {
//             cout << "box width:" << width << " height:" << height << endl;
//         }
//         double width;
//         double height;
// };

// class ColoredBox: public Box
// {
//     public:
//         void Print()
//         {
//             cout << "coloredbox width:" << width << " height:" << height << " color:";
//             printf("%d,%d,%d\n", arr[0], arr[1], arr[2]);
//         }
//         int arr[3];
// };

// int main()
// {
//     //puts("Please enter the width and height of box:");
//     ColoredBox t2;
//     //cin >> t2.width >> t2.height;
//     puts("Please enter the width, height and color of coloredbox:");
//     cin >>t2.width >> t2.height >> t2.arr[0] >> t2.arr[1] >> t2.arr[2];
//     t2.Print();
//     t2.Box::Print();
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

class MyArray
{
    public:
        MyArray()
        {
            cout << "Myarray initialize..." << endl;
        }
        void Input()
        {
            
            for(int i = 0; i < _n; i++)
            {
                printf("Enter the %d element of the array: \n", i + 1);
                cin >> arr[i];
            }
        }
        void Output()
        {
            cout << "The elements of the array are:" << endl;
            for(int i = 0; i < _n - 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << arr[_n - 1] << endl;
        }
        ~MyArray()
        {
            cout << "Bye!" << endl;
        }
        int _n;
        int arr[10010];
};

class ReArray:public MyArray
{
    public:
        ReArray(int n)
        {
            _n = n;
            cout << "ReArray initialize..." << endl;
        }
        void nizhuan()
        {
            cout << "Now reverse the elements in the array." << endl;
            reverse(arr, arr + _n);
            cout << "The elements of the array are:" << endl;
            for(int i = 0; i < _n - 1; i++)
            {
                cout << arr[i] << " ";
            }
            cout << arr[_n - 1] << endl;
        }
};
int main()
{
    int n;
    cout << "Please enter the length of the array:" << endl;
    cin >> n;
    //MyArray t1(n);
    ReArray t2(n);
    t2.Input();
    t2.Output();
    t2.nizhuan();
    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// class DateType
// {
//     public:
//         DateType()
//         {
//             cout << "Constructor of DateType" << endl;
//             year = 2022;
//             month = 5;
//             day = 1;
//         }
//         void Print()
//         {
//             printf("%d.%d.%d\n", year, month, day);
//         }
//         ~DateType()
//         {
//             cout << "Destructor of DateType" << endl;
//         }
//         int year;
//         int month;
//         int day;
// };

// class TimeType
// {
//     public:
//         TimeType()
//         {
//             cout << "Constructor of TimeType" << endl;
//             h = 8;
//             m = 30;
//             s = 17;
//         }
//         void Print()
//         {
//             printf("%d:%d:%d\n", h,m,s);
//         }
//         ~TimeType()
//         {
//             cout << "Destructor of TimeType" << endl;
//         }
//         int h;
//         int m;
//         int s;
// };

// class DateTimeType:public DateType, public TimeType 
// {
//     public:
//         DateTimeType()
//         {
//             cout << "Constructor of DateTimeType" << endl;
//         }
//         ~DateTimeType()
//         {
//             cout << "Destructor of DateTimeType" << endl;
//         }
// };

// int main()
// {
//     DateTimeType t;
//     t.DateType::Print();
//     t.TimeType::Print();
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// union u_type
// {
// int i;
// char ch;
// }temp;

// int main()
// {
//     temp.i = 305;
//     cout << temp.ch << endl;
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;

// class employee {
// 	public:
// 		employee(string n, string p): name(n), position(p) {
// 			num = NUM;
// 			NUM++;
// 		}
// 		void output() {
// 			cout << setw(15) << num << setw(15) << name << setw(15) << salary << setw(15) << position << endl;
// 		}
// 	protected:
// 		string name;
// 		string position;
// 		int num;
// 		int salary;
// 		static int NUM;
// };
// int employee::NUM = 1000;

// class technician: public employee {
// 	public:
// 		technician(string n, string p = "technician"): employee(n, p) {
// 		}
// 		void salary_cal() {
// 			int a;
// 			cout << "Please enter the working hours of the technician: " << endl;
// 			cin >> a;
// 			salary = 100 * a;
// 		}
// };

// class salesman: virtual public employee {
// 	public:
// 		salesman(string n, string p = "salesman"): employee(n, p) {
// 		}
// 		void salary_cal() {
// 			int a;
// 			cout << "Please enter the sales amount of the salesperson: " << endl;
// 			cin >> a;
// 			salary = 0.04 * a;
// 		}
// };

// class manager: virtual public employee {
// 	public:
// 		manager(string n, string p = "manager"): employee(n, p) {
// 			salary = 8000;
// 		}
// };

// class salesmanager: public salesman, public manager {
// 	public:
// 		salesmanager(string n, string p = "salesmanager"): salesman(n), manager(n), employee(n, p) {
// 		}
// 		void salary_cal() {
// 			int a;
// 			cout << "Please enter the sales amount of the sales manager: " << endl;
// 			cin >> a;
// 			salary = 5000 + 0.005 * a;
// 		}
// };

// int main() {
// 	manager TOM("TOM");
// 	technician MARY("MARY");
// 	MARY.salary_cal();
// 	salesman JACK("JACK");
// 	JACK.salary_cal();
// 	salesmanager BOB("BOB");
// 	BOB.salary_cal();
// 	cout << setiosflags(ios::left) << setw(15) << "WorkNum" << setw(15) << "Name" << setw(15) << "Salary" << setw(
// 	         15) << "Positon" << endl;
// 	TOM.output();
// 	MARY.output();
// 	JACK.output();
// 	BOB.output();
// 	return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[16] = {'0', '1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    while(n >= 16)
    {
        int tmp = 0;
        tmp = n / 16;
        cout << arr[tmp];
        n %= 16;
    }
    if(n <= 15)
    {
        cout << arr[n];
    }
    return 0;
}