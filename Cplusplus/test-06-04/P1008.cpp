// #include <bits/stdc++.h>

// using namespace std;

// bool cmp(pair<string, int> x, pair<string, int> y)
// {
//     return x.second < y.second;
// }

// int main()
// {
//     int q = 0;
//     cin >> q;
//     vector<pair<string, int>> a; 

//     pair<string, int> nonolove = {"nonolove", 1e9 + 1};
//     pair<string, int> nolove = {"nolove", 1e9 + 1};
//     for(int i = 0; i < q; i++)
//     {
//         string str;
//         cin >> str;
//         if(str == "buy")
//         {
//             string name;
//             int love = 0;
//             cin >> name >> love;
//             if(love < nonolove.second)
//             {
//                 nonolove.first = name;
//                 nonolove.second = love;
//             }
//             else if(love < nolove.second)
//             {
//                 nolove.first = name;
//                 nolove.second = love;
//             }
//             a.push_back(make_pair(name, love));
//         }
//         else if(str == "huimiele")
//         {
//             if(!a.empty())
//             {
//                 cout << nonolove.first << endl;
//                 if(nolove.second != 1e9 + 1)
//                 {
//                     nonolove.first = nolove.first;
//                     nonolove.second = nolove.second;
//                 }
//                 else
//                 {
//                     nonolove.second = 1e9 + 1;
//                 }
//             }
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

bool operator<(pair<string, int> x, pair<string, int> y)
{
    return x.second > y.second;
}

int main()
{
    pair<int, string> a;
    set<pair<int, string>> st;
    int q = 0;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        string str;
        cin >> str;
        if(str == "buy")
        {
            string name;
            int love = 0;
            cin >> name >> love;
            a.first = love;
            a.second = name;
            st.insert(a);
        }
        else if(str == "huimiele")
        {
            auto tmp = st.begin();
            a = *tmp;
            cout << a.second << endl;
            st.erase(st.begin());
        }
    }
    return 0;
}
