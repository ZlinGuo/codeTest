#include "Stack.h"

void STInit(ST* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;

	return;
}

void STDestroy(ST* ps)
{
	assert(ps);

	//STDataType* tmp = ps->a;
	//free(tmp);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;

	return;
}

void STPush(ST* ps, STDataType x)
{
	assert(ps);

	//ÊÇ·ñÓÐ×ã¹»¿Õ¼ä
	if (ps->capacity == ps->top)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		STDataType* tmp = (STDataType*)realloc(ps->a, newcapacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(1);
		}

		ps->a = tmp;
		ps->capacity = newcapacity;
	}

	ps->a[ps->top] = x;
	ps->top++;

	return;
}

void STPop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));

	ps->top--;
}

STDataType STTop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));

	return ps->a[ps->top - 1];
}

int STSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}