//#include<stdio.h>
//void Bubble_sort(int* arr, int n)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("������10����������");
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(&arr, sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i, j, upp, low, dig, spa, oth;
//    char text[3][80];
//    upp = low = dig = spa = oth = 0;
//    for (i = 0; i < 3; i++)
//    {
//        printf("please input line %d:\n", i + 1);
//        gets(text[i]);
//        for (j = 0; j < 80 && text[i][j] != '\0'; j++)
//        {
//            if (text[i][j] >= 'A' && text[i][j] <= 'Z')
//                upp++;
//            else if (text[i][j] >= 'a' && text[i][j] <= 'z')
//                low++;
//            else if (text[i][j] >= '0' && text[i][j] <= '9')
//                dig++;
//            else if (text[i][j] == ' ')
//                spa++;
//            else
//                oth++;
//        }
//    }
//    printf("\nupper case: %d\n", upp);
//    printf("lower case: %d\n", low);
//    printf("digit     : %d\n", dig);
//    printf("space     : %d\n", spa);
//    printf("other     : %d\n", oth);
//    return 0;
//}


#include<stdio.h>
int main()
{
    int i, j;
    int arr[3][4] = { 0 };
    int max = 0;
    int flag = 0;//����ҵ��˰��������ֵ 1 
    //����һ����ά����
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf_s("%d", &arr[i][j]);
        }
    }
    //�Ұ���
    for (i = 0; i < 3; i++)
    {
        //��max���ڶ�ά����� i �еĵ�һ��Ԫ��
        max = arr[i][0];

        //��¼���ֵ���ڵ���
        int t = 0;
        //�ҳ�һ���е����ֵ����ֵ���� max
        for (j = 1; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                t = j;
            }
        }
        //�ж� max �Ƿ�Ϊ��������С��Ԫ��
        for (j = 0; j < 3; j++)
        {
            //�ϱߵ� t ��¼�� max ���ڵ���
            //������ max ����е�Ԫ�رȽϣ��� max �Ƿ�Ϊ��������С��Ԫ��
            if (max > arr[j][t])
            {
                //������ھ�����
                break;

            }
        }
        //���ȫ���Ƚ���(Ҳ����j==3��ʱ��)˵�� max Ϊ������С��maxΪ����
        if (j == 3)
        {
            printf("�ҵ��˰����ڣ�%d��%d�У�Ϊ%d\n", i+1, j+1, arr[i][t]);
            flag = 1;
            break;//��Ϊֻ��һ�����㣬�����ҵ��˾��˳�ѭ��
        }
    }
    if (flag != 1)
    {
        printf("û���ҵ����� \n");
    }
    return 0;
}