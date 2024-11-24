#include <bits/stdc++.h>
using namespace std;

typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;

ListNode* BuyNode(int x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->val = x;
	newnode->next = NULL;

	return newnode;
}

ListNode* creatList(int n)
{
	ListNode* phead = BuyNode(1);
	ListNode* ptail = phead;
	for (int i = 2; i <= n; i++)
	{
		ptail->next = BuyNode(i);
		ptail = ptail->next;
	}
	ptail->next = phead;
	return phead;
}

int ysf(int n, int m) {
	// write code here
	ListNode* head = creatList(n);
	ListNode* pcur = head;
	ListNode* prev = NULL;

	int count = 1;
	while (pcur->next != pcur)
	{
		if (count == m)
		{
			prev->next = pcur->next;
			free(pcur);
			pcur = prev->next;
			count = 1;
		}
		else
		{
			prev = pcur;
			pcur = pcur->next;
			count++;
		}
	}
	return pcur->val;
}

int main()
{
	int ans = ysf(5, 3);
	cout << ans << endl;
	return 0;
}