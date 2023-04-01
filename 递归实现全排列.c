//#include<stdio.h>		//递归实现全排列
//#include<stdlib.h>
//
//int zhengchu(int a[]);
//void swap(int a[], int m, int n);
//void fullpermatation(int a[], int begin, int end);
//
//int count = 0;
//
//int zhengchu(int a[])
//{
//    // if(a[0]==0||a[5]==0||a[9]==0)有点不懂，不算这个，答案才对--->>懂了，0可以放在第一位，这样就是一个四位数除五位数，或五位数除四位数
//   //  return 0;
//    if ((a[0] * 10000 + a[1] * 1000 + a[2] * 100 + a[3] * 10 + a[4]) % (a[5] * 10000 + a[6] * 1000 + a[7] * 100 + a[8] * 10 + a[9]) == 0)
//        return 1;
//    else
//        return 0;
//}
//
//void swap(int a[], int m, int n)
//{
//    int temp;
//    temp = a[m];
//    a[m] = a[n];
//    a[n] = temp;
//}
//
//void fullpermatation(int a[], int begin, int end)//利用递归实现全排列
//{
//    if (begin == end)
//    {
//        if (zhengchu(a))
//        {
//            count++;
//            return;
//        }
//        return;
//    }
//
//    for (int i = begin; i <= end; i++)
//    {
//        swap(a, begin, i);//将第i个元素换到begin
//        fullpermatation(a, begin + 1, end);//将剩下的元素从begin+1到最后进行全排列
//        swap(a, begin, i);//还原交换的数
//    }
//}
//
//int main(void)
//{
//    int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    fullpermatation(a, 0, 9);
//    printf("%d", count);
//    return 0;
//}
// 
// 
//#include<stdio.h>
//int judge(int a, int b)         //判断两个数是不是由十个数字排列组合而成
//{
//	int p[10] = { 11 };           //设置一个数组，用来存放数字；初始化数组，数组中不能出现的数值至少应该大于等于十，否则会对接下来的求位数造成干扰；
//	int m = 0;                 //过度变量
//	for (int i = 0; i < 5; i++)     //用循环的方法依次求出五位数a的各个位数
//	{
//
//		m = a % 10;            //求余，取余数
//		p[m] = m;           //将对应的数字放到数组中对应的位置，如a[1]=1
//		a = a / 10;          //求下一位的数字
//	}
//	for (int j = 0; j < 5; j++)          //求形参b的各位数字
//	{
//		m = b % 10;
//		p[m] = m;
//		b = b / 10;
//	}
//	for (int k = 0; k < 10; k++)       //判断a和b的各位数字是否有重复
//	{
//		if (p[k] != k)          //若有重复，则必有a[n]=11;其中n属于0-9；
//			return 0;
//	}
//	return 1;            //若各位数字都不同，则返回1
//}
//
//int main()
//{
//	int n, i;
//	int sum = 0;       //累计次数，并初始化
//	for (i = 2; i <= 79; i++)     //求i范围内的循环
//		for (n = 1234; n * i <= 98765; n++)        //嵌套循环，两个五位数相除变为分母乘以商，并控制循环范围
//			if (judge(n, i * n))      //判断
//				sum = sum + 1;
//	printf("%d\n", sum);
//}
//#include<stdio.h>				//直角三角形
//#include<stdlib.h>
//
//int main()
//{
//    int i, j, k, l, m, n, count = 0;
//    scanf_s("%d", &n);
//    for (m = 0; m < n; m++)
//    {
//        scanf_s("%d", &l);
//        for (i = 1; i < l / 3; i++)
//        {
//            for (j = i; j < l / 2; j++)
//            {
//                k = l - i - j;
//                if (i * i + j * j == k * k)
//                {
//                    count++;
//                }
//            }
//        }
//        printf("%d\n", count);
//        count = 0;
//    }
//
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//#include<stdio.h>					//队伍选派
//#include <stdlib.h>
//
//int main()
//{
//    int a[8] = {0};
//    int T, c, d, sum, count = 0;
//    int i, j, k, m, n;
//    scanf_s("%d", &T);
//    for (i = 0; i < T; i++)
//    {
//        count = 0;
//        scanf_s("%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]);
//        sum = a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7];
//        for (j = 0; j <= 4; j++)
//            for (k = j + 1; k <= 5; k++)
//                for (m = k + 1; m <= 6; m++)
//                    for (n = m + 1; n <= 7; n++)
//                    {
//                        c = a[j] + a[k] + a[m] + a[n];
//                        d = sum - c;
//                        if (c > d)
//                        {
//                            count++;
//                        }
//                    }
//        printf("%d\n", count);
//    }
//    return 0;
//}
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>				//火柴棒等式
//#include<stdlib.h>
//
//int gsum(int x);
//
//int a[2000];
//int b[10] = { 6,2,5,5,4,5,6,3,7,6 };//用下标表示数字,元素代表火柴个数
//
//int gsum(int x)
//{
//    int sum = 0, i = 0;
//    if (x == 0)return 6;
//    while (x > 0)//给10-1000的每个下标赋值
//    {
//        i = x % 10;
//        x = x / 10;
//        sum = sum + b[i];
//    }
//    return sum;
//}
//int main()
//{
//    int n, i, j, k, count = 0;
//    for (i = 0; i <= 9; i++)
//        a[i] = b[i];
//    for (int i = 10; i < 2000; i++)
//        a[i] = gsum(i);
//
//
//    while (scanf_s("%d", &n) != EOF)
//    {
//        count = 0;
//        n = n - 4;//减去加号和等号
//        for (i = 0; i < 1000; i++)
//            for (j = 0; j < 1000; j++)
//            {
//                k = i + j;
//                if (a[i] + a[j] + a[k] == n)
//                {
//                    count++;
//                }
//            }
//        printf("%d\n\n", count);
//    }
//}
//
//
///*请在上方填写你的代码,仅需提交填写的部分*/
//
