//#include<stdio.h>
//#include<stdlib.h>
//
//#define EQ(a,b) ((a)==(b))
//#define LT(a,b) ((a)<(b))
//#define LQ(a,b) ((a)<=(b))
//
////typedef struct BSTNode 
////{
////	int data;
////	int bf;//平衡因子
////	struct BSTNode* lchild, * rchild;
////}BSTNode,*BSTree;//二叉平衡树
//
//typedef struct BiNode
//{
//	char data;
//	struct BiNode* lchild, * rchild;
//}BiNode,*BiTree;
//
//int SearchBST(BiTree T, int key, BiTree f, BiTree& p)//查找成功p指向该元素，返回1，查找不成功p指向*路径*上访问的最后一个节点，返回0
//{
//	if (!T) { p = f; return 0; }
//	else if EQ(key, T->data) { p = T; return 1; }
//	else if LT(key, T->data) return SearchBST(T->lchild, key, T, p);//在左子树中继续查找
//	else return SearchBST(T->rchild, key, T, p);	//在右子树中继续查找
//}
//
//BiTree p;
//BiTree s;
//
//int InsertBST(BiTree& T, int e)
//{
//	if (!SearchBST(T, e, NULL, p))//未查找到和e相同的元素，可以插入
//	{
//		s = (BiTree)malloc(sizeof(BiNode));
//		s->data = e;
//		s->lchild = s->rchild = NULL;
//		if (!p) T = s;//初始为空树
//		else if LT(e, p->data) p->lchild = s;
//		else p->rchild = s;
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main(void)
//{
//	BiTree T;
//	BiTree temp;
//	int e;
//	scanf("%d", &e);
//	InsertBST(T, 8);
//	InsertBST(T, 20);
//	InsertBST(T, 35);
//	InsertBST(T, 40);
//	InsertBST(T, 60);
//	InsertBST(T, 100);
//	InsertBST(T, e);
//
//	while (T)
//	{
//		if (!T->lchild)
//		{
//			printf("%d ", T->data);
//			T = T->rchild;
//		}
//		else
//		{
//			temp = T;
//			T = T->lchild;
//			printf("%d ", T->data);
//			printf("%d ", temp->data);
//			T = temp->rchild;
//		}
//	}
//	
//
//	return 0;
//}