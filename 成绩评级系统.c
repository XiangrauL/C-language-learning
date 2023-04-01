//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	
//	printf("欢迎使用本系统，请输入成绩（0-100），输入-1退出\n");
//	while (1)
//	{	
//		printf("请输入成绩（0-100），输入-1退出\n");
//		int value = -1;
//		scanf_s("%d", &value);
//		if (-1 == value)
//		{
//			break;
//			}
//		if (value < 0 || value>100)
//		{
//			printf("输入值错误，请重新输入");
//			continue;
//		}
//		if (value < 60)
//		{
//			printf("不及格\n");
//		}
//		else if (value >= 60&& value<70 )
//		{
//			printf("及格\n");
//		}
//		else if (value >= 70 && value < 80)
//		{
//			printf("良好\n");
//		}
//		else if (value >= 80 && value < 90)
//		{
//			printf("优秀\n");
//		}
//		else if (value >= 90 && value <= 100)
//		{
//			printf("完美\n");
//		}
//		else
//		{
//			printf("错误\n");
//		}
//
//	}
//
//	printf("感谢使用本系统再见！");
//	system("pause");
//	return 0;
//}