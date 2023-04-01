//#pragma warning(disable:4996)
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int read();
//int cha(char*, int);
//void xian(int);
//
//struct post
//{
//    char pro[20];//省
//    char ab[5];//简称
//    char city[20];
//    int ac;//区号
//    int zc;//邮编
//};
//struct post a[5000];
//
//int len;
//
//int main()
//{
//    char s[20];
//    int flag = -1;
//    len = read();
//    printf("城市：");
//    scanf("%s", s);
//    flag = cha(s, len);
//    if (flag >= 0)
//        xian(flag);
//    else
//        printf("输入错误");
//    return 0;
//}
//
//int read()  //读取数据
//{
//    FILE* fp = fopen("PostCode.txt", "r");     
//    if (!fp)                
//    {
//        printf("无法打开文件");
//        exit(1);
//    }
//
//    int i = 0;
//    fscanf(fp, "%s %s %s %d %d", &a[i].pro, &a[i].ab, &a[i].city, &a[i].ac, &a[i].zc);
//    while (!feof(fp))
//    {
//        ++i;
//        fscanf(fp, "%s %s %s %d %d", &a[i].pro, &a[i].ab,&a[i].city, &a[i].ac, &a[i].zc);
//    }
//    fclose(fp);
//    return i;
//}
//
//int cha(char* s, int len)  //查找数据
//{
//    int i;
//    for (i = 0; i < len; i++)
//        if (strcmp(a[i].city, s) == 0)
//            return i;
//    return -1;
//}
//
//void xian(int i)//显示所查数据
//{
//    printf("省份：%s\n", a[i].pro);
//    printf("简称：%s\n", a[i].ab);
//    printf("城市：%s\n", a[i].city);
//    printf("区号：0%d\n", a[i].ac);
//    printf("邮政编码：%d\n", a[i].zc);
//}
