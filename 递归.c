
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>			//瓷砖铺放
//#include<stdlib.h>
//
//int N, count = 0;
//
//int diban(int sum)
//{
//    if (sum > N)
//        return;
//    if (sum == N)
//    {
//        count++;
//        return;
//    }
//    diban(sum + 1);
//    diban(sum + 2);
//}
//
//int main()
//{
//    scanf("%d", &N);
//    diban(0);
//    printf("%d", count);
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>					//棋子移动
//#include<stdlib.h>
//
//int yidong(int i)
//{
//	if (i == 4)
//	{
//		printf("4,5-->9,10\n8,9-->4,5\n2,3-->8,9\n7,8-->2,3\n1,2-->7,8\n");
//		return;
//	}
//	printf("%d,%d-->%d,%d\n", i, i + 1, 2 * i + 1, 2 * i + 2);
//	printf("%d,%d-->%d,%d\n", 2 * i - 1, 2 * i, i, i + 1);
//	yidong(i - 1);
//}
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	yidong(N);
//	return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>				//地盘划分
//#include<stdlib.h>
//
//int count = 0;
//
//quchu(int M, int N)
//{
//    if (M > N)
//    {
//        count++;
//        quchu(M - N, N);
//    }
//    else if (N > M)
//    {
//        count++;
//        quchu(M, N - M);
//    }
//    else
//    {
//        count++;
//        return;
//    }
//}
//
//int main()
//{
//    int M, N;
//    scanf("%d%d", &M, &N);
//    quchu(M, N);
//    printf("%d", count);
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>				//拆分自然数
//#include<stdlib.h>
//
//int N, count = 0, a[10000] = { 1 };
//int j = 0;
//
//void print(int t)
//{
//    printf("%d=", N);
//    for (int i = 1; i <= t-1; i++)
//    {
//        printf("%d+", a[i]);
//    }
//    printf("%d\n", a[t]);
//}
//
//int huafen(int x, int t)
//{
//    int i;
//    for (i = a[t-1]; i <= x; i++)
//    {
//        if (i<N)
//        {
//             a[t] = i;
//             x = x - i;
//             if (x == 0)
//             {
//                print(t);
//                count++;
//                return;
//             }
//             else
//             {
//                huafen(x, t + 1);x>0继续递归
//             }
//             x = x + i;//再把拆分的数加回来
//        }
//    }
//}
//
//int main()
//{
//    scanf_s("%d", &N);
//    huafen(N,1);
//    printf("%d", count);
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
//#include<stdio.h>				//数字三角形，超时了。。
//#include<stdlib.h>
//#include<math.h>
//
//int a[1001][1001], n;
//int found(int x, int y)
//{
//	if (x == n)
//	{
//		return a[x][y];
//	}
//	else {
//		return a[x][y] + fmax(found(x + 1, y), found(x + 1, y + 1));
//	}
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)//层数
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("%d", found(1, 1));//从(1,1)开始
//}
//
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//
//int a[1001][1001], b[1001][1001], n;
//int found(int x, int y)
//{
//	if (x == n)
//	{
//		return a[x][y];
//	}
//	if (b[x][y])
//	{
//		return b[x][y];//把之前算的存起来
//	}
//	b[x][y] = a[x][y] + fmax(found(x + 1, y), found(x + 1, y + 1));
//	return b[x][y];
//
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)//层数
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("%d", found(1, 1));//从(1,1)开始
//}
//
///*请在上方填写你的代码,仅需提交填写的部分*/
//
//
////#include<stdio.h>			//放苹果
//#include<stdlib.h>
//
//int fenapple(int m, int n);
//
//int fenapple(int m, int n)
//{
//    if (n == 1 || m == 0)
//        return 1;
//    if (m < n) //苹果少于盘子时，可以将多余的盘子去掉； 
//        return fenapple(m, m);
//    return fenapple(m, n - 1) + fenapple(m - n, n);//有空余盘子的情况+无空余盘子的情况； 
//}
//
//int main()
//{
//    int t, m, n;
//    scanf("%d", &t);
//    for (int i = 0; i < t; i++)
//    {
//        scanf("%d %d", &m, &n);
//        printf("%d\n", fenapple(m, n));
//    }
//    return 0;
//}
///*请在下方编写你的代码,仅需提交填写的部分*/
// 
// 
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>			//选数
//#include<stdlib.h>
//
//int prime(int n);
//void choose(int sum, int p, int left);
//
//int a[25];
//int n, k, count = 0;
//
//int prime(int n)
//{
//    int i;
//    if (n < 2)
//    {
//        return 0;
//    }
//    if (n == 2 || n == 3)
//    {
//        return 1;
//    }
//    if (n % 6 != 1 && n % 6 != 5)//孪生素数
//    {
//        return 0;
//    }
//    for (i = 5; i * i <= n; i += 6)
//    {
//        if (n % i == 0 || n % (i + 2) == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//void choose(int sum, int p, int left)
//{
//    int i;
//    if (left == 0)
//    {
//        if (prime(sum))
//            count++;
//        return;
//    }
//    else
//    {
//        for (i = p; i <= n - left; i++)
//        {
//            choose(sum + a[i], i + 1, left - 1);
//        }
//    }
//}
//
//int main()
//{
//    int i;
//    scanf("%d %d", &n, &k);
//    for (i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    choose(0, 0, k);
//    printf("%d\n", count);
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
