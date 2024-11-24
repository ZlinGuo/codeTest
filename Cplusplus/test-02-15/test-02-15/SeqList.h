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
//����Ƿ���Ҫ����
void SLCheckCapacity(SL* ps);

//��ʼ��������
void SLInit(SL* ps);
void SLDestroy(SL* ps);
void SLPrint(SL* ps); //���ֽӿ�һ����

//˳����ͷ��/β������
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

//˳����ͷ��/β��ɾ��
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

//ָ��λ��֮ǰ��������
//ɾ��ָ��λ������
void SLInsert(SL* ps, int pos, SLDataType x);
void SLErase(SL* ps, int pos);

//����
int SLFind(SL* ps, SLDataType x);