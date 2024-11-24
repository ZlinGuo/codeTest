#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 100
typedef int SLDataType;


//静态顺序表
// struct SeqList
// {
//     SLDataType arr[N];
//     int size;
// };

//动态顺序表
typedef struct SeqList
{
    SLDataType* arr;
    int capacity;      //记录顺序表的空间大小
    int size;          //记录顺序表当前有效数据个数
}SL;


//初始化和销毁
void SLInit(SL* ps);
void SLDestroy(SL* ps);

//打印顺序表
void Print(SL* ps);

//头插和尾插
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

//头删和尾删
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

//指定位置插入
void SLInsert(SL* ps, int pos, SLDataType x);
//指定位置删除
void SLErease(SL* ps, int pos);