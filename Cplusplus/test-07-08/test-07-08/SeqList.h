#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 100
typedef int SLDataType;


//��̬˳���
// struct SeqList
// {
//     SLDataType arr[N];
//     int size;
// };

//��̬˳���
typedef struct SeqList
{
    SLDataType* arr;
    int capacity;      //��¼˳���Ŀռ��С
    int size;          //��¼˳���ǰ��Ч���ݸ���
}SL;


//��ʼ��������
void SLInit(SL* ps);
void SLDestroy(SL* ps);

//��ӡ˳���
void Print(SL* ps);

//ͷ���β��
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

//ͷɾ��βɾ
void SLPopBack(SL* ps);
void SLPopFront(SL* ps);

//ָ��λ�ò���
void SLInsert(SL* ps, int pos, SLDataType x);
//ָ��λ��ɾ��
void SLErease(SL* ps, int pos);