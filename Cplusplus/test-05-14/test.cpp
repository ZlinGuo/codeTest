// #include <iostream>

// using namespace std;

// class Box
// {
// protected:
//     float width, height;
// public:
//     void setBox(float w, float h)
//     {
//         width = w, height = h;
//     }
//     void showBox()
//     {
//         cout << "box width:" << width << " height:" << height << endl;
//     }
// };

// class ColoredBox : public Box
// {
// protected:
//     int* color;
// public:
//     void setBox(float w, float h, int c[3])
//     {
//         width = w, height = h, color = c;
//     }
//     void showBox()
//     {
//         cout << "coloredbox width:" << width << " height:" << height << " color:" << color[0] << "," << color[1] << "," << color[2] << endl;
//     }
// };

// int main()
// {
//     int c[3] = {255, 0, 125};
//     Box box;
//     ColoredBox coloredbox;
//     box.setBox(9.1f, 8.4f);
//     coloredbox.setBox(10.3f, 6.2f, c);
//     box.showBox();
//     coloredbox.showBox();
//     return 0;
// }

#include "Date.h"


void TeatDate1()
{
    Date d1(2020, 5, 8);
    Date d2 = d1;
    Date d3(2024,5,14);

    d1.Print();
    d2.Print();
    d3.Print();

    d3 = d1;
    d3.Print();

}

void TeatDate2()
{
    Date d1(2024, 5, 14);
    Date d2 = d1 - 2000;

    d1.Print();
    d2.Print();
}

void TeatDate3()
{
    Date d1(2024, 5, 14);
    Date d2(2005, 3, 9);

    int t = d2 -d1;
    cout << t << endl;
}
int main()
{
    //TeatDate1();

    //TeatDate2();

    TeatDate3();
    return 0;
}

