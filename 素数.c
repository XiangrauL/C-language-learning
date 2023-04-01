//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//    int i, n;///!!!!!数据过大用long int 或longlong！！！！
//    scanf_s("%d", &n);
//    if (n < 2)
//    {
//        printf("No");
//        return 0;
//    }
//    if (n == 2|| n==3)
//    {
//        printf("Yes");
//        return 0;
//    }
//    if (n % 6 != 1 && n % 6 != 5)//孪生素数
//    {
//        printf("No");
//        return 0;
//    }
//    for (i = 5; i <= sqrt(n); i += 6)
//    {
//        if (n % i == 0 || n % (i+2) == 0)
//        {
//            printf("No");
//            return 0;
//        }
//    }
//    printf("Yes");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//
//int number[10000000], prime[1000000];
//
//int main()
//{
//    int i, j, n, count = 0;
//    scanf_s("%d", &n);
//    if (n < 2)
//    {
//        printf("No");
//        return 0;
//    }
//    if (n == 2)
//    {
//        printf("Yes");
//        return 0;
//    }
//    for (i = 2; i <= n; i++)
//    {
//        if (number[i] == 0)
//        {
//            prime[++count] = i;
//        }
//        for (j = 1; j <= count && i * prime[j] <= n; j++)
//        {
//            number[i * prime[j]] = 1;
//            if (i % prime[j] == 0)
//                break;      //保证每个数只被最小的数筛一次
//        }
//
//    }
//    
//    if (n == prime[count])
//    {
//        printf("Yes");
//    }
//    else
//    {
//        printf("No");
//    }
//    return 0;
//}
// 
// 
//#include<stdio.h>		//第100002个素数
//#include<stdlib.h>
//
//int prime(int n)
//{
//    int i;
//    if (n == 1)
//        return 0;
//    if (n == 2)
//        return 1;
//    for (i = 2; i * i <= n; i++)
//    {
//        if (n % i == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int count = 0;
//    long long n = 2;
//    for (; count < 100002; n++)
//    {
//        if (prime(n))
//            count++;
//    }
//    printf("%lld", n - 1);
//    return 0;
//}
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>						//桐桐数
//#include<stdlib.h>
//
//int judge1(long int x);//判断素数
//int judge2(long int x);//判断桐桐数
//
//int judge1(long int x)
//{
//    long int i;
//    if (x == 1) return 0;
//    if (x == 2) return 1;
//    for (i = 2; i * i <= x; i++)
//    {
//        if (x % i == 0) return 0;
//    }
//    return 1;
//}
//
//int judge2(long int x)
//{
//    long int i;
//    if (x == 1 || x == 2) return 0;
//    for (i = 2; i * i <= x; i++)
//    {
//        if (x % i == 0)
//            if (judge1(i))
//                if (judge1(x / i))
//                    return 1;
//    }
//    return 0;
//}
//
//int main()
//{
//    long int x;
//    scanf("%ld", &x);
//    if (judge2(x))
//        printf("It's a Tongtong number.");
//    else
//        printf("It's not a Tongtong number.");
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>						//孪生素数
//#include<math.h>
//int prime(int n)
//{
//    int i;
//    if (n < 2)
//    {
//        return 0;
//    }
//    if (n == 2 || n == 3)
//    {
//        return 1;
//    }
//    if (n % 6 != 1 && n % 6 != 5)//孪生素数的性质
//    {
//        return 0;
//    }
//    for (i = 5; i <= sqrt(n); i += 6)
//    {
//        if (n % i == 0 || n % (i + 2) == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int i, N, count = 0;
//    scanf("%d", &N);
//    if (N < 3)
//    {
//        printf("0");
//        return 0;
//    }
//    if (N == 3 || N == 4)
//    {
//        printf("1");
//        return 0;
//    }
//    if (N == 5)
//    {
//        printf("2");
//        return 0;
//    }
//    for (i = 3; i <= N - 2; i += 2)//不计2，3这个素数对，之后加上
//    {
//        if (prime(i) && prime(i + 2))
//        {
//            count++;
//        }
//    }
//    printf("%d", count + 1);//加上2，3这个素数对
//    return 0;
//}
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>
//#include<stdlib.h>
//
//int prime(int x);
//int superprime(int x);
//
//int prime(int x)
//{
//    int i;
//    if (x <= 1) return 0;
//    if (x == 2 || x == 3) return 1;
//    if (x % 6 != 1 && x % 6 != 5) return 0;//孪生素数
//    for (i = 5; i * i <= x; i += 6)
//        if (x % i == 0 || x % (i + 2) == 0)
//            return 0;
//    return 1;
//}
//
//int superprime(int x)
//{
//    while (x > 0)
//    {
//        if (prime(x) == 0)
//            return 0;
//        x = x / 10;
//    }
//    return 1;
//}
//
//int main()
//{
//    int n, i;
//    scanf_s("%d", &n);
//    if (n >= 10)
//        printf("2 3 5 7 ");
//    for (i = 11; i <= n; i += 2)
//        if (superprime(i) == 1)
//            printf("%d ", i);
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//#include<stdio.h>					//超级素数，本地编译器可行，提交平台runtime error!
//#include<stdlib.h>
//
//#define MAX 100000001
//int isprime[MAX] = { 0 };
//
////int prime(int x);
////int superprime(int x);
////void TheSieveofEratosthees();
//void TheSieveofEratosthees()
//{
//    int i, j;
//    for (i = 2; i < MAX; i++)
//        isprime[i] = 1;
//    for (i = 2; i < MAX; i++)
//    {
//        if (isprime[i])
//            for (j = i + i; j < MAX; j += i)
//                isprime[j] = 0;
//    }
//}
//
//
//int superprime(int x)
//{
//    while (x > 0)
//    {
//        if (isprime[x] == 0)
//            return 0;
//        x = x / 10;
//    }
//    return 1;
//}
//
//int main()
//{
//    int n, i;
//    TheSieveofEratosthees();
//    scanf_s("%d", &n);
//    printf("2 3 5 7 ");
//    for (i = 11; i <= n; i += 2)
//        if (superprime(i) == 1)
//            printf("%d ", i);
//
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在上方填写你的代码,仅需提交填写的部分*/
//
///*请在下方编写你的代码,仅需提交填写的部分*/
//# include<stdio.h>      //幸运数
//# define MAX 50000
//
//int createluck(int luck[]);
//int numluck(int luck[], int max, int num1, int num2);
//
//int createluck(int luck[])//生成幸运数
//{
//    int i, j;
//    int point_pre = 1;//标记被除数数组下标，也就是上一次循环的幸运数
//    int point_max = MAX;//完成删除之后剩余的元素个数
//
//    for (i = 0; i < MAX; i++)//第一次循环，所有幸运数在奇数中生成
//    {
//        luck[i] = 2 * i + 1;
//    }
//
//    while (point_pre < point_max)
//    {
//        for (j = point_pre, i = point_pre; j < point_max; j++)
//        {
//            if ((j + 1) % luck[point_pre] != 0)//保留不能被整除的序号的数
//            {
//                luck[i] = luck[j];
//                i++;
//            }
//        }
//        point_pre++;//point_pre之前的数都是幸运数
//        point_max = i;//point_max为界限
//    }
//    return point_max;
//}
//
//int numluck(int luck[], int max, int num1, int num2)
//{
//    int i, count = 0;
//
//    for (i = 0; i < max; i++)
//    {
//        if (luck[i] >= num2)
//            break;
//        else if (luck[i] > num1)//不含num1和num2
//            count++;
//    }
//    return count;
//}
//
//int main(void)
//{
//    int luck[MAX] = { 0 };
//    int max, count, i;
//    int num1, num2;
//
//    max = createluck(luck);//1~~MAX幸运数个数,最大序号
//    scanf("%d %d", &num1, &num2);
//    count = numluck(luck, max, num1, num2);//num1~~num2幸运数个数
//    printf("%d", count);
//
//    return 0;
//}
///*请在上方填写你的代码,仅需提交填写的部分*/
