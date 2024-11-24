#include "SeqList.h"

// ��ӡ
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		cout << ps->arr[i] << (i == ps->size - 1 ? "\n" : " ");
	}
}

// ��ʼ��������
void SeqListInit(SL* ps)
{
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}
void SeqListDestroy(SL* ps)
{
	//SeqListDataType* pcur = ps->arr;

	if (ps->arr)
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

void SeqListCheckCapacity(SL* ps)
{
	//���ռ��Ƿ��㹻
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SeqListDataType* pcur = (SeqListDataType*)realloc(ps->arr, sizeof(SeqListDataType) * newcapacity);
		if (pcur == NULL)// ����ʧ��
		{
			perror("realloc fail");
			exit(1);
		}

		ps->arr = pcur;
		ps->capacity = newcapacity;
	}
}

// ͷ���β��
void SeqListPushBack(SL* ps, SeqListDataType x)
{
	assert(ps);

	// ���ռ�
	SeqListCheckCapacity(ps);

	ps->arr[ps->size] = x;
	ps->size++;
}
void SeqListPushFront(SL* ps, SeqListDataType x)
{
	assert(ps);

	SeqListCheckCapacity(ps);

	for (int i = ps->size; i >= 1; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}

	ps->arr[0] = x;
	ps->size++;
}

// ͷɾ��βɾ
void SeqListPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);

	ps->size--;
}
void SeqListPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);

	for (int i = 0; i <= ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}

	ps->size--;
}

// ָ��λ��֮ǰ����/ɾ������
void SLInsert(SL* ps, int pos, SeqListDataType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	SeqListCheckCapacity(ps);

	if (ps->size == 1)
	{
		SeqListPushFront(ps, x);
		return;
	}

	for (int i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	if (ps->size == 1)
	{
		SeqListPopFront(ps);
	}
	for (int i = pos - 1; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}

	ps->size--;
}

// ��������
int SLFind(SL* ps, SeqListDataType x)
{
	assert(ps);
	assert(ps->size);

	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			cout << "�ҵ���, �±���" << i << endl;
			return i;
		}
	}

	cout << "δ�ҵ�" << endl;
	return -1;
}