#pragma once
#include <bits/stdc++.h>

using namespace std;

typedef int DataType;

// 单链表的定义
typedef struct LNode
{
	DataType data;
	struct LNode* next;
}LNode;

// 单链表的创建
void CreateList(LNode* pl, DataType x);

// 头插
void ListInsertFront(LNode* pl, DataType x);

// 尾插
void ListInsertBack(LNode* pl, DataType x);

// 删除
void ListErase(LNode* pl, int pos);

// 遍历
void TranverseList(LNode* pl);