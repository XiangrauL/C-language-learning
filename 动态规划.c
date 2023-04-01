//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[100005] = { 0 }, n, i;
//	scanf_s("%d\n", &n);
//	for (i = 0; i < n; i++)
//	scanf_s("%d", &a[i]);
//	printf("%d",maxsum(n, a));
//	return 0;
//}
//
//int maxsum(int n, int* a)//Ì°ÐÄËã·¨
//{
//	int max = 0, b = a[0];
//	for (int i = 1; i <= n; i++)
//	{
//		if (b > 0)
//			b = b + a[i];
//		else
//			b = a[i];
//		if (b > max)
//			max = b;
//	}
//	return max;
//}
