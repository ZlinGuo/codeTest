#pragma once

#include <bits/stdc++.h>

using namespace std;

typedef int SeqListDataType;

typedef struct SeqList
{
	SeqListDataType* arr;
	int size;       //有效数据个数
	int capacity;   //空间个数
}SL;


// 打印
void SeqListPrint(SL* ps);

// 检查空间是否足够
void SeqListCheckCapacity(SL* ps);

// 初始化和销毁
void SeqListInit(SL* ps);
void SeqListDestroy(SL* ps);

// 头插和尾插
void SeqListPushBack(SL* ps, SeqListDataType x);
void SeqListPushFront(SL* ps, SeqListDataType x);

// 头删和尾删
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);

// 指定位置之前插入/删除数据
void SLInsert(SL* ps, int pos, SeqListDataType x);
void SLErase(SL* ps, int pos);

// 查找数据
int SLFind(SL* ps, SeqListDataType x);