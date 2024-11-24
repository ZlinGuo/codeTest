#include <bits/stdc++.h>    

using namespace std;

void Func1()
{
    string url("https://jw.qlu.edu.cn/jwglxt/xtgl/index_initMenu.html?jsdm=xs&_t=1727255276072");

    size_t pos1 = url.find(':');
    string url1 = url.substr(0, pos1);

    cout << url1 << endl;

    size_t pos2 = url.find('/', pos1 + 3);
    string url2 = url.substr(pos1 + 3, (pos2 - pos1 - 3));
    cout << url2 << endl;

    
    string url3 = url.substr(pos2 + 1);
    cout << url3 << endl;
}
int main()
{
    Func1();
    return 0;
}