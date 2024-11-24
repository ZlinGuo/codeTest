#include <bits/stdc++.h>

using namespace std;

void InsertSort(int* a, int n)
{
    for(int i = 0; i <= n - 2; i++)
    {
        int end = i;
        int tmp = a[end + 1];
        while(end >= 0)
        {
            if(tmp < a[end])
            {
                //swap(a[i], a[i + 1]);
                a[end + 1] = a[end];
                end--;
            }
            else{
                break;
            }
        }
        a[end + 1] = tmp;
    }
}

void ShellSort(int* a, int n)
{
    int gap = n;
    while(gap > 1){
        gap = gap / 3 + 1;
        for(int i = 0; i < n - gap; i++){
            int end = i;
            int tmp = a[end + gap];
            while(end >= 0)
            {
                if(tmp < a[end]){
                    //swap(a[i], a[i + gap]);
                    a[end + gap] = a[end];
                    end -= gap;
                }
                else{
                    break;
                }
            }
            a[end + gap] = tmp;
        }
        
    }
}

int main()
{
    int a[10] = {23,352,3463,2342,234,5,5645,3452,234,64};
    for(int i = 0; i <= 9; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    ShellSort(a, 10);
    for(int i = 0; i <= 9; i++){
        cout << a[i] << " ";
    }

    return 0;
}