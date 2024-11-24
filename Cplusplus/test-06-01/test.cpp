#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    // int a = 0, b = 0;
    // char c;
    // cin >> a >> b >> c;
    // if(c == '+')
    // {
    //     cout << a + b << endl;
    // }
    // else if(c == '-')
    // {
    //     cout << a - b << endl;
    // }
    // else if(c == '*')
    // {
    //     cout << a * b << endl;
    // }
    // else 
    // {
    //     cout << a / b << endl;
    // }

    // int n = 0;
    // cin >> n;
    // switch(n)
    // {
    // case 1:
    //     cout << "Monday" << endl;
    //     break;
    // case 2:
    //     cout << "Tuesday" << endl;
    //     break;
    // case 3:
    //     cout << "Wednesday" << endl;
    //     break;
    // case 4:
    //     cout << "Thursday" << endl;
    //     break;
    // case 5:
    //     cout << "Friday" << endl;
    //     break;
    // case 6:
    //     cout << "Saturday" << endl;
    // case 7:
    //     cout << "Sunday" << endl;
    //     break;
    // }

    // int n = 0;
    // cin >> n;
    // if(n % 3 == 0 && n % 5 == 0)
    // {
    //     cout << "Yes" << endl;
    //     return 0;
    // }
    // cout << "No" << endl;

    // int n = 0, m = 0;
    // cin >> n >> m;
    // cout << max(n, m) << endl;

    int arr[3] = {0};
    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3, cmp);
    for(int i = 0; i < 2; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[2] << endl;

    // int n = 0, i = 0; 
    // int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // scanf("%d\\%d", &n, &i);
    // if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    // {
    //     months[2] = 29;
    // }
    // cout << months[i];

    // int a = 0, b = 0, c = 0;
    // cin >> a >> b >> c;
    // int sum = a + b;
    // if(sum < a + c)
    // {
    //     sum = a + c;
    // }
    // if(sum < b + c)
    // {
    //     sum = b + c;
    // }
    // cout << sum << endl;

    // int a = 0, b = 0;
    // cin >> a >> b;
    // cout << "max=" << max(a, b) << endl;

    // int arr[3];
    // for(int i = 0; i < 3; i++)
    // {
    //     cin >> arr[i];
    // }
    // sort(arr, arr + 3);
    // cout << arr[1] << endl;
    return 0;
}