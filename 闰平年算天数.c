//#include<stdio.h>
//int main()
//{
//	int a, b, c,d;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if ((a % 100 != 0 && a % 4 == 0) ||  a % 400 == 0)//»ÚƒÍ
//	{
//		if (b == 1)
//		{
//			d = c;
//			printf("%d", d);
//		}
//		else if (b == 2)
//		{
//			d =31+ c;
//			printf("%d", d);
//		}
//		else if(b<=7)
//		{
//			d = 31 + 29 + (b - 3) * 31 - (b-2) / 2 + c;
//			printf("%d", d);
//		}
//		else
//		{
//			d = 31 + 30 + (b - 3) * 31 - (b - 2) / 2 + c;
//			printf("%d", d);
//		}
//	}
//	else//∑«»ÚƒÍ
//	{
//		if (b == 1)
//		{
//			d = c;
//			printf("%d", d);
//		}
//		else if (b == 2)
//		{
//			d = 31 + c;
//			printf("%d", d);
//		}
//		else if(b<=7)
//		{
//			d = 31 + 28 + (b - 3) * 31 - (b - 2) / 2 + c;
//			printf("%d", d);
//		}
//		else
//		{
//			d = 31 + 29 + (b - 3) * 31 - (b - 2) / 2 + c;
//			printf("%d", d);
//		}
//	}
//	return 0;
//}