//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int i = 0, n, min = 0;		//隐藏口令，超时了。。
//	scanf("%d", &n);
//	char a[n + 1];
//	char t;
//	while (t = getchar())
//	{
//		if (t == EOF)
//		{
//			break;
//		}
//		if (t != 10)
//		{
//			a[i++] = t;
//		}
//	}
//	a[n] = '\0';
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] < a[min])
//		{
//			min = i;
//		}
//		if (a[i] == a[min])
//		{
//			int j = 1;
//			for (j; j <= n; j++)
//			{
//				if (a[(i + j) % n] != a[(min + j) % n])
//				{
//					break;
//				}
//			}
//			if (a[(i + j) % n] < a[(min + j) % n])
//			{
//				min = i;
//			}
//		}
//	}
//	printf("%d", min);
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	int i = 0, j, k, L;
//	scanf("%d", &L);
//	char s[L + 1];
//	char t;
//	while (t = getchar())
//	{
//		if (t == EOF)
//		{
//			break;
//		}
//		if (t != '\n')
//		{
//			s[i++] = t;
//		}
//	}
//	s[L] = '\0';
//	j = 1;
//	for (i = 0; i < L && j < L && k < L; k = 0)//重新比
//	{
//		while (s[(i + k) % L] == s[(j + k) % L] && k < L)
//			k++;
//		if (k == L)
//		{
//			break;
//		}
//		if (s[(i + k) % L] > s[(j + k) % L])
//		{
//			i = i + k + 1;
//		}
//		else
//		{
//			j = j + k + 1;
//		}
//		if (i == j)//重合了
//		{
//			j++;
//		}
//	}
//	if (i < j)
//		printf("%d", i);
//	else
//		printf("%d", j);
//}

/*请在下方编写你的代码,仅需提交填写的部分*/

///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>				//笨小猴
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//
//int prime(int n)
//{
//	int i;
//	if (n < 2)
//	{
//		return 0;
//	}
//	if (n == 2 || n == 3)
//	{
//		return 1;
//	}
//	if (n % 6 != 1 && n % 6 != 5)//孪生素数
//	{
//		return 0;
//	}
//	for (i = 5; i <= sqrt(n); i += 6)
//	{
//		if (n % i == 0 || n % (i + 2) == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void sort(int* arr, int len)//冒泡排序比较数组大小
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t;
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}
//
//int main()
//{
//	char arr[100];
//	char a[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t',
//							  'u','v','w','x','y','z' };//将可能出现的字母列举出来
//	int b[26] = { 0 };//将字母出现的次数统计
//	int* c = (int*)malloc(100 * sizeof(int));//将其中不为0的数字(对应字母出现的次数)放到另外一个数组中
//	for (int i = 0; i < 100; i++)
//	{
//		c[i] = 0;//将新的数组元素全部初始化为0
//	}
//	int max, min;
//	int j = 0;
//	gets(arr);
//	int len = strlen(arr);
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < 26; j++)
//		{
//			if (arr[i] == a[j])
//			{
//				b[j]++;//计算对应位置的字母出现的次数
//			}
//		}
//	}
//	for (int i = 0; i < 26; i++)
//	{
//		if (b[i] != 0)
//		{
//			c[j] = b[i];//将出现的字母个数按照该字母对应的位置存放到新的数组中
//			j++;
//		}
//	}
//	sort(c, j);//对新的数组元素排序    从小到大排
//	max = c[j - 1];//最后一个元素为出现次数最多的
//	min = c[0];//第一个元素为出现次数最少的
//	if (prime(max - min))
//	{
//		printf("Lucky Word\n");
//		printf("%d\n", max - min);
//	}
//	else
//	{
//		printf("No Answer\n");
//		printf("%d\n", 0);
//	}
//	return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在上方填写你的代码,仅需提交填写的部分*/
