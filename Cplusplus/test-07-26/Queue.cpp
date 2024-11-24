#include "Queue.h"

//��ʼ��
void QueueInit(Queue* pq)
{
    assert(pq);

    pq->phead = pq->ptail = NULL;
    pq->size = 0;
}
//����
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

//����(β�˲���)
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

    //����Ϊ��ʱ
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
//ɾ��(ͷ��ɾ��)
void QueuePop(Queue* pq)
{
    assert(pq);
    assert(pq->phead);

    //ֻ��һ��Ԫ��
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

//�ж��Ƿ�Ϊ��
bool QueueEmpty(Queue* pq)
{
    assert(pq);

    return pq->phead == NULL;
}

// ȡͷ��Ԫ��
QueueDataType QueueFront(Queue* pq)
{
    assert(pq);
    assert(pq->phead != NULL);
    return pq->phead->val;
}

//ȡβ��Ԫ��
QueueDataType QueueBack(Queue* pq)
{
    assert(pq);
    assert(pq->ptail != NULL);
    return pq->ptail->val;
}

//Ԫ�ظ���
int QueueSize(Queue* pq)
{
    assert(pq);

    return pq->size;
}
