#include <bits/stdc++.h>
using namespace std;


// //Definition for singly-linked list.
// struct ListNode 
// {
//  int val;
//  struct ListNode *next;
// };
// 
//
//typedef struct ListNode ListNode;
//
//struct ListNode* reverseList(struct ListNode* head) {
//    ListNode* node = NULL;
//    //node = NULL;
//    ListNode* pcur = head;
//    while (pcur)
//    {
//        ListNode* tmp = pcur;
//        pcur = pcur->next;
//        if (node == NULL)
//        {
//            node = tmp;
//        }
//        else
//        {
//            tmp->next = node;
//            node = tmp;
//        }
//    }
//    return node;
//}


 //Definition for singly-linked list.
// struct ListNode 
// {
//    int val;
//    struct ListNode *next;
// };
//
//typedef struct ListNode ListNode;
//struct ListNode* reverseList(struct ListNode* head) {
//    if (!head)
//    {
//        return head;
//    }
//    ListNode* n1, * n2, * n3;
//    n1 = NULL;
//    n2 = head;
//    n3 = head->next;
//    while (n2)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        if (n3)
//        {
//            n3 = n3->next;
//        }
//    }
//    return n1;
//}


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };

typedef struct ListNode ListNode;

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (!list1)
    {
        return list2;
    }
    if (!list2)
    {
        return list1;
    }
    ListNode* l1, * l2;
    l1 = list1, l2 = list2;
    ListNode* newHead = NULL, * newTail = NULL;
    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            if (newHead == NULL)
            {
                newHead = newTail = l1;
            }
            else
            {
                newTail->next = l1;
                newTail = newTail->next;
            }
            l1 = l1->next;
        }
        else
        {
            if (newHead == NULL)
            {
                newHead = newTail = l2;
            }
            else
            {
                newTail->next = l2;
                newTail = newTail->next;
            }
            l2 = l2->next;
        }
    }
    if (l1)
    {
        newTail->next = l1;
    }
    if (l2)
    {
        newTail->next = l2;
    }
    return newHead;
}
int main()
{

    return 0;
}