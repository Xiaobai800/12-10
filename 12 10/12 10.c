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
//	printf("请输入10个无序数：");
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
    int flag = 0;//如果找到了鞍点给它赋值 1 
    //输入一个二维数组
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf_s("%d", &arr[i][j]);
        }
    }
    //找鞍点
    for (i = 0; i < 3; i++)
    {
        //让max等于二维数组第 i 行的第一个元素
        max = arr[i][0];

        //记录最大值所在的列
        int t = 0;
        //找出一行中的最大值并把值赋给 max
        for (j = 1; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                t = j;
            }
        }
        //判断 max 是否为该列上最小的元素
        for (j = 0; j < 3; j++)
        {
            //上边的 t 记录了 max 所在的列
            //所以用 max 与该列的元素比较，看 max 是否为该列上最小的元素
            if (max > arr[j][t])
            {
                //如果大于就跳出
                break;

            }
        }
        //如果全部比较完(也就是j==3的时候)说明 max 为当列最小，max为鞍点
        if (j == 3)
        {
            printf("找到了鞍点在：%d行%d列，为%d\n", i+1, j+1, arr[i][t]);
            flag = 1;
            break;//因为只有一个鞍点，所以找到了就退出循环
        }
    }
    if (flag != 1)
    {
        printf("没有找到鞍点 \n");
    }
    return 0;
}