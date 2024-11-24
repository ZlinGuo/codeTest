#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

//˳���ĳ�ʼ��
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//��ӡ˳���
void SLPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
		printf("%d ", ps->arr[i]);
	printf("\n");
}

//����Ƿ���Ҫ����
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)//����ʧ��
		{
			perror("realloc fail!");
			exit(1);
		}
		//���ݳɹ�
		ps->arr = tmp;
		ps->capacity = newcapacity;
	}
}

//β��
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	ps->arr[ps->size++] = x;
}

//ͷ��
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SLCheckCapacity(ps);
	for (int i = (ps->size); i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

//βɾ
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);//��֤��Ч���ݸ�������0�����Խ���βɾ
	ps->size--;
}

//ͷɾ
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0; i < (ps->size) - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//ָ��λ�ò���
void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SLCheckCapacity(ps);
	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}

//��ָ��λ��ɾ��
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos; i < (ps->size) - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//����
int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			return i;//�ҵ��ˣ�ֱ�ӷ����±�
		}
	}
	return -1;//δ�ҵ�������-1
}

//����
void SLDestroy(SL* ps)
{
	assert(ps);
	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}