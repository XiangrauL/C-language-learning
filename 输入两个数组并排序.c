//#include <stdio.h>
//#define N 1000
//#define M 1000
//int main()
//{
//	int c1,c2,m,i,j,a[N], b[M];
//	scanf_s("%d",&c1);
//	for(i=0;i<c1;i++)
//	scanf_s("%d", &a[i]);
//
//	scanf_s("%d", &c2);
//	for (i = 0; i < c2; i++)
//	scanf_s("%d", &b[i]);
//
//    m = c1 + c2 - 1;
//
//    for (i = c1-1,j=c2-1; i >=0||j>=0 ; )
//    {
//		if(i==-1) a[m--]= b[j--];
//
//		else if (j == -1) a[m--] = a[i--];
//
//        else if (  a[i]<=b[j])
//            a[m--] = b[j--];
//        else
//            a[m--] = a[i--];
//    }
//	for (m = 0; m < c1 + c2; m++)
//	{
//		if (m == c1 + c2 - 1)
//		{
//			printf("%d", a[m]); 
//			break;
//		}
//		printf("%d ", a[m]);
//		
//	}return 0;
//}