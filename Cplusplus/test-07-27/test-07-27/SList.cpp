#include "Slist.h"

SLTNode* SLBuyNode(SLTDataType x)
{
	SLTNode* tmp = (SLTNode*)malloc(sizeof(SLTNode));
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(1);
	}
	tmp->data = x;
	tmp->next = NULL;

	return tmp;
}

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

//�����ͷ�塢β��
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);

	SLTNode* newnode = SLBuyNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* pcur = *pphead;

		while (pcur->next)// ��β���
		{
			pcur = pcur->next;
		}

		pcur->next = newnode;
	}
}
void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);

	SLTNode* newnode = SLBuyNode(x);
	//SLTNode* pcur = *pphead;
	newnode->next = *pphead;
	*pphead = newnode;
}

//�����ͷɾ��βɾ
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* pcur = *pphead;
		SLTNode* prev = NULL;
		while (pcur->next)
		{
			prev = pcur;
			pcur = pcur->next;
		}

		prev->next = NULL;
		free(pcur);
		pcur = NULL;
	}

}
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);

	SLTNode* pcur = *pphead;

	*pphead = (*pphead)->next;
	free(pcur);
	pcur = NULL;
	
}

//����
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

	return NULL;
}

//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(pos);
	assert(*pphead);

	SLTNode* newnode = SLBuyNode(x);

	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
		return;
	}

	SLTNode* pcur = *pphead;

	while (pcur->next != pos)
	{
		pcur = pcur->next;
	}
	pcur->next = newnode;
	newnode->next = pos;
}
//��ָ��λ��֮���������
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);

	SLTNode* newnode = SLBuyNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}

//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);

	if (pos == *pphead)
	{
		SLTPopFront(pphead);
		return;
	}

	SLTNode* pcur = *pphead;
	while (pcur->next != pos)
	{
		pcur = pcur->next;
	}
	pcur->next = pos->next;
	free(pos);
	pos = NULL;

}
//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);

	SLTNode* pcur = pos->next;
	pos->next = pcur->next;
	free(pcur);
	pcur = NULL;
	
}

//��������
void SListDesTroy(SLTNode** pphead)
{
	SLTNode* pcur = *pphead;

	while (pcur)
	{
		SLTNode* tmp = pcur;
		pcur = pcur->next;
		free(tmp);
	}
	*pphead == NULL;
}