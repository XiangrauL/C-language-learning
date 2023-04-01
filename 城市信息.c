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
//		char city[20];//省，简称，城市
//		int ac;
//		int zc;//区号，邮编
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
//		printf("无法打开文件");
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
//	printf("城市：");
//	scanf("%s", s);
//	flag = cha(s, len);
//	if (flag >= 0)
//		xian(flag);
//	else
//		printf("无");
//return 0;	
//}
//
//int cha(char* s, int len)//查找
//{
//	int i;
//	for (i = 0; i < len; i++)
//		if (strcmp(a[i].city, s) == 0)
//			return i;
//	return -1;
//}
//void xian(int len)//显示
//{
//	printf("省份：%s\n",a[len].pro);
//	printf("简称：%s\n", a[len].ab);
//	printf("城市：%s\n", a[len].city);
//	printf("区号：%s\n", a[len].ac);
//	printf("邮政编码：%s\n", a[len].zc);
//}
//
