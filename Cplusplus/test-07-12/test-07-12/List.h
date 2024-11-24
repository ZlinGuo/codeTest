#pragma once
#include <bits/stdc++.h>
using namespace std;

#define DataType LTDataType
typedef int DataType;

typedef struct  Listnode
{
	DataType data;
	struct Listnode* next;
	struct Listnode* prev;
}LTNode;

//双向链表有哨兵位, 插入数据之前要先初始化一个哨兵位

//初始化和销毁
//void LTInit(LTNode** pphead);
LTNode* LTInit();
void LTDestory(LTNode** pphead);

//打印
void Print(LTNode* phead);


//尾插和头插
void LTPushBack(LTNode* phead, DataType x);
void LTPushFront(LTNode* phead, DataType x);

//头删和尾删
void LTPopBack(LTNode* phead);
void LTPopFront(LTNode* phead);

//查找
LTNode* LTFind(LTNode* phead, DataType x);

//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x);
//删除pos位置的数据
void LTErase(LTNode* pos);