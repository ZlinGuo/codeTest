//#include "SeqList.h"
//
//int main()
//{
//	SL p;
//	SeqListInit(&p);
//	SeqListPushFront(&p, 0);
//	SeqListPushBack(&p, 1);
//	SeqListPushBack(&p, 2);
//	SeqListPushBack(&p, 3);
//	SeqListPushBack(&p, 4);
//
//	SeqListPushFront(&p, 0);
//
//	//SeqListPopBack(&p);
//	//SeqListPopBack(&p);
//	//SeqListPopBack(&p);
//	//SeqListPopBack(&p);
//	//SeqListPopBack(&p);
//	//SeqListPopBack(&p);
//	//SeqListPopBack(&p);
//
//	//SeqListPopFront(&p);
//	//SeqListPopFront(&p);
//	//SeqListPopFront(&p);
//
//	//SLFind(&p, 4);
//
//	SLInsert(&p, SLFind(&p, 4), 111);
//	SeqListPrint(&p);
//	SLErase(&p, SLFind(&p, 4));
//	SeqListPrint(&p);
//
//	SeqListDestroy(&p);
//	return 0;
//}


#include "Slist.h"


int main()
{
	SLTNode* st = NULL;

	SLTPushBack(&st, 1);
	SLTPushBack(&st, 2);
	SLTPushBack(&st, 3);
	SLTPushBack(&st, 4);

	SLTPushFront(&st, 0);

	SLTPrint(st);

	//SLTPopBack(&st);
	//SLTPopBack(&st);
	//SLTPopBack(&st);
	//SLTPopBack(&st);
	//SLTPopBack(&st);
	//SLTPopBack(&st);

	//SLTPopFront(&st);
	//SLTPopFront(&st);
	//SLTPopFront(&st);
	//SLTPopFront(&st);
	//SLTPopFront(&st);
	//SLTPopFront(&st);

	SLTNode* FindRet = SLTFind(&st, 3);
	if (FindRet) {
		printf("找到了！\n");
	}
	else {
		printf("未找到！\n");
	}
	SLTInsert(&st, FindRet, 100);
	SLTInsertAfter(FindRet, 100);
	
	// 删除指定位置的节点
	SLTErase(&st, FindRet);
	SLTPrint(st);
	return 0;
}