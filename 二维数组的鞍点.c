//#include<stdio.h>
//int main()
//{
//	int i, j, k=0,p=0,q,m,n,v, flag=0,max, min, a[10][10], c[20][20],count=0;
//	scanf_s("%d%d", &n, &m);
//	for (i = 0; i < n; i++)			
//	for (j = 0; j < m; j++)
//	scanf_s("%d",&c[i][j]);
//	
//	for (i = 0; i < n; i++)
//	{	max = c[i][0];
//		for (j= 0; j< m;j++)
//		{			
//				if (max < c[i][j])
//				{
//				max = c[i][j];
//					
//				}		
//		}
//		//printf("%d\n", max);
//		for (q = 0; q < m; q++)
//		{
//				if (max == c[i][q])
//				{
//				a[k][0] = i;
//				a[k++][1] = q;
//				count++;
//			
//			//	printf("%d %d %d %d \n", i,q,k,count);
//				}
//		}
//		//printf("%d %d %d \n\n", a[1][1],a[2][1], k-1);
//		
//		
//		//count = 0;
//	}for (p = 0,k = 0; p <count; p++)
//		{
//			min = c[a[k][0]][a[k][1]];
//			
//		//	printf("%d\n\n\n",c[a[k][0]][a[k][1]] );// 
//			for (v = 0; v < n; v++)
//			{
//				if (min > c[v][a[k][1]])
//				{
//					min = c[v][a[k][1]];
//				}
//			
//			}
//			//printf("%d \n\n\n", k);
//			//printf("%d  ", i + 1);						
//			if (min == c[a[k][0]][a[k][1]])//a[k++][1]
//			{
//				printf("%d ", c[a[k][0]][a[k][1]]);
//				printf("%d ", a[k][0] +1);
//				printf("%d ", a[k][1]+1);
//				printf("\n");
//				flag = 1;
//			}	
//			k++;
//		}
//	if (flag == 0) printf("No answer");
//	
//	return 0;
//}