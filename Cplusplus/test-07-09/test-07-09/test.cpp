#include "SList.h"

//void Test01()
//{
//	SLTNode* node1 = (SLTNode*)malloc(sizeof(SLTNode));
//	node1->data = 1;
//	SLTNode* node2 = (SLTNode*)malloc(sizeof(SLTNode));
//	node2->data = 2;
//	SLTNode* node3 = (SLTNode*)malloc(sizeof(SLTNode));
//	node3->data = 3;
//	SLTNode* node4 = (SLTNode*)malloc(sizeof(SLTNode));
//	node4->data = 4;
//
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = NULL;
//
//	SLTNode* plist = node1;
//	SLTPrint(plist);
//}

void Test02()
{
	SLTNode* plist = NULL;
	SLTPushBack(&plist, 1);
	SLTPrint(plist);
	SLTPushFront(&plist, 222);
	SLTPrint(plist);
	//SLTPushFront(NULL, 222);
	//SLTPopBack(&plist);
	//SLTPopBack(&plist);
	//SLTPopFront(&plist);
	//SLTPopFront(&plist);

	//SLTNode* Find = SLTFind(&plist, 0);
	//if (Find)
	//{
	//	cout << "找到了" << endl;
	//}
	//else
	//{
	//	cout << "没找到" << endl;
	//}
	SLTPrint(plist);
	SListDeatroy(&plist);

}

int main()
{
	//Test01();
	Test02();
	return 0;
}