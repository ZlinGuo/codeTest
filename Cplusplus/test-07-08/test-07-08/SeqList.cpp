#include "SeqList.h"

void SLInit(SL* ps)
{
    ps->arr = NULL;
    ps->size = ps->capacity = 0;
}

void SLDestroy(SL* ps)
{

}

void Print(SL* ps)
{
    for (int i = 0; i < ps->size; i++)
    {
        printf("%d ", ps->arr[i]);
    }
    printf("\n");
}

void SLCheckCapacity(SL* ps)
{
    if (ps->capacity == ps->size)
    {
        int newCapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
        SLDataType* tmp = (SLDataType*)realloc(ps->arr, newCapacity * sizeof(SLDataType));
        if (tmp == NULL)
        {
            perror("realloc fail");
            exit(1);
        }
        //���ݳɹ�
        //free(ps->arr); //realloc ���ͷžɿռ�, ����Ҫ�ظ��ͷ�!
        ps->arr = tmp;
        ps->capacity = newCapacity;
    }
}
void SLPushBack(SL* ps, SLDataType x)
{
    //���ܴ���ָ��
    assert(ps);

    //�ռ䲻��, ����
    SLCheckCapacity(ps);

    //�ռ��㹻, ֱ�Ӳ���
    ps->arr[ps->size] = x;
    ps->size++; 
}

void SLPushFront(SL* ps, SLDataType x)
{
    assert(ps);

    SLCheckCapacity(ps);

    for (int i = ps->size; i > 0; i--)
    {
        ps->arr[i] = ps->arr[i - 1];
    }

    ps->arr[0] = x;
    ps->size++;
}

void SLPopBack(SL* ps)
{
    assert(ps);
    assert(ps->size);
    ps->size--;
}

void SLPopFront(SL* ps)
{
    assert(ps);
    assert(ps->size);
    for (int i = 0; i < ps->size - 1; i++)
    {
        ps->arr[i] = ps->arr[i + 1];
    }
    ps->size--;
}

void SLInsert(SL* ps, int pos, SLDataType x)
{
    assert(ps);
    assert(pos >= 0 && pos <= ps->size);
    SLCheckCapacity(ps);
    for (int i = ps->size; i >= pos; i--)
    {
        ps->arr[i] = ps->arr[i - 1];
    }
    ps->arr[pos - 1] = x;
    ps->size++;
}

void SLErease(SL* ps, int pos)
{
    assert(ps);
    assert(pos >= 0 && pos < ps->size);
    for (int i = pos - 1; i < ps->size - 1; i++)
    {
        ps->arr[i] = ps->arr[i + 1];
    }
    ps->size--;
}