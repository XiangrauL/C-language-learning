//#include<stdio.h>
//#include<stdlib.h>
//
//#define maxsize 100
//
//typedef struct
//{
//	int stack[maxsize];
//	int top[2];
//}share_stk;
//
//share_stk s;
//
//void Initstack(share_stk s)
//{
//	s.top[0] = -1;
//	s.top[1] = maxsize;
//}
//
//int push(int i, int x)
//{
//	if (i != 0 && i != 1)
//	{
//		exit(0);
//	}
//	if (s.top[1] - s.top[0] == 1)//Õ»Âú
//	{
//		return 0;
//	}
//	switch (i)
//	{
//		case 0:s.stack[++s.top[0]] = x; return 1; break;
//		case 1:s.stack[--s.top[1]] = x; return 1; break;
//	}
//}
//
//int pop(int i)
//{
//	switch (i)
//	{
//	case 0:
//		if (s.top[0] == -1) return -1;
//		else return s.stack[s.top[0]--]; 
//		break;
//	case 1:
//		if (s.top[1] == maxsize) return -1;
//		else return s.stack[s.top[1]++]; 
//		break;
//	}
//}
//
//int main(void)
//{
//	int num,i,c,top0,top1;
//	scanf_s("%d", &num);
//
//	for (i = 0; i < num; i++)
//	{
//		if (c = getchar() == '#')
//		{
//			top0 = i - 2;
//			break;
//		}
//		scanf_s(" %d", &s.stack[i]);
//	}
//	top1 = top0+2;
//	for (; i < num; i++)
//	{
//		if (c = (getchar() != ' #'))
//			scanf_s(" %d", &s.stack[i]);
//	}
//	
//	while ( s.stack[top1] == 0)
//	{
//		top1++;
//	}
//	s.top[0] = top0;
//	s.top[1] = top1;
//
//	int p,x;
//	while (scanf_s(" %d %d", &p, &x) != EOF)
//	{
//		push(p, x);
//	}
//	
//
//	for (i = 0; i < num; i++)
//	{
//		if (s.stack[i] == 0)
//		{
//			printf("# ");
//			continue;
//		}			
//		printf("%d ", s.stack[i]);
//	}
//		
//	return 0;
//}