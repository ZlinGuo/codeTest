
#include<iostream>
using namespace std;
typedef struct BiNode{				
	char data;
	struct BiNode *lchild,*rchild;
}BiTNode,*BiTree;


void CreateBiTree(BiTree &T){	
	
	char ch;
	cin >> ch;
	if(ch == '#') {
        T=NULL;
        }			
	else{							
		T=new BiTNode;
		T->data=ch;					
		CreateBiTree(T->lchild);	
		CreateBiTree(T->rchild);	
	}								
}									
// 中序遍历
void InOrderTraverse(BiTree T){  
	
	if(T){
		InOrderTraverse(T->lchild);
		cout << T->data;
		InOrderTraverse(T->rchild);
	}
}
// 前序遍历
void PreorderTraverse(BiTree T){  
	
	if(T){
		cout << T->data;
		PreorderTraverse(T->lchild);
		PreorderTraverse(T->rchild);
	}
}
// 后序遍历
void PostorderTraverse(BiTree T){  
	
	if(T){
		PostorderTraverse(T->lchild);
		PostorderTraverse(T->rchild);
        cout << T->data;
	}
}

int Depth(BiTree T) {
    if(T == NULL) {
        return 0;
    }
    else {
        int m = Depth(T->lchild);
        int n = Depth(T->rchild);
        if(m > n) {
            return(m + 1);
        }
        else {
            return (n + 1);
        }
    }
}

int main(){
	BiTree tree;
	CreateBiTree(tree);
    
    int ret = Depth(tree);
    cout << "深度:" << ret << endl;

    if(tree != NULL)
    {
        cout << "前序遍历: ";
        PreorderTraverse(tree); 
	    cout<<endl;
	
        cout<<"中序遍历：";
        InOrderTraverse(tree);
        cout << endl;

        cout<<"后序遍历: ";
        PostorderTraverse(tree);
        cout << endl;
    }

    return 0;
}
