//#include <stdio.h>
//#include <stdlib.h>
//
///* ����ɴ˺������ܣ��½�һ���ڵ㲢��ӵ�����ĩβ��������ӽڵ��������ͷָ�� */
//struct link* AppendNode(struct link* head);
//
///* 	����ɴ˺����Ĺ��ܣ���ʾ���������нڵ�Ľڵ�ź͸ýڵ������������� */
//void DisplyNode(struct link* head);
//
///*	����ɴ˺����Ĺ��ܣ��ͷ�headָ������������нڵ�ռ�õ��ڴ� */
//void DeleteMemory(struct link* head);
//
//struct link
//{
//	int data;
//	struct link* next;
//};
//
////���ڴ˴������Ĵ���
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
//        head = p;
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
//void DisplyNode(struct link* head)
//{
//    struct link* p = head;
//    int j = 1;
//    while (p != NULL)
//    { 
//        printf("%d %d\n", j, p->data);
//        p = p->next;
//        j++;
//    }
//}
//
//void DeleteMemory(struct link* head)   //�ͷ��ڴ�
//{
//    struct link* p = head, * pr = NULL;
//    while (p != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
// /*struct link *DeleteNode(struct link*head, int nodeData)      //ֻ��ɾ��һ���ڵ�Ĳ˺���
//{
// struct link* p = head, * pr = head;
//if (head == NULL)
//{
//    printf("Linked Table is empty!\n");
//    return(head);
//}
//while (nodeData != p->data && p->next != NULL)
//{
//    pr = p;
//    p = p->next;
//}
//if (nodeData == p->data)
//{
//    if (p == head)
//    {
//        head = p->next;
//    }
//    else
//    {
//        pr->next = p->next;
//    }
//    free(p);
//}
//else
//{
//    printf("This Node has not been found!\n");
//}
//return head;
//}*/
////struct link* DeleteNode(struct link* head, int nodeData)          //������������⣬ʧ�ܵĺ���
//// {
////     struct link* p = head, * pr = head, * prr = head;
////     int flag=0;
////     if (head == NULL)
////     {
////         printf("Linked Table is empty!\n");
////         return(head);
////     }
////     while (p->next != NULL)            //����������ȱ����������ڵ㣬�ں������
////     {        
////         if (nodeData == p->data)
////         {
////             if (p == head)
////             {
////                 head = p->next;
////             }
////             else
////             {   
////                 pr->next = p->next;
////             }           
////             flag = 1;
////         } 
////         prr = pr;
////         pr = pr->next;
////         pr = p;
////         p = p->next;/////prr,pr,p��������prrΪ��һ�ڵ㣬prΪ��ǰ�ڵ㣬pΪ��һ�ڵ�
////     }
////     if (nodeData == pr->data)
////     {
////        prr->next =NULL;              //�в�֪�����⣿������������������������
////        flag = 1;
////     }
////     if (nodeData == p->data)
////     {            
////        pr->next= NULL;
////        flag = 1;
////     } 
////     if (flag==0)       //�����죬ȷ���Ƿ��з��������Ľڵ�
////     {
////      printf("This Node has not been found!\n");
////     }
////     return head;
//// }
//struct link* InsertOrderNode(struct link* head, int nodeData)     //��һ���½ڵ�����Ѱ��������������
//{
//    struct link* pr = head, * p = head, * temp = NULL;
//    p = (struct link*)malloc(sizeof(struct link));
//    if (p == NULL)
//    {
//        printf("ERROR");
//        exit(0);
//    }
//    p->next = NULL;
//    p->data = nodeData;
//    if (head == NULL)
//    {
//        head = p;
//    }
//    else
//    {
//        while (pr->data < nodeData && pr->next != NULL)
//        {
//            temp = pr;
//            pr = pr->next;
//        }
//        if (pr->data >= nodeData)
//        {
//            if (pr == head)
//            {
//                p->next = head;
//                head = p;
//            }
//            else
//            {
//                temp->next = p;//
//                p->next = pr;//
//            }
//        }
//        else
//        {
//            pr->next = p;
//        }
//    }
//    return head;
//}
//    
////struct link *DeleteNode(struct link*head, int nodeData)         //����ѭ����������ʵ��ɾ�����ж����ͬ���ݵĽڵ㣬���ӶȽϵ�,�����Ӷȸ����Ǹ�������>_<
////{
////     struct link* p = head, * pr = head,*pe;
////     int flag = 0;
////     
////if (head == NULL)
////{
////    printf("Linked Table is empty!\n");
////    return(head);
////}
////  
////for(; p->next != NULL; )                //��ѭ����������
////{
////    if (nodeData == p->data)
////    {  flag = 1;
////        if (p == head)
////        {
////            head = p->next;
////        }  
////         else
////        {
////         pr->next = p->next;
////        }
////        pe = p;                 //��pe�滻p�ͷŸýڵ��ڴ棬ֱ�ӷ�p�ᵼ�º�����������
////        p = p->next;            //����p
////        free(pe);         
////    }
////    else
////    {
////        pr = p;
////        p = p->next;            //����p
////    }
////}
////if (nodeData == p->data)
////    {            
////        pr->next= NULL;
////        flag = 1;
////    } 
////    int j = 1;
////     p = head;
////while (p != NULL)           //����ɾ����ڵ���
////{
////    p = p->next;
////       j++;
////}
////p = head;
////if (j == 2)             //j=2˵��ֻʣһ���ڵ�
////{
////    if (nodeData == p->data)
////    {
////        flag = 1;
////        head = NULL;
////    }
////}
////if (flag==0 )          //�ȽϽڵ����Ƿ����仯
////{
////    printf("This Node has not been found!\n");
////}
////return head;
////}
 //int main(void)
 //{
 //    int i = 0;
 //    int num;
 //    char    c;
 //    struct link* head = NULL;     /* ����ͷָ�� */
 //    scanf_s(" %c", &c);               /* %cǰ����һ���ո� */
 //    while (c == 'Y' || c == 'y')
 //    {
 //        head = AppendNode(head);/* ��headΪͷָ�������ĩβ��ӽڵ� */
 //        scanf_s(" %c", &c);          /* %cǰ����һ���ո� */
 //        i++;
 //    }
 //    scanf_s("%d", &num);
 //    head = DeleteNode(head, num);
 //    DisplyNode(head);
 //    DeleteMemory(head);           /* �ͷ����ж�̬������ڴ� */
 //    return 0;
 //}





