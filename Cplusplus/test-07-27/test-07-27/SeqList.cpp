#include "SeqList.h"

// 打印
void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		cout << ps->arr[i] << (i == ps->size - 1 ? "\n" : " ");
	}
}

// 初始化和销毁
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
	//检查空间是否足够
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SeqListDataType* pcur = (SeqListDataType*)realloc(ps->arr, sizeof(SeqListDataType) * newcapacity);
		if (pcur == NULL)// 扩容失败
		{
			perror("realloc fail");
			exit(1);
		}

		ps->arr = pcur;
		ps->capacity = newcapacity;
	}
}

// 头插和尾插
void SeqListPushBack(SL* ps, SeqListDataType x)
{
	assert(ps);

	// 检查空间
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

// 头删和尾删
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

// 指定位置之前插入/删除数据
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

// 查找数据
int SLFind(SL* ps, SeqListDataType x)
{
	assert(ps);
	assert(ps->size);

	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			cout << "找到了, 下标是" << i << endl;
			return i;
		}
	}

	cout << "未找到" << endl;
	return -1;
}