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
//    char pro[20];//ʡ
//    char ab[5];//���
//    char city[20];
//    int ac;//����
//    int zc;//�ʱ�
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
//    printf("���У�");
//    scanf("%s", s);
//    flag = cha(s, len);
//    if (flag >= 0)
//        xian(flag);
//    else
//        printf("�������");
//    return 0;
//}
//
//int read()  //��ȡ����
//{
//    FILE* fp = fopen("PostCode.txt", "r");     
//    if (!fp)                
//    {
//        printf("�޷����ļ�");
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
//int cha(char* s, int len)  //��������
//{
//    int i;
//    for (i = 0; i < len; i++)
//        if (strcmp(a[i].city, s) == 0)
//            return i;
//    return -1;
//}
//
//void xian(int i)//��ʾ��������
//{
//    printf("ʡ�ݣ�%s\n", a[i].pro);
//    printf("��ƣ�%s\n", a[i].ab);
//    printf("���У�%s\n", a[i].city);
//    printf("���ţ�0%d\n", a[i].ac);
//    printf("�������룺%d\n", a[i].zc);
//}
