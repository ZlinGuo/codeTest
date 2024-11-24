#pragma once

#include <bits/stdc++.h>

using namespace std;

typedef int SeqListDataType;

typedef struct SeqList
{
	SeqListDataType* arr;
	int size;       //��Ч���ݸ���
	int capacity;   //�ռ����
}SL;


// ��ӡ
void SeqListPrint(SL* ps);

// ���ռ��Ƿ��㹻
void SeqListCheckCapacity(SL* ps);

// ��ʼ��������
void SeqListInit(SL* ps);
void SeqListDestroy(SL* ps);

// ͷ���β��
void SeqListPushBack(SL* ps, SeqListDataType x);
void SeqListPushFront(SL* ps, SeqListDataType x);

// ͷɾ��βɾ
void SeqListPopBack(SL* ps);
void SeqListPopFront(SL* ps);

// ָ��λ��֮ǰ����/ɾ������
void SLInsert(SL* ps, int pos, SeqListDataType x);
void SLErase(SL* ps, int pos);

// ��������
int SLFind(SL* ps, SeqListDataType x);