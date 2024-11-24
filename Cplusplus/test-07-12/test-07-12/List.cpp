#include "List.h"

//void LTInit(LTNode** pphead)
//{
//	*pphead = (LTNode*)malloc(sizeof(LTNode));
//	if (*pphead == NULL)
//	{
//		perror("malloc fail!");
//		exit(1);
//	}
//	(*pphead)->data = 0;
//	(*pphead)->next = *pphead;
//	(*pphead)->prev = *pphead;
//}

LTNode* LTBuyNode(DataType x) 
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL) 
	{
		perror("malloc fail!");
		exit(1);
	}
	newnode->data = x;
	newnode->next = newnode->prev = newnode;

	return newnode;
}

LTNode* LTInit() 
{
	LTNode* phead = LTBuyNode(-1);
	return phead;
}

void LTDestory(LTNode** pphead)
{

}

void Print(LTNode* phead)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead) {
		cout << pcur->data << "->";
		pcur = pcur->next;
	}
	cout << endl;
}

void LTPushBack(LTNode* phead, DataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);

	newnode->next = phead;
	newnode->prev = phead->prev;

	phead->prev->next = newnode;
	phead->prev = newnode;
}

void LTPushFront(LTNode* phead, DataType x)
{
	assert(phead);

	LTNode* newnode = LTBuyNode(x);

	newnode->prev = phead;
	newnode->next = phead->next;

	phead->next->prev = newnode;
	phead->next = newnode;
}

void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* pcur = phead->prev;

	pcur->prev->next = phead;
	phead->prev = pcur->prev;

	free(pcur);
	pcur = NULL;
}

void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* pcur = phead->next;

	phead->next = pcur->next;
	pcur->next->prev = phead;
	free(pcur);
	pcur = NULL;
}

LTNode* LTFind(LTNode* phead, DataType x)
{
	assert(phead);
	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}

	return NULL;
}

//��posλ��֮���������
void LTInsert(LTNode* pos, LTDataType x) {
	assert(pos);
	LTNode* newnode = LTBuyNode(x);
	//pos newnode pos->next
	newnode->next = pos->next;
	newnode->prev = pos;

	pos->next->prev = newnode;
	pos->next = newnode;
}
//ɾ��posλ�õ�����
void LTErase(LTNode* pos) {
	assert(pos);

	//pos->prev pos  pos->next
	pos->next->prev = pos->prev;
	pos->prev->next = pos->next;

	free(pos);
	pos = NULL;
}

//void LTDesTroy(LTNode** pphead) {
//	assert(pphead);
//	//�ڱ�λ����Ϊ��
//	assert(*pphead);
//
//	LTNode* pcur = (*pphead)->next;
//	while (pcur != *pphead)
//	{
//		LTNode* next = pcur->next;
//		free(pcur);
//		pcur = next;
//	}
//	//������ֻ��һ���ڱ�λ
//	free(*pphead);
//	*pphead = NULL;
//}
void LTDesTroy(LTNode* phead) {
	//�ڱ�λ����Ϊ��
	assert(phead);

	LTNode* pcur = phead->next;
	while (pcur != phead)
	{
		LTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	//������ֻ��һ���ڱ�λ
	free(phead);
	phead = NULL;
}