//#include<stdio.h>
//#include<string.h>
//#define MAXSIZE 100
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
//int Pop(SeqStack* stack, char* e)
//{
//    if (stack->top == -1) {
//        return 0;
//    }
//    *e = stack->data[stack->top];
//    stack->top--;
//    return 1;
//}
//
//
//int main()
//{
//    SeqStack s;
//    InitStack(&s);
//    char a;
//    char x[80];
//    int l, i, j,p,q;
//    gets(x);
//    l = strlen(x);
//
//    a = 'a';
//    p = 0; q = 0;
//
//    for (j = 0; j < l; j++)
//    {
//        if (x[0] == 'O')
//        {
//            printf("FALSE");
//            return 0;
//        }
//        if (x[j] != 'O' && x[j] != 'I')
//        {
//            printf("FALSE");
//            return 0;
//        }
//        if (x[j] == 'I')
//        {
//            Push(&s, a);
//            p++;
//        }
//        if (x[j] == 'O')
//        {
//            Pop(&s, &s.top);
//            q++;
//            if (isEmptyStack(s))
//
//                if (x[j + 1] == 'O')
//                {
//                    printf("FALSE");
//                    return 0;
//                }
//        }
//       if (p < q)
//        {
//            printf("FALSE");
//            return 0;
//        }
//
//    }
//
//    if (p != q)
//    {
//        printf("FALSE");
//        return 0;
//    }
//
//    printf("TRUE");
//    return 0;
//}
//
