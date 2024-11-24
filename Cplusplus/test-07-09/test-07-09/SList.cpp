#include "SList.h"

void SLTPrint(SLTNode* phead)
{
	SLTNode* pcur = phead;
	while (pcur)
	{
		cout << pcur->data << "->";
		pcur = pcur->next;
	}
	cout << "NULL" << endl;
}

SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	//链表为空, 新节点作为phead
	if (*pphead == NULL)
	{
		*pphead = newnode;
		return;
	}
	//链表不为空, 找尾结点
	SLTNode* ptail = *pphead;
	while (ptail->next)
	{
		ptail = ptail->next;
	}
	//此时ptail就是尾结点
	ptail->next = newnode;
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newnode = SLTBuyNode(x);
	/*
	//链表为空, 直接作为phead
	if (*pphead == NULL)
	{
		*pphead = newnode;
		return;
	}
	//链表不为空
	SLTNode* ptail = *pphead;
	newnode->next = ptail;
	*pphead = newnode;
	*/
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	//链表不能为空
	assert(*pphead);

	//链表只有一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		return;
	}
	//链表有多个节点
	SLTNode* prev = NULL;
	SLTNode* ptail = *pphead;
	while (ptail->next)
	{
		prev = ptail;
		ptail = ptail->next;
	}
	prev->next = NULL;
	free(ptail);
	ptail = NULL;
}

void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	//链表不能为空
	assert(*pphead);

	//只有一个节点
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
		return;
	}
	//有多个节点
	SLTNode* pcur = *pphead;
	*pphead = pcur->next;
	free(pcur);
	pcur = NULL;
}

SLTNode* SLTFind(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	
	SLTNode* pcur = *pphead;
	while (pcur)
	{
		if (pcur->data == x)
		{
			return pcur;
		}
		pcur = pcur->next;
	}
	//没找到
	return NULL;
}

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);

	SLTNode* newnode = SLTBuyNode(x);
	//只有一个节点
	if ((*pphead)->next == NULL)
	{
		SLTPushFront(pphead, x);
		return;
	}
	//有多个节点
	SLTNode* prev = *pphead;
	while (prev->next != pos)
	{
		prev = prev->next;
	}
	prev->next = newnode;
	newnode->next = pos;
}

void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	SLTNode* newnode = SLTBuyNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);

	//pos刚好是头结点
	if ((*pphead) == pos)
	{
		SLTPopFront(pphead);
		return;
		
	}
	//pos不是头结点
	SLTNode* prev = *pphead;
	while (prev->next != pos)
	{
		prev = prev->next;
	}
	prev->next = pos->next;
	free(pos);
	pos = NULL;
}

void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	//pos->next不能为空
	assert(pos->next);

	SLTNode* pcur = pos->next;
	pos->next = pos->next->next;
	free(pcur);
	pcur = NULL;
}

void SListDeatroy(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SListNode* pcur = *pphead;
	while (pcur)
	{
		SLTNode* next = pcur->next;
		free(pcur);
		pcur = next;
	}
	*pphead = NULL;
	pcur = NULL;
}