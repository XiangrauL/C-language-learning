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
//    p = (struct link*)malloc(sizeof(struct link));//�����ڴ�
//    if (p == NULL)    //������ʧ��
//    {
//        printf("ERROR");
//        exit(0);
//    }
//    if (head == NULL)      //ԭ��Ϊ��
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
//    while (q->next != NULL) //Ѱ���м���
//    {
//        if (q->next->next == NULL)
//            break;
//        p = p-> next;
//       
//        q = q->next;
//        if (q->next != NULL)
//            q = q->next;
//    }
//    //��ʱpΪ�м�ڵ�
//    q = p->next;
//    p->next = NULL;
//    while (q != NULL)//��������ֻ���ú��Σ�
//    {
//        r = q->next;
//        q->next = p->next;
//        p->next = q;
//        q = r;
//    }
//
//
//    s = head;//s��ǰ��ε�һ��
//    q = p->next;//q�Ǻ��ε�һ��
//    p->next = NULL;
//    while (q!=NULL)
//    {
//        r = q->next;//rΪq����һ��
//        q->next = s->next;//q���뵽s���棬qָ��s����һ��
//        s->next = q;//q���뵽s���棬sָ��q
//
//        s = q->next;//sΪq����һ����ԭ��ǰ��ε���һ����
//        q = r;//qΪԭ�����ε���һ����
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