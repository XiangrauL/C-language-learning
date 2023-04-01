//#include <stdio.h>
//#include <stdlib.h>
//
///* 请完成此函数功能：新建一个节点并添加到链表末尾，返回添加节点后的链表的头指针 */
//struct link* AppendNode(struct link* head);
//
///* 	请完成此函数的功能：显示链表中所有节点的节点号和该节点中数据项内容 */
//void DisplyNode(struct link* head);
//
///*	请完成此函数的功能：释放head指向的链表中所有节点占用的内存 */
//void DeleteMemory(struct link* head);
//
//struct link
//{
//	int data;
//	struct link* next;
//};
//
////请在此处添加你的代码
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
//void DeleteMemory(struct link* head)   //释放内存
//{
//    struct link* p = head, * pr = NULL;
//    while (p != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
// /*struct link *DeleteNode(struct link*head, int nodeData)      //只能删除一个节点的菜函数
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
////struct link* DeleteNode(struct link* head, int nodeData)          //这个函数有问题，失败的函数
//// {
////     struct link* p = head, * pr = head, * prr = head;
////     int flag=0;
////     if (head == NULL)
////     {
////         printf("Linked Table is empty!\n");
////         return(head);
////     }
////     while (p->next != NULL)            //遍历链表，但缺少最后两个节点，在后面加上
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
////         p = p->next;/////prr,pr,p依次排序prr为上一节点，pr为当前节点，p为下一节点
////     }
////     if (nodeData == pr->data)
////     {
////        prr->next =NULL;              //有不知名问题？？？？！！！！好气过不了
////        flag = 1;
////     }
////     if (nodeData == p->data)
////     {            
////        pr->next= NULL;
////        flag = 1;
////     } 
////     if (flag==0)       //设置旗，确定是否有符合条件的节点
////     {
////      printf("This Node has not been found!\n");
////     }
////     return head;
//// }
//struct link* InsertOrderNode(struct link* head, int nodeData)     //将一个新节点插入已按升序排序的链表
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
////struct link *DeleteNode(struct link*head, int nodeData)         //利用循环遍历链表，实现删除含有多个相同数据的节点，复杂度较低,但复杂度更低那个有问题>_<
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
////for(; p->next != NULL; )                //用循环遍历链表
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
////        pe = p;                 //用pe替换p释放该节点内存，直接放p会导致后面的链表断裂
////        p = p->next;            //后移p
////        free(pe);         
////    }
////    else
////    {
////        pr = p;
////        p = p->next;            //后移p
////    }
////}
////if (nodeData == p->data)
////    {            
////        pr->next= NULL;
////        flag = 1;
////    } 
////    int j = 1;
////     p = head;
////while (p != NULL)           //计算删除后节点数
////{
////    p = p->next;
////       j++;
////}
////p = head;
////if (j == 2)             //j=2说明只剩一个节点
////{
////    if (nodeData == p->data)
////    {
////        flag = 1;
////        head = NULL;
////    }
////}
////if (flag==0 )          //比较节点数是否发生变化
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
 //    struct link* head = NULL;     /* 链表头指针 */
 //    scanf_s(" %c", &c);               /* %c前面有一个空格 */
 //    while (c == 'Y' || c == 'y')
 //    {
 //        head = AppendNode(head);/* 向head为头指针的链表末尾添加节点 */
 //        scanf_s(" %c", &c);          /* %c前面有一个空格 */
 //        i++;
 //    }
 //    scanf_s("%d", &num);
 //    head = DeleteNode(head, num);
 //    DisplyNode(head);
 //    DeleteMemory(head);           /* 释放所有动态分配的内存 */
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
///*请在下方编写你的代码,仅需提交填写的部分*/
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
//void DeleteMemory(struct link* head)   //释放内存
//{
//    struct link* p = head, * pr = NULL;
//    while (p != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
//struct link* DeleteNode(struct link* head, int location)      //给位置location一次删除一个节点的函数
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
///*请在上方填写你的代码,仅需提交填写的部分*/
//int main(void)
//{
//    int i = 0;
//    int location;
//    char    c;
//    struct link* head = NULL;     /* 链表头指针 */
//    scanf(" %c", &c);               /* %c前面有一个空格 */
//    while (c == 'Y' || c == 'y')
//    {
//        head = AppendNode(head);/* 向head为头指针的链表末尾添加节点 */
//        scanf(" %c", &c);          /* %c前面有一个空格 */
//        i++;
//    }
//    scanf("%d", &location);
//    head = DeleteNode(head, location);
//    DisplyNode(head);
//    DeleteMemory(head);           /* 释放所有动态分配的内存 */
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
///*请在下方编写你的代码,仅需提交填写的部分*/
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
//void DeleteMemory(struct link* head)   //释放内存
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
//        while (i < location && pr->next != NULL)//由于按顺序从1往后排只需定义一个变量i直到到达location即可
//        {
//            temp = pr;
//            pr = pr->next;//原链表的一段:temp-pr
//            i++;
//        }
//        if (i == location)//开始的时候写的是if (i <= location)但这样会造成location>大于原链表节点数时，本应插入到原链表最后一个节点的后面，结果插入到了原链表倒数第二个节点的后面，故不行，要注意location的范围
//        {
//            if (1 == location)
//            {
//                p->next = head;
//                head = p;
//            }
//            else
//            {
//                temp->next = p;
//                p->next = pr;//现链表的一段:temp-p-pr
//            }
//        }
//        else
//        {
//            pr->next = p;
//        }
//    }
//    return head;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//int main(void)
//{
//    int i = 0;
//    int value, location;
//    char    c;
//    struct link* head = NULL;     /* 链表头指针 */
//    scanf_s(" %c", &c);               /* %c前面有一个空格 */
//    while (c == 'Y' || c == 'y')
//    {
//        head = AppendNode(head);/* 向head为头指针的链表末尾添加节点 */
//        scanf_s(" %c", &c);          /* %c前面有一个空格 */
//        i++;
//    }
//    scanf_s("%d %d", &location, &value);
//    head = InsertLocNode(head, location, value);
//    DisplyNode(head);
//    DeleteMemory(head);           /* 释放所有动态分配的内存 */
//    return 0;
//}

