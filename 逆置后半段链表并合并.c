//#include<stdio.h>
//#include<stdlib.h>
//
//struct link
//{
//    int data;
//    struct link* next;
//};
//
//struct link* AppendNode(struct link* head)
//{
//    struct link* p = NULL, * pr = head;
//    int data;
//    p = (struct link*)malloc(sizeof(struct link));//申请内存
//    if (p == NULL)    //若申请失败
//    {
//        printf("ERROR");
//        exit(0);
//    }
//    if (head == NULL)      //原表为空
//    {
//        head= p;
//    }
//    else
//    {
//        while (pr->next != NULL)
//        {
//            pr = pr->next;
//        }
//        pr->next = p;
//    }
//    scanf_s("%d", &data);
//    p->data = data;
//    p->next = NULL;
//    return head;
//}
//
//void changeList(struct link* head)
//{
//    struct link * p, * q, * r, * s;
//    p = q = head; 
//    while (q->next != NULL) //寻找中间结点
//    {
//        if (q->next->next == NULL)
//            break;
//        p = p-> next;
//       
//        q = q->next;
//        if (q->next != NULL)
//            q = q->next;
//    }
//    //此时p为中间节点
//    q = p->next;
//    p->next = NULL;
//    while (q != NULL)//逆置链表（只逆置后半段）
//    {
//        r = q->next;
//        q->next = p->next;
//        p->next = q;
//        q = r;
//    }
//
//
//    s = head;//s是前半段第一个
//    q = p->next;//q是后半段第一个
//    p->next = NULL;
//    while (q!=NULL)
//    {
//        r = q->next;//r为q的下一个
//        q->next = s->next;//q插入到s后面，q指向s的下一个
//        s->next = q;//q插入到s后面，s指向q
//
//        s = q->next;//s为q的下一个即原来前半段的下一个点
//        q = r;//q为原来后半段的下一个点
//    }
//}
//
//void DisplyNode(struct link* head)
//{
//    struct link* p = head;
//    while (p != NULL)
//    {
//        printf("%d ", p->data);
//        p = p->next;
//    }
//}
//
//int main()
//{
//    int n;
//    struct LinkList *head = NULL;
//        scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{	
//       head= AppendNode(head);
//	}
//    changeList(head);
//    DisplyNode(head);
//	return 0;
//}