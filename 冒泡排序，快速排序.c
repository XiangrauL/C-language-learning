//#include<stdio.h>
//int main()
//{
// int i,j,a[5];
	//for(i=0;i<5;i++)
	//	for (j = 0; j < 5-i; j++)
	//	{
	//		if (a[j] < a[j+ 1] )
	//		{
	//			t = a[j];
	//			a[j] = a[j + 1];
	//			a[j + 1] = t;
	//		}
	//	}//Ã°ÅÝÅÅÐò
// return 0;
//}
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
