//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	int a[100001], b[100001];
//	int n,i;
//	int* c = a, * d = b;
//
//	scanf_s("%d",&n);
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &a[i]);
//	for (i = 0; i < n; i++)
//		scanf_s("%d", &b[i]);
//
//	n = n - 1;
//	while (n--)
//	{
//		if (*c < *d)
//		{
//			c++;
//		}
//		else
//		{
//			d++;
//		}
//	}
//	if (*c < *d)
//		printf("%d",*c);
//	else
//		printf("%d",*d);
//	return 0;
//}