//#include <stdio.h>
//#include <stdlib.h>
//struct link* AppendNode(struct link* head);
//void DisplyNode(struct link* head);
//void DeleteMemory(struct link* head);
//struct link* DeleteNode(struct link* head, int location);
//
//struct link
//{
//    int data;
//    struct link* next;
//};
///*�����·���д��Ĵ���,�����ύ��д�Ĳ���*/
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
//        head = p;
//    }
//    else
//    {
//        while (pr->next != NULL)
//        {
//            pr = pr->next;
//        }
//        pr->next = p;
//    }
//    scanf("%d", &data);
//    p->data = data;
//    p->next = NULL;
//    return head;
//}
//
//void DisplyNode(struct link* head)
//{
//    struct link* p = head;
//    int j = 1;
//    while (p != NULL)
//    {
//        printf("%d %d\n", j, p->data);
//        p = p->next;
//        j++;
//    }
//}
//
//void DeleteMemory(struct link* head)   //�ͷ��ڴ�
//{
//    struct link* p = head, * pr = NULL;
//    while (p != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
//struct link* DeleteNode(struct link* head, int location)      //��λ��locationһ��ɾ��һ���ڵ�ĺ���
//{
//    struct link* p = head, * pr = head;
//    int i = 1;
//    if (head == NULL)
//    {
//        printf("Linked Table is empty!");
//        return head;
//    }
//    while (i != location && p->next != NULL)
//    {
//        pr = p;
//        p = p->next;
//        i++;
//    }
//    if (i == location)
//    {
//        if (i == 1)
//        {
//            head = p->next;
//        }
//        else
//        {
//            pr->next = p->next;
//        }
//        free(p);
//    }
//    else
//    {
//        printf("The location has not been found.\n");
//        head = NULL;
//    }
//    return head;
//}
//
///*�����Ϸ���д��Ĵ���,�����ύ��д�Ĳ���*/
//int main(void)
//{
//    int i = 0;
//    int location;
//    char    c;
//    struct link* head = NULL;     /* ����ͷָ�� */
//    scanf(" %c", &c);               /* %cǰ����һ���ո� */
//    while (c == 'Y' || c == 'y')
//    {
//        head = AppendNode(head);/* ��headΪͷָ�������ĩβ��ӽڵ� */
//        scanf(" %c", &c);          /* %cǰ����һ���ո� */
//        i++;
//    }
//    scanf("%d", &location);
//    head = DeleteNode(head, location);
//    DisplyNode(head);
//    DeleteMemory(head);           /* �ͷ����ж�̬������ڴ� */
//    return 0;
//}
//
//#include <stdio.h>///#1005
//#include <stdlib.h>
//struct link* AppendNode(struct link* head);
//void DisplyNode(struct link* head);
//void DeleteMemory(struct link* head);
//struct link* InsertLocNode(struct link* head, int location, int nodeData);
//
//struct link
//{
//    int data;
//    struct link* next;
//};
///*�����·���д��Ĵ���,�����ύ��д�Ĳ���*/
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
//        head = p;
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
//void DisplyNode(struct link* head)
//{
//    struct link* p = head;
//    int j = 1;
//    while (p != NULL)
//    {
//        printf("%d %d\n", j, p->data);
//        p = p->next;
//        j++;
//    }
//}
//
//void DeleteMemory(struct link* head)   //�ͷ��ڴ�
//{
//    struct link* p = head, * pr = NULL;
//    while (p != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
//
//struct link* InsertLocNode(struct link* head, int location, int nodeData)
//{
//    struct link* pr = head, * p = head, * temp = NULL;
//    int i = 1;
//    p = (struct link*)malloc(sizeof(struct link));
//    if (p == NULL)
//    {
//        printf("ERROR");
//        exit(0);
//    }
//    if (location <= 0)
//    {
//        printf("Insert failure.\n");
//        return head;
//    }
//    else
//    {
//        printf("Insert success.\n");
//    }
//    p->next = NULL;
//    p->data = nodeData;
//    if (head == NULL)
//    {
//        head = p;
//    }
//    else
//    {
//        while (i < location && pr->next != NULL)//���ڰ�˳���1������ֻ�趨��һ������iֱ������location����
//        {
//            temp = pr;
//            pr = pr->next;//ԭ�����һ��:temp-pr
//            i++;
//        }
//        if (i == location)//��ʼ��ʱ��д����if (i <= location)�����������location>����ԭ����ڵ���ʱ����Ӧ���뵽ԭ�������һ���ڵ�ĺ��棬������뵽��ԭ�������ڶ����ڵ�ĺ��棬�ʲ��У�Ҫע��location�ķ�Χ
//        {
//            if (1 == location)
//            {
//                p->next = head;
//                head = p;
//            }
//            else
//            {
//                temp->next = p;
//                p->next = pr;//�������һ��:temp-p-pr
//            }
//        }
//        else
//        {
//            pr->next = p;
//        }
//    }
//    return head;
//}
///*�����Ϸ���д��Ĵ���,�����ύ��д�Ĳ���*/
//int main(void)
//{
//    int i = 0;
//    int value, location;
//    char    c;
//    struct link* head = NULL;     /* ����ͷָ�� */
//    scanf_s(" %c", &c);               /* %cǰ����һ���ո� */
//    while (c == 'Y' || c == 'y')
//    {
//        head = AppendNode(head);/* ��headΪͷָ�������ĩβ��ӽڵ� */
//        scanf_s(" %c", &c);          /* %cǰ����һ���ո� */
//        i++;
//    }
//    scanf_s("%d %d", &location, &value);
//    head = InsertLocNode(head, location, value);
//    DisplyNode(head);
//    DeleteMemory(head);           /* �ͷ����ж�̬������ڴ� */
//    return 0;
//}

