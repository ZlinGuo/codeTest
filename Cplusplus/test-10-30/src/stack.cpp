//
// Created by achan on 2024/10/30.
//

#include "stack.h"

/*typedef struct SNode {
    SNodeDataType data;
    struct SNode* next;
}SNode;*/

// 打印
void StackPrint(SNode* ps) {
    SNode* pcur = ps;
    while(pcur) {
        cout << pcur->data << " " << endl;
        pcur = pcur->next;
    }
    cout << endl;
}

// 栈的初始化
void StackInit(SNode* ps) {
    ps->data = 0;
    ps->next = nullptr;
}

// 判断栈是否为空
bool StackEmpty(SNode s) {
    if(s.data == 0) {
        return true;
    }
    return false;
}

// 插入
void StackPush(SNode* ps, SNodeDataType x) {
    assert(ps);

    SNode* newnode = new SNode;

    if(!newnode) { // 检查是否成功开辟空间
        perror("New Fail");
    }

    newnode->data = x;
    newnode->next = ps;
    ps = ps->next;

}

// 删除
void StackPop(SNode* ps) {
    assert(ps);


}

