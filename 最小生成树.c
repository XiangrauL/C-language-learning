//#include<stdio.h>
//#include<stdlib.h>
//
//struct Edge
//{
//	int v1, v2;//边的两个顶点
//	int weight;//边的权重
//};
//
//int findroot(int *parent, int v);
//
//int main()
//{
//	struct Edge e[13] = { 1,4,1, 2,4,1 , 5,7,1 , 1,6,2 , 2,3,2 , 2,5,2 , 4,7,2 , 6,7,2 , 7,8,2 , 1,2,3 , 2,7,3 , 3,8,3 , 3,5,4 };//边集，前两个数表示顶点，第三个表示边权重
//	struct Edge T[8] = {0};
//	int parent[9] = { 0 };
//	int i,j,m,n;
//
//	for(i=0;i<9;i++)
//		parent[i] = -1;
//
//	i = 0; j = 0;
//	while (i < 8 - 1)
//	{
//		
//		m=findroot(parent,e[j].v1);
//		n=findroot(parent, e[j].v2);
//
//		if (m!=n)
//		{
//			T[i] = e[j];
//			parent[n] = m;
//			printf("(%d,%d)", e[j].v1,e[j].v2);
//			i++; j++;
//		}
//		else
//		{
//			j++;
//		}
//
//
//	}
//	return 0;
//}
//int findroot(int *parent, int v)//求根顶点
//{
//	int t = v;
//	int q = parent[t];
//	while (parent[t] > -1)
//	{
//		t = parent[t];
//	}
//	return t;
//}
