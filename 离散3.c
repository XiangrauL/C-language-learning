//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//#define BIG 1000
//
//int* select(int* a, int n)
//{
//	int i = 0, j = 1, m = 1;
//
//	while (a[i] == BIG)
//	{
//		i++; j++;
//	}
//	while (a[j] == BIG)
//	{
//		j++;
//	}
//
//
//	if (a[i] <= a[j])
//	{
//		if (a[j + 1] < a[j] && a[j + 1] >= a[i])
//		{
//			a[j+1] = a[i] + a[j+1];
//			a[i] = BIG;
//		}
//		else if (a[j + 1] < a[j] && a[j + 1] < a[i])
//		{
//			a[i] = a[i] + a[j + 1];
//			a[j + 1] = BIG;
//		}
//		else
//		{
//			a[j] = a[i] + a[j];
//			a[i] = BIG;
//
//		}
//		
//	}
//	else if (a[i] > a[j])
//	{
//		while (a[j + m] == BIG)
//		{
//			m++;
//		}
//		if (a[i] > a[j + m])
//		{
//			if (a[j] > a[j + m + 1])
//			{
//				a[j + m+1] = a[j+m] + a[j + m+1];//1 4 6 7 9 3 8 17 13 15
//				a[j+m] = BIG;
//			}
//			
//			
//			else
//			{
//				a[j + m] = a[j] + a[j + m];
//							a[j] = BIG;
//			}
//			
//		}
//		else if (a[i] > a[j + m + 1])
//		{
//			a[j + m + 1] = a[j] + a[j + m + 1];
//			a[j] = BIG;
//		}
//		else
//		{
//			a[i] = a[i] + a[j];
//			a[j] = BIG;
//		}
//	}
//
//	return a;
//}
//
//
//int main()
//{
//	int i, j, n, temp;
//	int a[20];
//
//	memset(a, 1, sizeof(a));
//
//	printf("输入权值个数；");
//	scanf_s("%d", &n);
//
//	printf("请输入权值；");
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &a[i]);
//
//	for (i = 0; i < n - 1; i++)//冒泡排序 
//		for (j = 0; j < n - i-1; j++)
//			if (a[j] > a[j+1])
//			{
//				temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//			}
//
//	for (j = 0; j < n; j++)
//		printf("%d\t", a[j]);
//
//	printf("\n");
//
//	for (i = 0; i < n - 1; i++)
//	{
//		select(a, n);
//		for (j = 0; j < n; j++)
//		{
//			if (a[j] == BIG)
//			{
//				printf("\t");
//			}
//			else
//				printf("%d\t", a[j]);
//
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
