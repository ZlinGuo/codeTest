#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void Test01()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(12);
    v1.push_back(1);
    v1.push_back(1042);
    v1.push_back(1034);
    v1.push_back(1065);

    sort(v1.begin(), v1.end());// 升序
    sort(v1.begin(), v1.end(), greater<int>());// 降序, 相当于传了一个匿名对象

}

int main()
{

    return 0;
}