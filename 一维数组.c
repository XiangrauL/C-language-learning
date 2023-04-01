//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	int a[5] = { 7,5,3,8,6 };
//	printf("%d,%d,%d,%d,%d\n\n", a[0], a[1], a[2], a[3], a[4]);
//
//	printf("%p,%p,%p,%p,%p\n", &a[0], &a[1], &a[2], &a[3], &a[4]);
//	printf("%d,%d,%d,%d,%d\n\n", &a[0], &a[1], &a[2], &a[3], &a[4]);
//
//	printf("%p,%p\n", &a[0], &a[0] + 1);//元素地址偏移
//	printf("%d,%d\n\n", &a[0], &a[0] + 1);//元素地址偏移
//	printf("%d,%d\n", a, a + 1);//数组本质 ：地址+偏移量
//
//	printf("%p,%p\n", &a, &a + 1);    //数组地址偏移
//	printf("%d,%d\n", &a, &a + 1);    //数组地址偏移
//	//a == &a[0];
//	system("pause");
//	return 0;
//}