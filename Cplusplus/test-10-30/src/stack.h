//
// Created by achan on 2024/10/31.
//

#ifndef STACK_H
#define STACK_H



#include <bits/stdc++.h>
using namespace std;

typedef int SNodeDataType;

typedef struct SNode {
    SNodeDataType data;
    struct SNode* next;
}SNode;

// 打印
void StackPrint(SNode* ps);

// 栈的初始化
void StackInit(SNode* ps);

// 判断栈是否为空
bool StackEmpty(SNode s);

// 插入
void StackPush(SNode* ps, SNodeDataType x);

// 删除
void StackPop(SNode* ps);




#endif //STACK_H
