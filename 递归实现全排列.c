//#include<stdio.h>		//�ݹ�ʵ��ȫ����
//#include<stdlib.h>
//
//int zhengchu(int a[]);
//void swap(int a[], int m, int n);
//void fullpermatation(int a[], int begin, int end);
//
//int count = 0;
//
//int zhengchu(int a[])
//{
//    // if(a[0]==0||a[5]==0||a[9]==0)�е㲻��������������𰸲Ŷ�--->>���ˣ�0���Է��ڵ�һλ����������һ����λ������λ��������λ������λ��
//   //  return 0;
//    if ((a[0] * 10000 + a[1] * 1000 + a[2] * 100 + a[3] * 10 + a[4]) % (a[5] * 10000 + a[6] * 1000 + a[7] * 100 + a[8] * 10 + a[9]) == 0)
//        return 1;
//    else
//        return 0;
//}
//
//void swap(int a[], int m, int n)
//{
//    int temp;
//    temp = a[m];
//    a[m] = a[n];
//    a[n] = temp;
//}
//
//void fullpermatation(int a[], int begin, int end)//���õݹ�ʵ��ȫ����
//{
//    if (begin == end)
//    {
//        if (zhengchu(a))
//        {
//            count++;
//            return;
//        }
//        return;
//    }
//
//    for (int i = begin; i <= end; i++)
//    {
//        swap(a, begin, i);//����i��Ԫ�ػ���begin
//        fullpermatation(a, begin + 1, end);//��ʣ�µ�Ԫ�ش�begin+1��������ȫ����
//        swap(a, begin, i);//��ԭ��������
//    }
//}
//
//int main(void)
//{
//    int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    fullpermatation(a, 0, 9);
//    printf("%d", count);
//    return 0;
//}
// 
// 
//#include<stdio.h>
//int judge(int a, int b)         //�ж��������ǲ�����ʮ������������϶���
//{
//	int p[10] = { 11 };           //����һ�����飬����������֣���ʼ�����飬�����в��ܳ��ֵ���ֵ����Ӧ�ô��ڵ���ʮ�������Խ���������λ����ɸ��ţ�
//	int m = 0;                 //���ȱ���
//	for (int i = 0; i < 5; i++)     //��ѭ���ķ������������λ��a�ĸ���λ��
//	{
//
//		m = a % 10;            //���࣬ȡ����
//		p[m] = m;           //����Ӧ�����ַŵ������ж�Ӧ��λ�ã���a[1]=1
//		a = a / 10;          //����һλ������
//	}
//	for (int j = 0; j < 5; j++)          //���β�b�ĸ�λ����
//	{
//		m = b % 10;
//		p[m] = m;
//		b = b / 10;
//	}
//	for (int k = 0; k < 10; k++)       //�ж�a��b�ĸ�λ�����Ƿ����ظ�
//	{
//		if (p[k] != k)          //�����ظ��������a[n]=11;����n����0-9��
//			return 0;
//	}
//	return 1;            //����λ���ֶ���ͬ���򷵻�1
//}
//
//int main()
//{
//	int n, i;
//	int sum = 0;       //�ۼƴ���������ʼ��
//	for (i = 2; i <= 79; i++)     //��i��Χ�ڵ�ѭ��
//		for (n = 1234; n * i <= 98765; n++)        //Ƕ��ѭ����������λ�������Ϊ��ĸ�����̣�������ѭ����Χ
//			if (judge(n, i * n))      //�ж�
//				sum = sum + 1;
//	printf("%d\n", sum);
//}
//#include<stdio.h>				//ֱ��������
//#include<stdlib.h>
//
//int main()
//{
//    int i, j, k, l, m, n, count = 0;
//    scanf_s("%d", &n);
//    for (m = 0; m < n; m++)
//    {
//        scanf_s("%d", &l);
//        for (i = 1; i < l / 3; i++)
//        {
//            for (j = i; j < l / 2; j++)
//            {
//                k = l - i - j;
//                if (i * i + j * j == k * k)
//                {
//                    count++;
//                }
//            }
//        }
//        printf("%d\n", count);
//        count = 0;
//    }
//
//    return 0;
//}
///*�����Ϸ���д��Ĵ���,�����ύ��д�Ĳ���*/
//#include<stdio.h>					//����ѡ��
//#include <stdlib.h>
//
//int main()
//{
//    int a[8] = {0};
//    int T, c, d, sum, count = 0;
//    int i, j, k, m, n;
//    scanf_s("%d", &T);
//    for (i = 0; i < T; i++)
//    {
//        count = 0;
//        scanf_s("%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]);
//        sum = a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6] + a[7];
//        for (j = 0; j <= 4; j++)
//            for (k = j + 1; k <= 5; k++)
//                for (m = k + 1; m <= 6; m++)
//                    for (n = m + 1; n <= 7; n++)
//                    {
//                        c = a[j] + a[k] + a[m] + a[n];
//                        d = sum - c;
//                        if (c > d)
//                        {
//                            count++;
//                        }
//                    }
//        printf("%d\n", count);
//    }
//    return 0;
//}
//
///*�����·���д��Ĵ���,�����ύ��д�Ĳ���*/
//#include<stdio.h>				//������ʽ
//#include<stdlib.h>
//
//int gsum(int x);
//
//int a[2000];
//int b[10] = { 6,2,5,5,4,5,6,3,7,6 };//���±��ʾ����,Ԫ�ش��������
//
//int gsum(int x)
//{
//    int sum = 0, i = 0;
//    if (x == 0)return 6;
//    while (x > 0)//��10-1000��ÿ���±긳ֵ
//    {
//        i = x % 10;
//        x = x / 10;
//        sum = sum + b[i];
//    }
//    return sum;
//}
//int main()
//{
//    int n, i, j, k, count = 0;
//    for (i = 0; i <= 9; i++)
//        a[i] = b[i];
//    for (int i = 10; i < 2000; i++)
//        a[i] = gsum(i);
//
//
//    while (scanf_s("%d", &n) != EOF)
//    {
//        count = 0;
//        n = n - 4;//��ȥ�Ӻź͵Ⱥ�
//        for (i = 0; i < 1000; i++)
//            for (j = 0; j < 1000; j++)
//            {
//                k = i + j;
//                if (a[i] + a[j] + a[k] == n)
//                {
//                    count++;
//                }
//            }
//        printf("%d\n\n", count);
//    }
//}
//
//
///*�����Ϸ���д��Ĵ���,�����ύ��д�Ĳ���*/
//
