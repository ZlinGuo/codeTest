#pragma once
#include <bits/stdc++.h>
using namespace std;

#define DataType LTDataType
typedef int DataType;

typedef struct  Listnode
{
	DataType data;
	struct Listnode* next;
	struct Listnode* prev;
}LTNode;

//˫���������ڱ�λ, ��������֮ǰҪ�ȳ�ʼ��һ���ڱ�λ

//��ʼ��������
//void LTInit(LTNode** pphead);
LTNode* LTInit();
void LTDestory(LTNode** pphead);

//��ӡ
void Print(LTNode* phead);


//β���ͷ��
void LTPushBack(LTNode* phead, DataType x);
void LTPushFront(LTNode* phead, DataType x);

//ͷɾ��βɾ
void LTPopBack(LTNode* phead);
void LTPopFront(LTNode* phead);

//����
LTNode* LTFind(LTNode* phead, DataType x);

//��posλ��֮���������
void LTInsert(LTNode* pos, LTDataType x);
//ɾ��posλ�õ�����
void LTErase(LTNode* pos);