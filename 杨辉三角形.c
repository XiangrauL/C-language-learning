//#include<stdio.h>
//int main()
//{
//	int i, j, k, n,t, a[13] = {1};
//	scanf_s("%d", &n);
//	
//	for (j=0; j<= n; j++)
//	{
//		for (i = 0; i <n-j; i++)
//		{
//			printf("  ");
//		}
//		t = 0;
//		for (i =0; i < j+1; i++)//倒三角相加
//		{
//			 k= a[i];
//			a[i] = t + k;//每个数是上面两数之和
//			t = k;
//
//			printf("%4d", a[i]); 
//		}
//
//		printf("\n");
//	}
//	return 0;
//}