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
    BTNode* n7 = BuyNode(7);


    n1->left = n2;
    n1->right = n4;
    n2->left = n3;
    n4->left = n5;
    n4->right = n6;
    n5->left = n7;
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

// 计算树的节点个数
int TreeSize(BTNode* root)
{
    if(!root)
    {
        return 0;
    }

    return TreeSize(root->left) + TreeSize(root->right) + 1;
}

// 计算树的高度
int TreeHeight(BTNode* root)
{
    if(!root)
        return 0;
    
    return max(TreeHeight(root->left), TreeHeight(root->right)) + 1;
}

// 计算第k层有多少个节点
int TreeLevel(BTNode* root, int k)
{
    if(k ==  1 && root)
    {
        return 1;
    }

    if(!root)
    {
        return 0;
    }

    return TreeLevel(root->left, k - 1) + TreeLevel(root->right, k - 1);
}

// 查找x所在的节点
BTNode* TreeFind(BTNode* root, int x)
{
    if(!root)
    {
        return NULL;
    }

    if(root->val == x)
    {
        return root;
    }

    BTNode* ret1 = TreeFind(root->left, x);
    if(ret1)
    {
        return ret1;
    }

    BTNode* ret2 = TreeFind(root->right, x);
    if(ret2)
    {
        return ret2;
    }

    return 0;
}

int main()
{
    BTNode* n = CreatBinaryTree();
    PreOrder(n);

    cout << endl;
    InOrder(n);

    cout << endl;
    PostOrder(n);

    cout << endl;
    cout << TreeHeight(n);

    cout << endl;
    cout << TreeLevel(n, 5);

    cout << endl;
    cout << TreeSize(n);
    return 0;
}