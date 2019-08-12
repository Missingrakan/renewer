//#define _CRT_SECURE_NO_WARNINGS 1
//
#include <stdio.h>
//
//1. 将数组A中的内容和数组B中的内容进行交换。
//（数组一样大）
//
//int main()
//{
//	int arr1[] = { 1, 20, 5, 8, 7, 96, 5, 22, 36, 48, };
//	int arr2[] = { 9, 54, 56, 87, 14, 26, 59, 23, 66, 88 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 10; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 
//…… + 1 / 99 - 1 / 100 的值。
//#include <math.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += pow(-1,i+1)*(1.0/i);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//3. 编写程序数一下 1到 100 的所有整数中出
//现多少次数字9。
//9 19 29 39 49 59 69 79 89 99
//91 92 93 94 95 96 97 98
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		if (i/10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}