//#include<stdio.h>
//#include<stdlib.h>
//
//void Quicksort(int* arr, int begin, int end)
//{
//	if (begin > end)
//		return;
//	int temp = arr[begin];
//	int i = begin;
//	int j = end;
//	while (i!=j)
//	{
//		while (arr[j] >= temp && i < j)
//			j--;
//		while (arr[i] <= temp && i < j)
//			i++;
//		if (i < j)
//		{
//			int t = arr[i];
//			arr[i] = arr[j];
//			arr[j] = t;
//		}
//	}
//	arr[begin] = arr[i];
//	arr[i] = temp;
//	Quicksort(arr, begin, i - 1);
//	Quicksort(arr, i + 1, end);
//}//¿ìËÙÅÅÐò
//
//
//int main(void)
//{
//	int n,i,j,min;
//	int a[100];
//	int b[100];
//	scanf_s("%d", &n);
//	min = 1;
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &a[i]);
//
//	Quicksort(a, 0, n - 1);
//
//	for (i=0,j=0;i<n;i++)
//	{
//		if (a[i] > 0)
//		{
//			b[j++] = a[i];
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		if (b[i] > min)
//		{
//			printf("%d", min);
//			return 0;
//		}
//		if (b[i] == min)
//			min++;
//	}
//	printf("%d", min);
//	return 0;
//}