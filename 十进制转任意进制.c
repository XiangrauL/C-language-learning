//#include<stdio.h>//十以下进制
//int main()
//{
//	int x, p,count=0,i=0;
//	int a[100];
//scanf_s("%d%d", &x, &p);
//	do
//	{
//	      i++;
//		a[i] = x % p;
//		x = x / p;
//
//	} while (x != 0);
//	for (; i > 0; i--)
//	printf("%d", a[i]);
//	return 0;
//}

///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>			//十六进制转十进制
//#include<string.h>
//
//int main()
//{
//    char a[8];
//    int i, lenth;
//    long long result = 0;
//    gets(a);
//    lenth = strlen(a);
//    for (i = 0; i < lenth; i++)
//    {
//        if (a[i] >= '0' && a[i] <= '9')
//        {
//            result = result * 16 + a[i] - '0';
//        }
//        if (a[i] >= 'A' && a[i] <= 'F')
//        {
//            result = result * 16 + a[i] - 'A' + 10;
//        }
//    }
//    printf("%lld", result);
//    return 0;
//}
//
//
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>				//回文平方数
//#include<stdlib.h>
//
//int jinzhi(int B, int x);
//int huiwen(int B, int x);
//
//int jinzhi(int B, int x)
//{
//    int i = 0;
//    int a[100];
//    do
//    {
//        i++;
//        a[i] = x % B;
//        x = x / B;
//    } while (x != 0);
//
//    for (; i > 0; i--)
//    {
//        if (a[i] > 9)
//        {
//            printf("%c", a[i] - 10 + 'A');
//        }
//        else
//        {
//            printf("%d", a[i]);
//        }
//    }
//    return 0;
//}
//
//int huiwen(int B, int x)
//{
//    int i = 0, j, flag = 1;
//    int a[100];
//    x = x * x;
//    do
//    {
//        i++;
//        a[i] = x % B;
//        x = x / B;
//    } while (x != 0);
//    for (j = 1; i > 0 && j <= i ; i--, j++)
//    {
//        if (a[j] != a[i])
//            flag = 0;
//    }
//    if (flag == 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//
//int main()
//{
//    int B, i, m;
//    scanf_s("%d", &B);
//    for (i = 1; i <= 300; i++)
//    {
//        m = i * i;
//        if (huiwen(B, i))
//        {
//            jinzhi(B, i);
//            printf(" ");
//            jinzhi(B, m);
//            printf("\n");
//        } 
//        
//    }
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//
///*请在上方填写你的代码,仅需提交填写的部分*/
//
//
//#include<stdio.h>				//十六进制转八进制
//#include<string.h>
//int main()//16转10再转8
//{
//    int n;
//    scanf("%d", &n);
//    while (n--)
//    {
//        char a[100005];
//        scanf("%s", a);
//        int l, i, k, ans[200005], t;
//        long long int c = 0;
//        l = strlen(a);
//        for (i = 0; i < l; i++)
//        {
//            if (a[i] >= '0' && a[i] <= '9')
//                c = c * 16 + a[i] - 48;
//            else
//                c = c * 16 + a[i] - 55;
//        }
//        // printf("%lld",c);
//        t = 0;
//        while (c != 0)
//        {
//            k = c % 8;
//            ans[t] = k;
//            c /= 8;
//            t++;
//        }
//        for (i = t - 1; i >= 0; i--)
//            printf("%d", ans[i]);
//        printf("\n");
//    }
//    return 0;
//}
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>           //16转2再转8
//#include<string.h>
//char a[100001], b[400001], e[400001];
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    while (n--)
//    {
//        scanf("%s", a);
//        int i, len = 0;
//        //先把16进制化成二进制—从后往前展开 
//        for (i = strlen(a) - 1; i >= 0; i--)
//        {
//            int v;
//            if (a[i] >= '0' && a[i] <= '9')
//                v = a[i] - '0';
//            else
//                v = a[i] - 'A' + 10;
//            for (int j = 0; j < 4; j++)
//            {
//                b[len++] = v % 2 + '0';
//                v /= 2;
//            }
//        }
//
//        b[len] = '\0';
//        int x = 0, cnt = 1;
//        int l = 0;
//        for (i = 0; i < len; i++)
//        {
//            //每三位二进制转成一位8进制,最后不足三位补0
//            if (cnt == 4 || i == len - 1)
//            {
//                x = cnt * (b[i] - '0') + x;
//                cnt = 1;
//                e[l++] = x + '0';
//                x = 0;
//            }
//            else
//            {
//                x = cnt * (b[i] - '0') + x;
//                cnt *= 2;
//            }
//        }
//        i = l - 1;
//        while (i >= 0 && e[i] == '0')//去掉前导0           
//            i--;
//        if (i < 0)
//            printf("0");
//        for (; i >= 0; i--)
//        {
//            printf("%c", e[i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//
//#include<stdio.h>			//十进制转十六进制
//
//char base16(int a);
//
//char base16(int a)
//{
//	switch (a) //进制转换
//	{
//	case 0: return '0'; break;
//	case 1: return '1'; break;
//	case 2: return '2'; break;
//	case 3: return '3'; break;
//	case 4: return '4'; break;
//	case 5: return '5'; break;
//	case 6: return '6'; break;
//	case 7: return '7'; break;
//	case 8: return '8'; break;
//	case 9: return '9'; break;
//	case 10: return 'A'; break;
//	case 11: return 'B'; break;
//	case 12: return 'C'; break;
//	case 13: return 'D'; break;
//	case 14: return 'E'; break;
//	case 15: return 'F'; break;
//	}
//}
//
//int main()
//{
//	int x, i = 0;
//	int a[100];
//	scanf("%d", &x);
//	do
//	{
//		i++;
//		a[i] = x % 16;
//		x = x / 16;
//
//	} while (x != 0);
//	for (; i > 0; i--)
//	{
//		putchar(base16(a[i]));
//	}
//
//	return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>				//数制转换（***）
//#include<string.h>
//#include<math.h>
//
////int jinzhi(int n);//n进制转10进制
//int startbase(char a[]);
//
//int jinzhi(int n, char a[])
//{
//    int i, j, sum = 0;
//    char t;
//    sum = 0;
//    for (j = 0; j <= strlen(a) - 1; j++)
//    {
//        t = a[j];
//        if (t > 60)
//        {
//            t -= 7;
//        }
//        t -= 48;
//        sum += t * pow(n, strlen(a) - 1 - j);
//    }
//
//
//}
////int jinzhi(int n,char a[])//进制转换
////{   
//  //  int i, lenth;
//    //long long result = 0;
//    //lenth = strlen(a);
//    //for (i = 0; i < lenth; i++)
//    //{
//
//      //  if (a[i] >= '0' && a[i] <= '9')
//        //{       
//          //  result = result * n + a[i] - '0';
//        //}
//        //if (a[i] >= 'A' && a[i] <= 'Z')
//        //{
//            ////if(a[i]-'A'+10 > n)
//            //result = result * n + a[i] - 'A' + 10;
//        //}
//    //}   
//    //return result;
////}
//
//int startbase(char a[])  //找最小合法进制转化数
//{
//    int i, max = a[0];
//    for (i = 1; i <= strlen(a) - 1; i++)
//    {
//        if (max < a[i])
//        {
//            max = a[i];
//        }
//    }
//    if (max > 60)
//    {
//        max = max + 58 - 65;
//    }
//    max = max - '0' + 1;
//    return max;
//}
//
//int main()
//{
//    int num1, i, j, max1, max2;
//    char M[50], N[50];
//    scanf("%s %s", &M, &N);
//    max1 = startbase(M);
//    max2 = startbase(N);
//    for (i = max1; i <= 36; i++)
//    {
//        // if (max1 >= '0' && max1 <= '9')
//         //{
//         //    if(max1-'0' >= i)
//           //  i= max1-'0'+ 1;      
//         //}
//         //if (max1 >= 'A' && max1 <= 'Z')
//         //{
//         //    if(max1-'A' + 10 >= i)
//         //    i= max1 - 'A' + 10 + 1;
//         //}    
//
//        num1 = jinzhi(i, M);
//        for (j = max2; j <= 36; j++)
//        {
//
//            if (num1 == jinzhi(j, N))
//            {
//                printf("%s (base %d) = %s (base %d)\n", M, i, N, j);
//                return 0;
//            }
//        }
//    }
//    printf("%s is not equal to %s in any base 2..36\n", M, N);
//    return 0;
//}
//
///*请在上方填写你的代码,仅需提交填写的部分*/
//
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>				//数制转换
//#include<stdlib.h>
//#include<string.h>
//
//int base1(int n, char a[]);
//int base2(int p, int x);
//
//int base1(int n, char a[])//n进制转10进制
//{
//    int i, lenth;
//    long long result = 0;
//    lenth = strlen(a);
//    for (i = 0; i < lenth; i++)
//    {
//
//        if (a[i] >= '0' && a[i] <= '9')
//        {
//            result = result * n + a[i] - '0';
//        }
//        if (a[i] >= 'A' && a[i] <= 'Z')
//        {
//            //if(a[i]-'A'+10 > n)
//            result = result * n + a[i] - 'A' + 10;
//        }
//    }
//    return result;
//}
//
//int base2(int p, int x)
//{
//    int i = 0;
//    int a[100];
//    char ch;
//    do
//    {
//        i++;
//        a[i] = x % p;
//        x = x / p;
//
//    } while (x != 0);
//    for (; i > 0; i--)
//    {
//        if (a[i] >= 10)
//        {
//            ch = (char)a[i] + 55;
//            printf("%s", ch);
//        }
//        else
//            printf("%d", a[i]);
//    }
//
//    return 0;
//}
//
//int main()
//{
//    int n, p, i, x,t;
//    char a[20];
//    for (i = 0; ; i++)
//    {
//        scanf_s("%c", &a[i]);
//        if (a[i] == '<')
//            break;
//    }
//    t = i;
//    scanf_s("%d", &n);
//    scanf_s(">%d", &p);
//    x = base1(n, a);
//    for (i = 0; i < t; i++)
//        printf("%c", a[i]);
//    printf("<%d>=", n);
//    base2(p, x);
//    printf("<%d>", p);
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
