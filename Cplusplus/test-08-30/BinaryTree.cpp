#include <bits/stdc++.h>

using namespace std;

typedef int BTDataType;

typedef struct BinaryTreeNode
{
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
    BTDataType val;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
    BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
    if(newnode == NULL)
    {
        perror("malloc fail");
        exit(1);
    }

    newnode->val = x;
    newnode->left = newnode->right = NULL;

    return newnode;
}

BTNode* CreatBinaryTree()
{
    BTNode* n1 = BuyNode(1);
    BTNode* n2 = BuyNode(2);
    BTNode* n3 = BuyNode(3);
    BTNode* n4 = BuyNode(4);
    BTNode* n5 = BuyNode(5);
    BTNode* n6 = BuyNode(6);

    n1->left = n2;
    n1->right = n4;
    n2->left = n3;
    n4->left = n5;
    n4->right = n6;

    return n1;
}

// 前序遍历
void PreOrder(BTNode* root)
{
    if(root == NULL)
    {
        cout << "N" << " ";
        return ;
    }

    cout << root ->val << " ";
    PreOrder(root->left);
    PreOrder(root->right);

}

// 中序遍历
void InOrder(BTNode* root)
{
    if(root == NULL)
    {
        cout << "N" << " ";
        return ;
    }

    InOrder(root->left);
    cout << root ->val << " ";
    InOrder(root->right);
}

// 后序遍历
void PostOrder(BTNode* root)
{
    if(root == NULL)
    {
        cout << "N" << " ";
        return ;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout << root ->val << " ";
}

int main()
{
    BTNode* n = CreatBinaryTree();
    PreOrder(n);
    cout << endl;
    InOrder(n);
    cout << endl;
    PostOrder(n);
    return 0;
}