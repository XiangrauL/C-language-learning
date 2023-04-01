//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node
//{
//    struct Node* pred;
//    int data;
//    int freq;
//    struct Node* next;
//}Node, * LinkList;
//
//int num=7,m;
//
//struct Node* CreatList(Node* head)
//{
//    Node* L;
//    int freq = 0;
//    int x=0;
//    int a[7] = { 1,4,6,7,9,5,3 };
//  //  scanf_s("%d", &x);
//    while (num--) {
//        L = (Node*)malloc(sizeof(Node));
//        L->freq = freq;
//        L->data = a[x++];
//
//        L->next = head->next;
//        if (head->next) {
//            head->next->pred = L;
//        }
//        L->pred = head;
//        head->next = L;
//
//  //      scanf_s("%d", &x);
//    }
//    return head;
//}
//
//struct Node* Locate(LinkList L, int x)
//{
//    Node* pr = L;
//    Node* p = L->next;
//    while (p != NULL && p->data != x)
//    {
//        p = p->next;
//    }
//    if (p == NULL)
//    {
//        exit(0);
//    }
//    else
//    {
//        p->freq++;
//        if (p->pred == L || p->pred->freq > p->freq)
//        {
//            return p; //p是链表首结点，或freq值小于前驱
//        }
//            if (p->next != NULL)
//        {
//            p->next->pred = p->pred;
//        }
//        p->pred->next = p->next;
//        pr = p->pred;
//        while (pr != L && pr->freq <= p->freq)
//        {
//            pr = pr->pred;
//        }
//        p->next = pr->next;
//        if (pr->next != NULL)
//        {
//            pr->next->pred = p;
//        }      
//        p->pred = pr;
//        pr->next = p;
//    }
//    return p;
//}
//
//void DisplyNode(struct Node* head)
//{
//    struct Node* p = head->next;
//    while (p != NULL)
//    { 
//        printf("%d ", p->data);
//        p = p->next;
//    }
//}
//
//int main(void)
//{
//    struct Node* head, * p;
//  //  scanf_s("%d", &num);
//    m = num=7;
//    int x;
//    head = (Node*)malloc(sizeof(Node));
//    head->pred = NULL;
//    head->next = NULL;
//    head = CreatList(head);
//    p = head->next;
//    while (p->next!=NULL)
//    {
//        p = p->next;
//    }
//    
//   /* while(m--)
//    {     
//        x = p->data;
//        scanf_s("%d", &i);
//            while (i--)
//            {
//                Locate(head, x);
//            }
//            p = p->pred;
//    }
//    */
//
//    Locate(head, 3);
//    Locate(head, 5);
//    for(int q=0;q<3;q++)
//    Locate(head, 6);
//    for (int q = 0; q < 2; q++)
//    Locate(head, 7);
//    for (int q = 0; q < 5; q++)
//    Locate(head, 1);
//    for (int q = 0; q < 4; q++)
//    Locate(head, 4);
//    Locate(head, 9);
//    DisplyNode(head);
//    return 0;
//}