#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int sz = sizeof(arr);
    for(int i = 0; i < sz - 1; i++)
    {
        for(int j = 0; j < sz - i - 1; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                char tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    return 0;
}