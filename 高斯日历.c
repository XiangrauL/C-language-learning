//#include<stdio.h>
//#include<stdlib.h>
//
//struct Date
//{
//    int y, m, d;
//}now;
//
//int runyear(int year)
//{
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//    {
//        return 1;
//    }
//    return 0;
//}
//
////int main()          // ���㷨����
////{
////    int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
////    int n;
////    now.y = 1777, now.m = 4, now.d = 30;
////    scanf_s("%d", &n);
////		 n--;
////    while (n--)
////    {
////        now.d++;
////        if (now.m == 2 && now.d == 28)
////        {
////            if (runyear(now.y))
////            {
////                month[2] = 29;
////            }
////            else
////            {
////                month[2] = 28;
////            }
////        }
////        if (now.d > month[now.m])
////        {
////            now.d = 1;
////            now.m++;
////            if (now.m > 12)
////            {
////                now.m = 1;
////                now.y++;
////            }
////        }
////    }
////    printf("%04d-%02d-%02d", now.y, now.m, now.d); //%2d��%02d��ͬ������������ݿɺ�0
////    return 0;                                      // 2���� 02��
////}   
//int main()              //���㷨�Ͽ�
//{
//    int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int n;
//    now.y = 1792, now.m = 1, now.d = 1;
//    n = 8113 - 5343 - 16;//��ʱ���ټ�16����������1��1�գ����ڼ���
//    while (n >= 365)
//    {
//        if (runyear(now.y))
//        {
//            n = n - 366;
//        }
//        else
//        {
//            n = n - 365;
//        }
//        now.y++;
//    }
//    while (n >= month[now.m])
//    {
//        if (runyear(now.y))
//        {
//            month[2] = 29;
//        }
//        else
//        {
//            month[2] = 28;
//        }
//        n = n - month[now.m];
//        now.m++;
//    }
//    now.d = n;
//    printf("%04d-%02d-%02d", now.y, now.m, now.d);//%2d��%02d��ͬ������������ݿɺ�0                                                  // 2���� 02��
//    return 0;                                     // 2���� 02��
//}
//
///*�����·���д��Ĵ���,�����ύ��д�Ĳ���*/
//#include<stdio.h>				//�����
//#include<stdlib.h>
//int runyear(int year);
//
//int runyear(int year)
//{
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int xingqi[7] = { 7,1,2,3,4,5,6 };
//    int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int days = 0, y, y1, m, m1, d, d1, t;
//    scanf_s("%04d-%02d-%02d", &y, &m, &d);
//    y1 = y;
//    m1 = m;
//    d1 = d;
//    while (m <= 12)
//    {
//        if (runyear(y))
//        {
//            month[2] = 29;
//        }
//        else
//        {
//            month[2] = 28;
//        }
//        days = days + month[m];
//        m++;
//    }
//    days = days - d + 1;
//    while (y < 1995)
//    {
//        y++;
//        if (runyear(y))
//        {
//            days = days + 366;
//        }
//        else
//        {
//            days = days + 365;
//        }
//    }
//    
//    t = days + 31 + 29 + 31 + 30 + 31 + 1 ;               //tΪ������1996.6.2������1996Ϊ�����һ��    
//    days = days + 366 * 4 + 365 * 14; //1996-2013
//    days = days + 1;//12.31-1.1��һ��
//    days = days + 31 + 28 + 31 + 30 + 31 + 2;//2014 1.1-6.2
//    if (y1 < 1996)
//    {
//        t = 7 - t % 7;
//    }
//    else if (y1 == 1996)
//    {
//        if (m1 < 6)
//        {
//            t = 7 - t % 7;
//        }
//        else if (m1 == 6)
//        {
//            t = (d1 + 5) % 7;
//        }
//        else
//        {
//            t = 28;
//            while (m1 <= 12 && m1 > 7)
//            {
//                m1--;
//                t = t + month[m1];
//            }
//            t = t + d1;
//            t = t % 7;
//        }
//    }
//    else
//    {
//        t = 28 + 31 + 31 + 30 + 31 + 30 + 31;
//        while (m1 > 1)
//        {
//            m1--;
//            if (runyear(y1))
//            {
//                month[2] = 29;
//            }
//            else
//            {
//                month[2] = 28;
//            }
//            t = t + month[m1];
//        }
//        while (y1 > 1997)
//        {
//            y1--;
//            if (runyear(y1))
//            {
//                t = t + 366;
//            }
//            else
//            {
//                t = t + 365;
//            }
//        }
//        t = t + d1;
//        t = t % 7;
//    }
//    printf("%d\n%d", days, t);
//    return 0;
//}
///*�����Ϸ���д��Ĵ���,�����ύ��д�Ĳ���*/
//
///*�����·���д��Ĵ���,�����ύ��д�Ĳ���*/
//#include<stdio.h>
//#include<stdlib.h>
//int runyear(int year);
//
//int runyear(int year)
//{
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main()                  //�����޷�ͨ������֪��Ϊɶ
//{
//    int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int y, m, d, n;
//    while (scanf_s("%d %d %d %d", &y, &m, &d, &n) != EOF)//ʵ������������ݣ���EOF����
//    {
//        n = n + d;
//        while (n > 365 && m <= 2)
//        {
//            if (runyear(y))
//            {
//                n = n - 366;
//            }
//            else
//            {
//                n = n - 365;
//            }
//            y++;
//        }
//        while (n > 365 && m > 2)
//        {
//            if (runyear(y + 1))
//            {
//                n = n - 366;
//            }
//            else
//            {
//                n = n - 365;
//            }
//            y++;
//        }
//        while (n > month[m])
//        {
//            if (runyear(y))
//            {
//                month[2] = 29;
//            }
//            else
//            {
//                month[2] = 28;
//            }
//            n = n - month[m];
//            m++;
//            if (m == 13)
//            {
//                y++;
//                m = 1;
//            }
//        }
//        d = n;
//        printf("%d.%d.%d\n", y, m, d);
//    }
//    return 0;
//}
//
//
//#include<stdio.h>				//�����������
//#include<stdlib.h>
//int runyear(int year);
//
//int runyear(int year)
//{
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int y, m, d, n;
//    while (scanf("%d %d %d %d", &y, &m, &d, &n) != EOF)//ʵ������������ݣ���EOF����
//    {
//        while (n--)
//        {
//            d++;
//            if (m == 2 && d == 28)
//            {
//                if (runyear(y))
//                {
//                    month[2] = 29;
//                }
//                else
//                {
//                    month[2] = 28;
//                }
//            }
//            if (d > month[m])
//            {
//                d = 1;
//                m++;
//                if (m > 12)
//                {
//                    y++;
//                    m = 1;
//                }
//            }
//        }
//        printf("%d.%d.%d\n", y, m, d);
//    }
//    return 0;
//}
//
//
//
//#include<stdio.h>               //ʮ���������ڼ���
//#include<stdlib.h>
//
//int runyear(int year);
//
//int runyear(int year)
//{
//    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//    {
//        return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    int days[7] = { 0 };//day[0]���������������day[1]������һ��������day[2]�����ڶ�������...
//    int N, i, j, sum = 0;
//    scanf("%d", &N);
//    for (i = 1900; i < 1900 + N; i++)
//    {
//        if (runyear(i))
//            month[2] = 29;
//        else
//            month[2] = 28;
//        for (j = 1; j <= 12; j++)
//        {
//            days[(sum + 13) % 7]++;//1900 1.1������һ
//            sum = sum + month[j];
//        }
//    }
//    for (i = 6; i < 13; i++)
//    {
//        printf("%d ", days[i % 7]);//����������ʼ
//    }
//    return 0;
//}
