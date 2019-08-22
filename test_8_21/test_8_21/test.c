#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += (unsigned int)(((num >> i) & 1)*pow(2, 31 - i));
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int n = 0;
//	unsigned int ret = 0;
//	printf("请输入:>");
//	scanf("%d", &n);
//	ret = reverse_bit(n);
//	printf("%u\n", ret);
//	return 0;
//}
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int ret = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &num1, &num2);
//	ret = num1 + (num2 - num1) / 2;
//	printf("The average between %d and %d is %d\n", num1, num2, ret);
//	return 0;
//}
//3.编程实现：
//一组数据中只有一个数字出现了一次。
//其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("找到了是%d\n", ret);
//
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count == 1)
//			break;
//	}
//	printf("找到了是%d\n", arr[i]);
//
//	return 0;
//}
//4.
//有一个字符数组的内容为:"student a am i",
//			请你将数组的内容改为"i am a student".
//			要求：
//			不能使用库函数。
//			只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//void reverse_str(char* str)
//{
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//2.
////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9
