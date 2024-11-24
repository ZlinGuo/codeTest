#include "List.h"

void Test01()
{
	Listnode* plist = LTInit();//ÉÚ±øÎ»

	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);


	LTPushFront(plist, 0);

	LTPopBack(plist);
	Print(plist);
	LTPopFront(plist);
	Print(plist);
	/*LTPopFront(plist);
	Print(plist);
	LTPopFront(plist);
	Print(plist);
	LTPopFront(plist);
	Print(plist);
	LTPopFront(plist);
	Print(plist);*/

	/*LTPopBack(plist);
	Print(plist);
	LTPopBack(plist);
	Print(plist);
	LTPopBack(plist);
	Print(plist);
	LTPopBack(plist);
	Print(plist);
	LTPopBack(plist);
	Print(plist);*/
}

int main()
{
	Test01();
	return 0;
}