///*请在下方编写你的代码,仅需提交填写的部分*/
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
//void DeleteMemory(struct link* head)   //释放内存
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
//    int main(void)              //超时了
//    { 
//        struct link* head=NULL;     /* 链表头指针 */
//        int T, n, i, j, num, nodedata;//T轮游戏，n次操作
//        scanf_s("%d", &T);
//        for (j = 0; j < T; j++)//创建一个空链表
//        {
//            head=NULL; 
//            scanf_s("%d", &n);
//           
//            for (i = 0; i < n; i++)
//            {
//                scanf_s("%d %d", &num, &nodedata);
//                head = Insertis_headNode(head, num, nodedata);/* 向head为头指针的链表首或尾添加节点 */
//            }
//            DisplyNode(head);
//            printf("\n");
//   
//             
//        }
//        DeleteMemory(head);           /* 释放所有动态分配的内存 */
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
//    p = (struct link*)malloc(sizeof(struct link));//申请内存
//    if (p == NULL)    //若申请失败
//    {
//        printf("ERROR");
//        exit(0);
//    }
//    if (head == NULL)      //原表为空
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
//         p2 = head2;//内循环完一次p2就已经指向NULL了，所以需要把p2重新赋值head2
//         p1 = p1->next;
//     }
//     return i;
// }
//
// int main(void)
//{
//    int num1,num2,j,i,n,flag,a[10],b[10];
//    struct link* head1 = NULL;  
//    struct link* head2 = NULL;     /* 链表头指针 */
//    scanf_s("%d", &num1);       
//    while (num1>0)
//    {
//        num1--;
//        head1 = AppendNode(head1);/* 向head为头指针的链表末尾添加节点 */
//    }
//    scanf_s("%d", &num2);
//    while (num2 > 0)
//    {
//        num2--;
//        head2 = AppendNode(head2);/* 向head为头指针的链表末尾添加节点 */
//    }
//
//    i=check(head1, head2,a);
// 
//    printf("%d\n", i);
//    if (i == 0)
//        printf("没有公共元素");
//
//    for (j = 0; j <i; j++)
//    {
//        printf("%d ",a[j]);
//    }
//    return 0;
//}
