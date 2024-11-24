// #include <bits/stdc++.h>
// using namespace std;
//
// typedef int SNodeDataType;
//
// typedef struct SNode {
//     SNodeDataType data;
//     struct SNode* next;
// }SNode;

#include "stack.h"
//#include "Stack.cpp"

/*typedef struct SNode {
    SNodeDataType data;
    struct SNode* next;
}SNode;*/

void Test01() {
    SNode* p1;

    StackInit(p1);

    StackPush(&p1,9);
    StackPush(&p1,8);
    StackPush(&p1,7);
    StackPush(&p1,6);
    StackPush(&p1,5);
    StackPush(&p1,4);
    StackPush(&p1,3);

    StackPrint(p1);
}

int main()
{
    Test01();

    return 0;
}