///*�����·���д��Ĵ���,�����ύ��д�Ĳ���*/
//#include<stdio.h>
//#include<stdlib.h>
//
//void DisplyNode(struct link* head);
//void DeleteMemory(struct link* head);
//struct link* Insertis_headNode(struct link* head, int is_head, int Data);
// 
//struct link
//{
//    int data;
//    struct link* next;
//};
//
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
//void DeleteMemory(struct link* head)   //�ͷ��ڴ�
//{
//    struct link* p = head, * pr = NULL;
//    while (p != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
//
//    struct link* Insertis_headNode(struct link* head, int is_head, int Data)
//    {
//        struct link* pr = head, * p = head, * temp = NULL;
//        p = (struct link*)malloc(sizeof(struct link));
//        if (p == NULL)
//        {
//            printf("ERROR");
//            exit(0);
//        }
//
//        p->next = NULL;
//        p->data = Data;
//
//        if (head == NULL)
//        {
//            head = p;
//            return head;
//        }
//        while (pr->next != NULL)
//        {
//            temp = pr;
//            pr = pr->next;
//        }
//
//        if (is_head == 1)
//        {
//            p->next = head;
//            head = p;
//        }
//        else
//        {
//            pr->next = p;
//        }
//        return head;
//    }
//	
//    int main(void)              //��ʱ��
//    { 
//        struct link* head=NULL;     /* ����ͷָ�� */
//        int T, n, i, j, num, nodedata;//T����Ϸ��n�β���
//        scanf_s("%d", &T);
//        for (j = 0; j < T; j++)//����һ��������
//        {
//            head=NULL; 
//            scanf_s("%d", &n);
//           
//            for (i = 0; i < n; i++)
//            {
//                scanf_s("%d %d", &num, &nodedata);
//                head = Insertis_headNode(head, num, nodedata);/* ��headΪͷָ��������׻�β��ӽڵ� */
//            }
//            DisplyNode(head);
//            printf("\n");
//   
//             
//        }
//        DeleteMemory(head);           /* �ͷ����ж�̬������ڴ� */
//        return 0;
//    }
//#include <stdio.h>
//#include <stdlib.h>
//
//struct link* AppendNode(struct link* head);
//struct link
//	{
//		int data;
//		struct link* next;
//	};
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
//        head = p;
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
//  int check(struct link* head1, struct link* head2,int* a)
// {
//     struct link* p1 = head1; 
//     struct link* p2 = head2;
//     int i=0;
//     for (; p1 != NULL;)
//     {
//         for (; p2 != NULL;)
//         {
//             if (p1->data == p2->data)
//             {
//                 a [i++]= p1->data;
//            
//             }
//              p2 = p2->next; 
//         }
//         p2 = head2;//��ѭ����һ��p2���Ѿ�ָ��NULL�ˣ�������Ҫ��p2���¸�ֵhead2
//         p1 = p1->next;
//     }
//     return i;
// }
//
// int main(void)
//{
//    int num1,num2,j,i,n,flag,a[10],b[10];
//    struct link* head1 = NULL;  
//    struct link* head2 = NULL;     /* ����ͷָ�� */
//    scanf_s("%d", &num1);       
//    while (num1>0)
//    {
//        num1--;
//        head1 = AppendNode(head1);/* ��headΪͷָ�������ĩβ��ӽڵ� */
//    }
//    scanf_s("%d", &num2);
//    while (num2 > 0)
//    {
//        num2--;
//        head2 = AppendNode(head2);/* ��headΪͷָ�������ĩβ��ӽڵ� */
//    }
//
//    i=check(head1, head2,a);
// 
//    printf("%d\n", i);
//    if (i == 0)
//        printf("û�й���Ԫ��");
//
//    for (j = 0; j <i; j++)
//    {
//        printf("%d ",a[j]);
//    }
//    return 0;
//}
