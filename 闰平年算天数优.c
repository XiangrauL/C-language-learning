//#include<stdio.h>
//int run(int a);
//int main()
//{
//	int a, b, c,i,sum=0;
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	scanf_s("%d%d%d",&a,&b,&c);
//	for (i = 0; i < b-1; i++)
//		sum = sum + days[i];
//	if (run(a))
//	{
//		if (b > 2)
//			sum = sum + c + 1;
//		else
//			sum = sum + c;
//		printf("%d\n", sum);
//	}
//	else
//	{
//		sum = sum + c;
//		printf("%d\n",sum);
//	}
//	return 0;
//}
//int run(int a)
//{
//	if ((a % 100 != 0 && a % 4 == 0 )|| a % 400 == 0)//ÈòÄê
//		return 1;
//	return 0;
//}