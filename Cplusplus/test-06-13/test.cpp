#define L(x) std::left << setw(15)
#define R(x) std::right << setw(15)

#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     int ans = 0;

    
//     int empty = 0;
//     while(1)
//     {
//         int n = 0; 
//         cin >> n;
//         if(n == 0)
//             break;
//             while(n >= 2)
//             {
//                 ans += n / 3;
//                 n = (n / 3) + (n % 3);
//                 if(n == 2)
//                 {
//                     ans ++;
//                     n = 0;
                    
//                 }
                
//             }
//         cout << ans << endl;
//         ans = 0;
//     }
//     return 0;
// }

// typedef struct Student
// {
    
//     string a;
//     double grade[3];
//     double sum = 0;
//     int rank;
// }STU;

// bool cmp(STU s1, STU s2)
// {
//     return s1.sum > s2.sum;
// }

// void Input(STU st[])
// {
//     for(int i = 0; i < 10; i++)
//     {
//         cin >> st[i].a;
//         for(int j = 0; j < 3; j++)
//         {
//             cin >> st[i].grade[j];
//         }
//     }
// }

// void calculate(STU s[])
// {
//     for(int i = 0; i < 10; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             s[i].sum += s[i].grade[j];
//         }
//     }
// }

// void sort_total(STU s[])
// {
//     sort(s, s + 10, cmp);
// }

// void add_rank(STU s[])
// {
//     for(int i = 0; i < 10; i++)
//     {
//         s[i].rank = i + 1;
//     }
// }

// void print_data(STU s[])
// {
//     for(int i = 0; i < 10; i++)
//     {
//         cout << L(15) << s[i].a << L(15) <<s[i].grade[0] << L(15) << s[i].grade[1] << L(15) <<s[i].grade[2] <<L(15) << s[i].sum << L(15) << s[i].rank << endl;
//     }
// }

// int main()
// {
//     STU st[10];
//     Input(st);
//     calculate(st);
//     sort_total(st);
//     add_rank(st);
//     print_data(st);
//     return 0;
// }



int main()
{
    
    return 0;
}