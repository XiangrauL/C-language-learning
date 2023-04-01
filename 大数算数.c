//void sum(char* str1, char* str2, int MAX_LEN);
//void substract(char* str1, char* str2, int MAX_LEN);
//void product(char* str1, char* str2, int MAX_LEN);
//void divide(char* str1, char* str2, int MAX_LEN);
//
//int main(int argc, const char* argv[])
//{
//
//    const int MAX_LEN = 200;
//
//    char str1[MAX_LEN], str2[MAX_LEN];
//
//    scanf("%s", str1);
//    scanf("%s", str2);
//
//    printf("和：");
//    sum(str1, str2, MAX_LEN);
//    printf("差：");
//    substract(str1, str2, MAX_LEN);
//    printf("乘：");
//    product(str1, str2, MAX_LEN);
//    printf("除：");
//    divide(str1, str2, MAX_LEN);
//
//    return 0;
//}
//
//void sum(char* str1, char* str2, int MAX_LEN)//加
//{
//    //    求两个不超过100位的非负整数的和
//
//    int arr1[MAX_LEN];
//    int arr2[MAX_LEN];
//
//    memset(arr1, 0, sizeof(arr1));//对数组进行清零
//    memset(arr2, 0, sizeof(arr2));
//
//    int strlen1 = (int)strlen(str1);
//    int strlen2 = (int)strlen(str2);
//
//    int i, j;
//    for (i = 0, j = strlen1 - 1; j >= 0; i++, j--)//把字符串的字符转换为数字后
//        arr1[i] = str1[j] - '0';            //从后往前传递给数组
//    for (i = 0, j = strlen2 - 1; j >= 0; i++, j--)
//        arr2[i] = str2[j] - '0';
//
//    for (i = 0; i < MAX_LEN; i++)//按位相加
//    {
//        arr1[i] += arr2[i];//数组arr1保存运算后的结果
//        if (arr1[i] >= 10) //按10进位
//        {
//            arr1[i] -= 10;
//            arr1[i + 1]++;//进位
//        }
//    }
//
//    for (i = MAX_LEN - 1; (i >= 0) && (arr1[i] == 0); i--);//从数组后面往前输出，即为结果
//    if (i >= 0)
//        for (; i >= 0; i--)
//            printf("%d", arr1[i]);
//    else
//        printf("0");
//    printf("\n");
//}
//void substract(char* str1, char* str2, int MAX_LEN)//减
//{
//    //    求两个不超过100位的非负整数的差
//
//    int arr1[MAX_LEN];
//    int arr2[MAX_LEN];
//
//    memset(arr1, 0, sizeof(arr1));//对数组进行清零
//    memset(arr2, 0, sizeof(arr2));
//
//    int strlen1 = (int)strlen(str1);
//    int strlen2 = (int)strlen(str2);
//
//    int i, j;
//    for (i = 0, j = strlen1 - 1; j >= 0; i++, j--)//把字符串的字符转换为数字后
//        arr1[i] = str1[j] - '0';            //从后往前传递给数组
//    for (i = 0, j = strlen2 - 1; j >= 0; i++, j--)
//        arr2[i] = str2[j] - '0';
//
//    int nStartPos = 0;
//    for (i = 0; i < MAX_LEN; i++)//按位相减
//    {
//        arr1[i] -= arr2[i];//数组arr1保存运算后的结果
//        if (arr1[i] < 0) //借位
//        {
//            arr1[i] += 10;
//            arr1[i + 1]--;//借位
//        }
//        if (arr1[i])
//            nStartPos = i;//记录最高位的位置
//    }
//
//    //    for(i=MAX_LEN-1;(i>=0)&&(arr1[i]==0);i--);//从数组后面往前输出，即为结果
//    i = nStartPos;
//    if (i >= 0)
//        for (; i >= 0; i--)
//            printf("%d", arr1[i]);
//    else
//        printf("0");
//    printf("\n");
//}
//void product(char* str1, char* str2, int MAX_LEN)//乘
//{
//    //    求两个不超过100位的非负整数的积
//
//    int arr1[MAX_LEN], arr2[MAX_LEN], arr3[2 * MAX_LEN];
//
//    for (int k = 0; k < MAX_LEN; k++)arr1[k] = 0;
//    for (int k = 0; k < MAX_LEN; k++)arr2[k] = 0;
//    for (int k = 0; k < 2 * MAX_LEN; k++)arr3[k] = 0;
//
//    int i, j;
//    int strlen1 = (int)strlen(str1);
//    int strlen2 = (int)strlen(str2);
//
//    for (i = 0, j = strlen1 - 1; j >= 0; i++, j--)//把字符串的字符转换为数字后
//        arr1[i] = str1[j] - '0';            //从后往前传递给数组
//    for (i = 0, j = strlen2 - 1; j >= 0; i++, j--)
//        arr2[i] = str2[j] - '0';
//
//    for (i = 0; i < strlen2; i++)//用第二个数乘以第一个数
//    {
//        for (j = 0; j < strlen1; j++)
//            arr3[i + j] += arr2[i] * arr1[j];//乘
//    }
//    for (i = 0; i < MAX_LEN * 2; i++)//进位
//    {
//        if (arr3[i] >= 10)
//        {
//            arr3[i + 1] += arr3[i] / 10;
//            arr3[i] %= 10;
//        }
//    }
//    for (i = 2 * MAX_LEN - 1; (arr3[i] == 0) && (i >= 0); i--);
//    if (i >= 0)
//        for (; i >= 0; i--)
//            printf("%d", arr3[i]);
//    else
//        printf("0");
//    printf("\n");
//}
//void divide(char* str1, char* str2, int MAX_LEN)//除
//{
//    int divide_sub(int* p1, int* p2, int strlen1, int strlen2);
//    int arr1[MAX_LEN]; //被除数, arr1[0]对应于个位
//    int arr2[MAX_LEN]; //除数, arr2[0]对应于个位
//    int aResult[MAX_LEN]; //存放商，aResult[0]对应于个位
//    //长度为 strlen1 的大整数p1 减去长度为strlen2 的大整数p2
//    //结果放在p1 里，返回值代表结果的长度
//    //如不够减返回-1，正好减完返回 0
//
//    int i, j;
//    int strlen1 = (int)strlen(str1);
//    memset(arr1, 0, sizeof(arr1));
//    memset(arr2, 0, sizeof(arr2));
//    memset(aResult, 0, sizeof(aResult));
//
//    for (j = 0, i = strlen1 - 1; i >= 0; i--)
//        arr1[j++] = str1[i] - '0';
//    int strlen2 = (int)strlen(str2);
//    for (j = 0, i = strlen2 - 1; i >= 0; i--)
//        arr2[j++] = str2[i] - '0';
//    if (strlen1 < strlen2)
//    {
//        printf("0\n");
//    }
//    int nTimes = strlen1 - strlen2;
//    if (nTimes > 0)
//    {
//        for (i = strlen1 - 1; i >= nTimes; i--)
//            arr2[i] = arr2[i - nTimes];//朝高位移动
//        for (; i >= 0; i--)//低位补0
//            arr2[i] = 0;
//        strlen2 = strlen1;
//    }
//    for (j = 0; j <= nTimes; j++)
//    {
//        int nTmp;
//        //一直减到不够减为止
//        //先减去若干个 arr2×(10 的 nTimes 次方)，
//        //不够减了，再减去若干个 arr2×(10 的 nTimes-1 次方)，......
//        while ((nTmp = divide_sub(arr1, arr2 + j, strlen1, strlen2 - j)) >= 0)
//        {
//            strlen1 = nTmp;
//            aResult[nTimes - j]++; //每成功减一次，则将商的相应位加1
//        }
//    }
//    //下面输出结果，先跳过高位0
//    for (i = MAX_LEN - 1; (i >= 0) && (aResult[i] == 0); i--);
//    if (i >= 0)
//        for (; i >= 0; i--)
//            printf("%d", aResult[i]);
//    else
//        printf("0");
//    printf("\n");
//}
//int divide_sub(int* p1, int* p2, int strlen1, int strlen2)
//{
//    int i;
//    if (strlen1 < strlen2)
//        return -1;
//    //下面判断p1 是否比p2 大，如果不是，返回-1
//    if (strlen1 == strlen2)
//    {
//        for (i = strlen1 - 1; i >= 0; i--)
//        {
//            if (p1[i] > p2[i])           break; //p1>p2
//            else if (p1[i] < p2[i])   return -1; //p1<p2
//        }
//    }
//    for (i = 0; i < strlen1; i++)
//    { //要求调用本函数确保当i>=strlen2 时，p2[i] ＝ 0
//        p1[i] -= p2[i];
//        if (p1[i] < 0)
//        {
//            p1[i] += 10;
//            p1[i + 1] --;
//        }
//    }
//    for (i = strlen1 - 1; i >= 0; i--)
//        if (p1[i])//找到最高位第一个不为0
//            return i + 1;
//    return 0;//全部为0，说明两者相等
//}
//
