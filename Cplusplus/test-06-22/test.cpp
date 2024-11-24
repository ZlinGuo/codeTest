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