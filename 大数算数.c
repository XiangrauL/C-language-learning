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
//    printf("�ͣ�");
//    sum(str1, str2, MAX_LEN);
//    printf("�");
//    substract(str1, str2, MAX_LEN);
//    printf("�ˣ�");
//    product(str1, str2, MAX_LEN);
//    printf("����");
//    divide(str1, str2, MAX_LEN);
//
//    return 0;
//}
//
//void sum(char* str1, char* str2, int MAX_LEN)//��
//{
//    //    ������������100λ�ķǸ������ĺ�
//
//    int arr1[MAX_LEN];
//    int arr2[MAX_LEN];
//
//    memset(arr1, 0, sizeof(arr1));//�������������
//    memset(arr2, 0, sizeof(arr2));
//
//    int strlen1 = (int)strlen(str1);
//    int strlen2 = (int)strlen(str2);
//
//    int i, j;
//    for (i = 0, j = strlen1 - 1; j >= 0; i++, j--)//���ַ������ַ�ת��Ϊ���ֺ�
//        arr1[i] = str1[j] - '0';            //�Ӻ���ǰ���ݸ�����
//    for (i = 0, j = strlen2 - 1; j >= 0; i++, j--)
//        arr2[i] = str2[j] - '0';
//
//    for (i = 0; i < MAX_LEN; i++)//��λ���
//    {
//        arr1[i] += arr2[i];//����arr1���������Ľ��
//        if (arr1[i] >= 10) //��10��λ
//        {
//            arr1[i] -= 10;
//            arr1[i + 1]++;//��λ
//        }
//    }
//
//    for (i = MAX_LEN - 1; (i >= 0) && (arr1[i] == 0); i--);//�����������ǰ�������Ϊ���
//    if (i >= 0)
//        for (; i >= 0; i--)
//            printf("%d", arr1[i]);
//    else
//        printf("0");
//    printf("\n");
//}
//void substract(char* str1, char* str2, int MAX_LEN)//��
//{
//    //    ������������100λ�ķǸ������Ĳ�
//
//    int arr1[MAX_LEN];
//    int arr2[MAX_LEN];
//
//    memset(arr1, 0, sizeof(arr1));//�������������
//    memset(arr2, 0, sizeof(arr2));
//
//    int strlen1 = (int)strlen(str1);
//    int strlen2 = (int)strlen(str2);
//
//    int i, j;
//    for (i = 0, j = strlen1 - 1; j >= 0; i++, j--)//���ַ������ַ�ת��Ϊ���ֺ�
//        arr1[i] = str1[j] - '0';            //�Ӻ���ǰ���ݸ�����
//    for (i = 0, j = strlen2 - 1; j >= 0; i++, j--)
//        arr2[i] = str2[j] - '0';
//
//    int nStartPos = 0;
//    for (i = 0; i < MAX_LEN; i++)//��λ���
//    {
//        arr1[i] -= arr2[i];//����arr1���������Ľ��
//        if (arr1[i] < 0) //��λ
//        {
//            arr1[i] += 10;
//            arr1[i + 1]--;//��λ
//        }
//        if (arr1[i])
//            nStartPos = i;//��¼���λ��λ��
//    }
//
//    //    for(i=MAX_LEN-1;(i>=0)&&(arr1[i]==0);i--);//�����������ǰ�������Ϊ���
//    i = nStartPos;
//    if (i >= 0)
//        for (; i >= 0; i--)
//            printf("%d", arr1[i]);
//    else
//        printf("0");
//    printf("\n");
//}
//void product(char* str1, char* str2, int MAX_LEN)//��
//{
//    //    ������������100λ�ķǸ������Ļ�
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
//    for (i = 0, j = strlen1 - 1; j >= 0; i++, j--)//���ַ������ַ�ת��Ϊ���ֺ�
//        arr1[i] = str1[j] - '0';            //�Ӻ���ǰ���ݸ�����
//    for (i = 0, j = strlen2 - 1; j >= 0; i++, j--)
//        arr2[i] = str2[j] - '0';
//
//    for (i = 0; i < strlen2; i++)//�õڶ��������Ե�һ����
//    {
//        for (j = 0; j < strlen1; j++)
//            arr3[i + j] += arr2[i] * arr1[j];//��
//    }
//    for (i = 0; i < MAX_LEN * 2; i++)//��λ
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
//void divide(char* str1, char* str2, int MAX_LEN)//��
//{
//    int divide_sub(int* p1, int* p2, int strlen1, int strlen2);
//    int arr1[MAX_LEN]; //������, arr1[0]��Ӧ�ڸ�λ
//    int arr2[MAX_LEN]; //����, arr2[0]��Ӧ�ڸ�λ
//    int aResult[MAX_LEN]; //����̣�aResult[0]��Ӧ�ڸ�λ
//    //����Ϊ strlen1 �Ĵ�����p1 ��ȥ����Ϊstrlen2 �Ĵ�����p2
//    //�������p1 �����ֵ�������ĳ���
//    //�粻��������-1�����ü��귵�� 0
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
//            arr2[i] = arr2[i - nTimes];//����λ�ƶ�
//        for (; i >= 0; i--)//��λ��0
//            arr2[i] = 0;
//        strlen2 = strlen1;
//    }
//    for (j = 0; j <= nTimes; j++)
//    {
//        int nTmp;
//        //һֱ����������Ϊֹ
//        //�ȼ�ȥ���ɸ� arr2��(10 �� nTimes �η�)��
//        //�������ˣ��ټ�ȥ���ɸ� arr2��(10 �� nTimes-1 �η�)��......
//        while ((nTmp = divide_sub(arr1, arr2 + j, strlen1, strlen2 - j)) >= 0)
//        {
//            strlen1 = nTmp;
//            aResult[nTimes - j]++; //ÿ�ɹ���һ�Σ����̵���Ӧλ��1
//        }
//    }
//    //��������������������λ0
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
//    //�����ж�p1 �Ƿ��p2 ��������ǣ�����-1
//    if (strlen1 == strlen2)
//    {
//        for (i = strlen1 - 1; i >= 0; i--)
//        {
//            if (p1[i] > p2[i])           break; //p1>p2
//            else if (p1[i] < p2[i])   return -1; //p1<p2
//        }
//    }
//    for (i = 0; i < strlen1; i++)
//    { //Ҫ����ñ�����ȷ����i>=strlen2 ʱ��p2[i] �� 0
//        p1[i] -= p2[i];
//        if (p1[i] < 0)
//        {
//            p1[i] += 10;
//            p1[i + 1] --;
//        }
//    }
//    for (i = strlen1 - 1; i >= 0; i--)
//        if (p1[i])//�ҵ����λ��һ����Ϊ0
//            return i + 1;
//    return 0;//ȫ��Ϊ0��˵���������
//}
//
