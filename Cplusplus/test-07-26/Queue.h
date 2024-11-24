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

//��ʼ��
void QueueInit(Queue* pq);
//����
void QueueDestroy(Queue* pq);

//����(β�˲���)
void QueuePush(Queue* pq, QueueDataType x);
//ɾ��(ͷ��ɾ��)
void QueuePop(Queue* pq);

//�ж��Ƿ�Ϊ��
bool QueueEmpty(Queue* pq);

// ȡͷ��Ԫ��
QueueDataType QueueFront(Queue* pq);

//ȡβ��Ԫ��
QueueDataType QueueBack(Queue* pq);

//Ԫ�ظ���
int QueueSize(Queue* pq);

