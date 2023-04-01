//#include<stdio.h>
//#include<stdlib.h>
//
//void getnext(char S[20], int next[20],int num)
//{
//	int i = 1;
//	int	j = 0;
//	next[1] = 0;
//	while (i<num)
//	{
//		if (j == 0 || S[i] == S[j])
//		{
//			i++;
//			j++;
//			next[i] = j;
//		}
//		else
//			j = next[j];
//	}
//}
//
//int main(void)
//{
//	char S[20];
//	int num;
//	int next[20];
//	scanf_s("%d",&num);
//	for (int i = 1; i <= num; i++)
//	{
//		scanf_s(" %c", &S[i]);
//	}
//	getnext(S, next, num);
//	for (int i = 1; i <= num; i++)
//	{
//		printf("%d ", next[i]);
//	}
//	return 0;
//}