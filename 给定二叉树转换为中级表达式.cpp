//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct BiNode
//{
//	char data;
//	struct BiNode* lchild, * rchild;
//}BiNode,*BiTree;
//
//int CreatBiTree(BiTree &T)
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch == '#')
//		T = NULL;
//	else
//	{
//	//if (!(T = (BiNode*)malloc(sizeof(BiNode))))
//	//		exit(1);
//	T = (BiNode*)malloc(sizeof(BiNode));//ÉêÇëÄÚ´æ
//    if (T == NULL)    //ÈôÉêÇëÊ§°Ü
//    {
//        printf("ERROR");
//        exit(0);
//    }
//		T->data = ch;
//		CreatBiTree(T->lchild);
//		CreatBiTree(T->rchild);
//	}
//	return 1;
//}
//
//void BiTreeToExp(BiTree root, int deep)
//{
//	if (root == NULL)
//		return;
//	else if (root->lchild == NULL && root->rchild == NULL)
//		printf("%c", root->data);
//	else
//	{
//		if (deep > 1)printf("(");
//		BiTreeToExp(root->lchild, deep + 1);
//		printf("%c", root->data);
//		BiTreeToExp(root->rchild, deep + 1);
//		if (deep > 1)printf(")");
//	}
//}
//
//int main(void)
//{
//	BiNode *B=NULL;
//	CreatBiTree(B);
// 	BiTreeToExp(B, 1);
//	return 0;
//}
//
////int PrintElement(char e)
////{
////	printf("%c", e);
////	return 1;
////}
////
////int PreOrderTraverse(BiTree T,int *PrintElement(char e))
////{
////	if (T)
////	{
////		if (PrintElement(T->data))
////		{
////			if (PreOrderTraverse(T->lchild,PrintElement))
////			{				
////				if (PreOrderTraverse(T->rchild, PrintElement))
////					return 1;
////			}
////		}
////	return 0;
////	}
////	else
////	return 1;
////}ÏÈÐò±éÀú
//
////int InOrderTraverse(BiTree T, int* PrintElement(char e))
////{
////	BiTree p;
////	InitStack(S); p = T;
////	while (p||!StcakEmpty(S))
////	{
////		if (p)
////		{
////			Push(S, p);
////			p = p->lchild;
////		}
////		else
////		{
////			Pop(S, p); 
////			if(!PrintElement(p->data)) 
////				return 0;
////			p = p->rchild;
////		}
////	}
////}ÖÐÐò±éÀú
//
////void BiTreeToE(BiTree root)
////{
////	BiTreeToExp(root, 1);
////}
//
