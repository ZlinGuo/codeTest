#pragma once

#include <bits/stdc++.h>

using namespace std;

typedef int QueueDataType;

typedef struct QueueNode
{
    QueueDataType val;
    struct QueueNode* next;
}QNode;

typedef struct Queue
{
    QNode* phead;
    QNode* ptail;
    int size;
}Queue;

//初始化
void QueueInit(Queue* pq);
//销毁
void QueueDestroy(Queue* pq);

//插入(尾端插入)
void QueuePush(Queue* pq, QueueDataType x);
//删除(头部删除)
void QueuePop(Queue* pq);

//判断是否为空
bool QueueEmpty(Queue* pq);

// 取头部元素
QueueDataType QueueFront(Queue* pq);

//取尾部元素
QueueDataType QueueBack(Queue* pq);

//元素个数
int QueueSize(Queue* pq);

