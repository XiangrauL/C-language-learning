//#include<stdio.h>
//#include<stdlib.h>
//
//int A[6][6];//�洢��ʼ����
//int B[6][6];//�洢�ڽӵ�
//int cd[6];//ÿ����ĳ���
//int visit[6] = {0};
//int topo[6];
//int t=0;//���˼�����
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
//	topo[t++] = v;//�޸�Ϊ������������V1���Ϊ0��V2���Ϊ1���������ƣ�V6���Ϊ5��
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
//	}//��������ڽӾ���
//	
//		DFS(5);//���ж���������Ϊ0������������ֵС�Ķ���
//		DFS(0);
//	for (i = 5; i >= 0; i--)
//		printf("%d ", topo[i]);
//	return 0;
//}