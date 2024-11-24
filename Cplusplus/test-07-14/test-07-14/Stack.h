#pragma once

#include <bits/stdc++.h>

using namespace std;

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void STInit(ST* ps);
void STDestroy(ST* ps);

void STPush(ST* ps, STDataType x);
void STPop(ST* ps);

STDataType STTop(ST* ps);
int STSize(ST* ps);
bool STEmpty(ST* ps);
