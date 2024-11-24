#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 130;
    cout << "让我们来玩一个猜数字游戏，该数字在100-160之间，只有三次机会，猜对了有奖励哦！" << endl;
    cout << "请输入" << endl;
    int num = 0;
    cin >> num;
    if(num == a) {
        cout << "恭喜你，猜对了!" << endl;
    }
    else if(num < 100 || num > 160) {
        cout << "错误" << endl;
    }
    else if(num >= 100 && num <= 160) {
        if(num < a) {
            cout << "小了" << endl;
            cout << "请输入" << endl;
            cin >> num;
            // 在这就是重复以上的逻辑，需要注意的是，如果第二次或者第三次猜对了，可直接return 结束程序
            // ...
        }
        else if(num > a) {
            cout << "大了" << endl;
            cout << "请输入" << endl;
            cin >> num;
            // 在这也是重复以上的逻辑
            // ...
        }
    }
    else {
        cout << "机会已用尽" << endl;
    }

    return 0;
}
