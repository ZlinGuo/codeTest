#include "Queue.h"

//初始化
void QueueInit(Queue* pq)
{
    assert(pq);

    pq->phead = pq->ptail = NULL;
    pq->size = 0;
}
//销毁
void QueueDestroy(Queue* pq)
{
    assert(pq);

    QNode* pcur = pq->phead;

    while(pcur)
    {
        pcur = pcur->next;
        free(pq->phead);
        pq->phead = pcur;
    }

    pq->phead = pq->ptail = NULL;
    pq->size = 0;
}

//插入(尾端插入)
void QueuePush(Queue* pq, QueueDataType x)
{
    assert(pq);

    QNode* newnode = (QNode*)malloc(sizeof(QNode));
    if(newnode == NULL)
    {
        perror("malloc fail");
        exit(1);
    }

    newnode->val = x;
    newnode->next = NULL;

    //队列为空时
    if(pq->phead == NULL)
    {
        pq->phead = pq->ptail = newnode;
    }
    else
    {
        pq->ptail->next = newnode;
        pq->ptail = pq->ptail ->next;
    }

    pq->size++;
}
//删除(头部删除)
void QueuePop(Queue* pq)
{
    assert(pq);
    assert(pq->phead);

    //只有一个元素
    if(pq->phead == pq->ptail)
    {
        free(pq->phead);
        pq->phead = pq->ptail = NULL;
    }
    else
    {
        QNode* pcur = pq->phead;
        pq->phead = pq->phead->next;
        free(pcur);
        pcur = NULL;
    }
    pq->size--;
}

//判断是否为空
bool QueueEmpty(Queue* pq)
{
    assert(pq);

    return pq->phead == NULL;
}

// 取头部元素
QueueDataType QueueFront(Queue* pq)
{
    assert(pq);
    assert(pq->phead != NULL);
    return pq->phead->val;
}

//取尾部元素
QueueDataType QueueBack(Queue* pq)
{
    assert(pq);
    assert(pq->ptail != NULL);
    return pq->ptail->val;
}

//元素个数
int QueueSize(Queue* pq)
{
    assert(pq);

    return pq->size;
}
