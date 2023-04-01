////#include<stdio.h>
////#include<stdlib.h>
////
////#include <iostream>
////
////using namespace std;
////
////#define STACK_INIT_SIZE 4
////#define OK 1
////#define ERROR 0
////#define OVERFLOW -1
////
////typedef int Status;
////
////typedef struct
////{
////	char* base;
////	char* top;
////	int stacksize;
////}Sqstack;
////
////
////typedef struct
////{
////	char data;
////	struct QNode* next;
////}QNode, * QueuePtr;
////typedef struct
////{
////	QueuePtr front;
////	QueuePtr rear;
////}LinkQueue;
////
////
////Status InitStack(Sqstack  &S);
////Status GetTop(Sqstack& S，char& e);
////Status Push(Sqstack& S, char e);
////
////Status InitQueue(LinkQueue& Q);
////Status EnQueue(LinkQueue& Q, char e);
////Status DeQueue(LinkQueue& Q, char& e);
////
//////栈
////Sqstack S;
////LinkQueue Q;
////Status InitStack(Sqstack & S)
////{
////	S.base = (char*)malloc(STACK_INIT_SIZE * sizeof(char));
////	if (!S.base)
////		exit(OVERFLOW);
////	S.top = S.base;
////	S.stacksize = STACK_INIT_SIZE;
////	return OK;
////}
////
////Status GetTop(Sqstack& S，char& e)
////{
////	if (S.top == S.base)
////		return ERROR;
////	e = *(S.top - 1);
////	return OK;
////}//取出
////
////Status Push(Sqstack& S, char e)
////{
////	if (!S.base)
////		exit(OVERFLOW);
////	*S.top++ = e;
////	return OK;
////}//插入
////
////
////
//////队列
////Status InitQueue(LinkQueue& Q)
////{
////	Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
////	if (!Q.front)
////		exit(OVERFLOW);
////	Q.front->next = NULL;
////	return OK;
////}
////
////Status EnQueue(LinkQueue& Q, char e)
////{
////	p = (QueuePtr)malloc(sizeof(QNode));
////	if (!p)
////		exit(OVERFLOW);
////	p->data = e;
////	p->next = NULL;
////	Q.rear->next = p;
////	Q.rear = p;
////	return OK;
////}
////
////Status DeQueue(LinkQueue& Q, char& e)
////{
////	QueuePtr p;
////	if (Q.front == Q.rear)
////		return ERROR;
////	p = Q.front->next;
////	e = p->data;
////	Q.front->next = p->next;
////	if (Q.rear == p)
////		Q.rear = Q.front;
////	free(p);
////	return OK;
////}
////
////int main()
////{
////	int i;
////	char elem;
////	InitQueue(Q);///
////	InitStack(S);
////
////	for (i = 0; i < 4; i++)
////	{
////		scanf_s("%c", &elem);
////		Status EnQueue(Q, elem);
////	}
////
////	for (i = 0; i < 4; i++)
////	{
////		DeQueue(Q, &elem);
////		Push(S, elem);
////	}
////
////	for (i = 0; i < 4; i++)
////	{
////		Status GetTop(S,elem);
////		printf("%c", elem);
////	}
////
////	return 0;
////}
////#include <stdio.h>
////#include <stdlib.h>
////#define MAXSIZE 20
////#define STACK_SIZE 30
////
////
/////// 
//////定义队列的结构体
////typedef struct Squeue {
////    char data[MAXSIZE];//队列内元素的最大长度
////    int front;//队头
////    int rear;//队尾
////}Squeue;
////
//////定义栈（顺序栈）的结构体 
////typedef struct {
////    char* base;
////    char* top;  //栈顶指针
////    int size;
////}seqStack;
///////
////int InitStack(seqStack* s) {
////    s->base = (int*)malloc(STACK_SIZE * sizeof(seqStack));//动态分配30个单位的stack
////    //省略是否空间满
////    s->top = s->base;//栈顶和栈尾相同，栈里面没有元素
////    s->size = STACK_SIZE;
////    return 1;
////}
////int Push(seqStack* s, char x) {
////
////    *s->top = x;
////    s->top++;
////    return 1;
////}
////
////int Pop(seqStack* s, char* x) {
////    if (s->top == s->base)return 0;
////    else {
////        s->top--;
////        *x = *s->top;
////        return 1;
////    }
////}
////int GetTop(seqStack* s, char* x) {
////    if (s->top == s->base)
////        return 0;
////    else {
////        *x = *(s->top - 1);
////        return 1;
////    }
////}
//////初始化队列
////void InitQueue(Squeue* Q)
////{
////    Q->front = Q->rear = 0;
////}
////
//////判断队列是否为空
////int isQueueEmpty(Squeue* qu)
////{
////    if (qu->front == qu->rear)
////    {
////        return 1;
////    }
////    else
////    {
////        return 0;
////    }
////}
////
//////元素入队操作
////int EnQueue(Squeue* qu, char x)
////{
////    //若队满则无法入队——当前个数已经超过最大数量，
////    //就会出现mod（Maxsize）的结果是队头指针
////    //比如，队头是1，最大长度是12，若入队第13个元素，则会出现13mod12==1（和队头相等）的情况
////    //这样就会return false 
////    if ((qu->rear + 1) % MAXSIZE == qu->front)
////    {
////        return 0;
////    }
////    qu->rear = (qu->rear + 1) % MAXSIZE;
////    qu->data[qu->rear] = x;
////    return 1;
////}
////
//////元素出队操作
////int deQueue(Squeue* qu, char* x)
////{
////    //若队空则无法出队
////    if (qu->front == qu->rear)
////    {
////        return 0;
////    }
////    qu->front = (qu->front + 1) % MAXSIZE;
////    *x = qu->data[qu->front];
////    return 1;
////}
////int main()
////{
////    int i, n;
////    char a,x;
////    scanf_s("%d", &n);
////
////    Squeue q;
////    seqStack s;
////
////    InitStack(&s);
////    InitQueue(&q);
////     int stackNumber;
////        //顺序的入栈 
////     char y[MAXSIZE];
////     gets(y);
////     int l;
////     l = strlen(y);
////     int j;
////     for (j = 0; j < l; j++)
////     {
////         EnQueue(&q, y[j]);
////
////        Push(&s, y[j]);
////        Pop(&s, &stackNumber); //逆序的出栈（遵顼先进后出原则） 
////        EnQueue(&q, stackNumber);//逆序的入队  
////    }
////    while (!isQueueEmpty(&q))
////    {
////        deQueue(&q, &x);   //逆序的出队（遵循先进先出原则） 
////        printf("%c", x);  //完成逆转，输出！ 
////    }
////
////    return 0;
////}
// 
// 
// 
// 
// 
// 
//#include<stdio.h>
//#include<string.h>
//#define MAXSIZE 80
//
//typedef struct
//{
//    int data[MAXSIZE];
//    int front;
//    int rear;
//}SeqQueue;
//
//void InitQueue(SeqQueue* q)
//{
//    q->front = 0;
//    q->rear = 0;
//}
//
//int isEmptyQueue(SeqQueue q)
//{
//    if (q.front == q.rear)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int EnQueue(SeqQueue* q, char e)
//{
//    if (q->rear == MAXSIZE)
//    {
//        return 0;
//    }
//    q->data[q->rear] = e;
//    q->rear++;
//    return 1;
//}
//int DeQueue(SeqQueue* q, char* e)
//{
//    if (q->front == q->rear)
//    {
//        return 0;
//    }
//    *e = q->data[q->front];
//    q->front++;
//    return 1;
//}
//
//
//typedef struct
//{
//    int data[MAXSIZE];
//    int top;
//} SeqStack;
//
//void InitStack(SeqStack* stack)
//{
//    stack->top = -1;
//}
//
//int isEmptyStack(SeqStack stack)
//{
//    if (stack.top == -1)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int Push(SeqStack* stack, char e)
//{
//    if (stack->top == MAXSIZE - 1)
//    {
//        return 0;
//    }
//    stack->top++;
//    stack->data[stack->top] = e;
//    return 1;
//}
//
//
//int pop(SeqStack* stack, char* e)
//{
//    if (stack->top == -1) {
//        return 0;
//    }
//    *e = stack->data[stack->top];
//    stack->top--;
//    return 1;
//}
//
//void InversionQueue(SeqQueue* Q, SeqStack* S)
//{
//    while (!isEmptyQueue(*Q))
//    {
//        char e;
//        DeQueue(Q, &e);
//        Push(S, e);
//    }
//    while (!isEmptyStack(*S))
//    {
//        char top;
//        pop(S, &top);
//        EnQueue(Q, top);
//    }
//}
//
//int main()
//{
//    SeqQueue q;
//    InitQueue(&q);
//
//    SeqStack s;
//    InitStack(&s);
//
//    char x[MAXSIZE];
//
//    int l, i, j;
//    gets(x);
//    l = strlen(x);
//    for (j = 0; j < l; j++)
//    {
//        EnQueue(&q, x[j]);
//    }
//
//    InversionQueue(&q, &s);
//
//    for (i = q.front; i < q.rear; i++)
//    {
//        printf("%c", q.data[i]);
//    }
//    printf("\n");
//}
//
