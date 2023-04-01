//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct CSNode
//{
//	char data;
//	struct CSNode* lchild, * rsibling;
//}CSNode,*CSTree;
//
//void CreatCSTree(CSTree & T, char e[], int degree[], int n)
//{		
//	CSNode* pointer = new CSNode[15];
//	int i, j , d, k = 0;
//	for (i = 0; i < n; i++) 
//	{
//		pointer[i].data = e[i];
//		pointer[i].lchild = NULL;
//		pointer[i].rsibling = NULL;
//	}
//	for (i = 0; i < n; i++)
//	{
//		d = degree[i]; //结点i的度数
//		if (d) 
//		{
//			k++; //k为子女结点序号
//			pointer[i].lchild = &pointer[k]; //建立 i 与子女 k 间的链接
//			for (j = 2; j <= d; j++) 
//			{
//				k++;
//				pointer[k - 1].rsibling = &pointer[k];
//			}
//		}
//	}
//	T = pointer;
//}
//
//void Traverse(CSTree p) 
//{
//	if (p == NULL) {
//		return;
//	}
//	else {
//		Traverse(p->lchild);
//		printf("%c ", p->data);
//		Traverse(p->rsibling);
//	}
//	return;
//}
//
//int main(void)
//{
//	CSTree T;
//	int i,n;
//	char e[15];
//	int degree[15];
//	scanf("%d", &n);
//	for ( i = 0; i < n; i++)
//		scanf(" %c", &e[i]);
//	for (i = 0; i < n; i++)
//		scanf("%d", &degree[i]);
//
//	CreatCSTree(T, e, degree, n);
//	Traverse(T);
//	return 0;
//}
