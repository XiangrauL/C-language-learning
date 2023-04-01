//#include<stdio.h>
//#include<stdlib.h>
//
//int A[6][6];//存储初始矩阵
//int B[6][6];//存储邻接点
//int cd[6];//每个点的出度
//int visit[6] = {0};
//int topo[6];
//int t=0;//拓扑计数器
//void DFS(int v)
//{
//	for (int i = 0; i < cd[v]; i++)
//	{
//		int k = B[v][i];
//		if (!visit[k])
//		{
//			visit[k] = 1;
//			DFS(k);
//		}
//	}
//	topo[t++] = v;//修改为顶点名：顶点V1编号为0，V2编号为1，依次类推，V6编号为5。
//}
//
//int main(void)
//{
//	int i, j, sum;
//	for(i=0;i<6;i++)
//	{
//		sum=0;
//		for (j = 0; j < 6; j++)
//		{	
//			scanf("%d", &A[i][j]);
//			sum = sum + A[i][j];
//		}
//		cd[i] = sum;
//	}
//
//	int n;
//	for (i = 0; i < 6; i++)
//	{
//		n = 0;
//		for (j = 0; j < 6; j++)
//		{
//			if (A[i][j])
//			{
//				B[i][n++] = j;
//			}
//		}
//	}//构建点的邻接矩阵
//	
//		DFS(5);//若有多个顶点入度为0，则先输出标号值小的顶点
//		DFS(0);
//	for (i = 5; i >= 0; i--)
//		printf("%d ", topo[i]);
//	return 0;
//}