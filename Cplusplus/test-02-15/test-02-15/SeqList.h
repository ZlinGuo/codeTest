#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	SLDataType size;
	SLDataType capacity;
}SL;
//检查是否需要扩容
void SLCheckCapacity(SL* ps);

//初始化和销毁
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps); //保持接口一致性

//顺序表的头部/尾部插入
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

//顺序表的头部/尾部删除
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

//指定位置之前插入数据
//删除指定位置数据
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

//查找
int SLFind(SL* ps, SLDataType x);