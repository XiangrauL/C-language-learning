//#include<stdio.h>
//int main()
//{
//	int i,j,k,u,max,min, a[3], b[4],c[3][4];
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 4; j++)
//	scanf_s("%d",&c[i][j]);
//	for (i = 0; i < 3; i++)
//	{	
//		max = c[i][0];
//		for (j = 0;j< 4; j++)
//		{		
//			if (max < c[i][j])
//			{
//				max = c[i][j];
//			}
//		}
//		a[i] = max;
//	}
//	for (j = 0; j < 4; j++)
//	{		
//		min = c[0][j];
//		for (i = 0; i < 3;i++)
//		{			
//			if (min >c[i][j])
//			{
//				min = c[i][j];
//			}
//		}
//		b[j] = min;
//	}
//	for (i = 0; i < 3; i++)
//		printf("%4d", a[i]);
//	printf("\n");
//	for (i = 0; i < 4; i++)
//		printf("%4d",b[i]);
//	
//	return 0;
//}