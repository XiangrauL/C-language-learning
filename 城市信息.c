//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int cha(char*, int);
//void xian(int);
//
//struct post
//{
//	char pro[15];
//		char ab[5];
//		char city[20];//ʡ����ƣ�����
//		int ac;
//		int zc;//���ţ��ʱ�
//};
//struct post a[10000];
//
//int main()
//{
//	char s[20];
//	int len=0,flag=-1;
//	FILE* fp = fopen("PostCode.txt","r");
//	if (!fp)
//	{
//		printf("�޷����ļ�");
//		exit(1);
//	}
//	fscanf(fp, "%s%s%s%d%d", a[len].pro, a[len].ab, a[len].city, &a[len].ac, &a[len].zc);
//	while(!feof(fp))
//	{
//		++len;
//        fscanf(fp, "%s%s%s%d%d", a[len].pro, a[len].ab, a[len].city, &a[len].ac, &a[len].zc);
//	}
//		
//
//	fclose(fp);
//
//	printf("���У�");
//	scanf("%s", s);
//	flag = cha(s, len);
//	if (flag >= 0)
//		xian(flag);
//	else
//		printf("��");
//return 0;	
//}
//
//int cha(char* s, int len)//����
//{
//	int i;
//	for (i = 0; i < len; i++)
//		if (strcmp(a[i].city, s) == 0)
//			return i;
//	return -1;
//}
//void xian(int len)//��ʾ
//{
//	printf("ʡ�ݣ�%s\n",a[len].pro);
//	printf("��ƣ�%s\n", a[len].ab);
//	printf("���У�%s\n", a[len].city);
//	printf("���ţ�%s\n", a[len].ac);
//	printf("�������룺%s\n", a[len].zc);
//}
//
