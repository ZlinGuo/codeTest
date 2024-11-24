#include "stdlib.h"

// 单链表的创建
void CreateList(LNode* pl, DataType x)
{
	pl->data = x;

}

// 头插
void ListInsertFront(LNode* pl, DataType x);

// 尾插
void ListInsertBack(LNode* pl, DataType x);

// 删除
void ListErase(LNode* pl, int pos);

// 遍历
void TranverseList(LNode* pl);