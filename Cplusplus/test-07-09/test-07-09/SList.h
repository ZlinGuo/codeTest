#pragma once
#include <bits/stdc++.h>
using namespace std;

typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

//����Ĵ�ӡ
void SLTPrint(SLTNode* phead);

//�����ͷ���β��
void SLTPushBack(SLTNode** pphead, SLTDataType x);
void SLTPushFront(SLTNode** pphead, SLTDataType x);

////�����ͷɾ��βɾ
void SLTPopBack(SLTNode** pphead);
void SLTPopFront(SLTNode** pphead);

//����
SLTNode* SLTFind(SLTNode** pphead, SLTDataType x);

//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//��ָ��λ��֮ǰ��������
void SLTInsertAfter(SLTNode* pos, SLTDataType x);

//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos);

//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos);

//��������
void SListDeatroy(SLTNode** pphead);