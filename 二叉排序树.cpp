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
////	int bf;//ƽ������
////	struct BSTNode* lchild, * rchild;
////}BSTNode,*BSTree;//����ƽ����
//
//typedef struct BiNode
//{
//	char data;
//	struct BiNode* lchild, * rchild;
//}BiNode,*BiTree;
//
//int SearchBST(BiTree T, int key, BiTree f, BiTree& p)//���ҳɹ�pָ���Ԫ�أ�����1�����Ҳ��ɹ�pָ��*·��*�Ϸ��ʵ����һ���ڵ㣬����0
//{
//	if (!T) { p = f; return 0; }
//	else if EQ(key, T->data) { p = T; return 1; }
//	else if LT(key, T->data) return SearchBST(T->lchild, key, T, p);//���������м�������
//	else return SearchBST(T->rchild, key, T, p);	//���������м�������
//}
//
//BiTree p;
//BiTree s;
//
//int InsertBST(BiTree& T, int e)
//{
//	if (!SearchBST(T, e, NULL, p))//δ���ҵ���e��ͬ��Ԫ�أ����Բ���
//	{
//		s = (BiTree)malloc(sizeof(BiNode));
//		s->data = e;
//		s->lchild = s->rchild = NULL;
//		if (!p) T = s;//��ʼΪ����
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