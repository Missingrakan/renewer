#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//void print_multable(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入:>");
//	scanf("%d", &n);
//	print_multable(n);
//	return 0;
//}
//2.使用函数实现两个数的交换。
//
//void swap1(int* p1, int* p2)
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void swap2(int* p1, int* p2)
//{
//	*p1 = *p1^*p2;
//	*p2 = *p1^*p2;
//	*p1 = *p1^*p2;
//}
//int main()
//{
//	int num1 = 0; 
//	int num2 = 0;
//	printf("请输入:>");
//	scanf("%d %d", &num1, &num2);
//	printf("a = %d,b = %d\n", num1, num2);
//	swap1(&num1, &num2);
//	printf("a = %d,b = %d\n", num1, num2);
//	return 0;
//}
//3.实现一个函数判断year是不是润年。
//
//
//int is_leap_year(int year)
//{
//	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	printf("请输入年份:>");
//	scanf("%d", &year);
//	ret = is_leap_year(year);
//	if (0 == ret)
//	{
//		printf("%d年不是闰年\n", year);
//	}
//	else
//	{
//		printf("%d年是闰年\n", year);
//	}
//	return 0;
//}
//4.
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//
//#include <string.h>
//#define SIZE 10
//enum Option
//{
//	EXIT,
//	INITARR,
//	EMPTYARR,
//	REVERSEARR,
//};
//void PrintArr(int* ptr, int sz)
//{
//	int i = 0;
//	printf("arr[] = {");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//	printf("}\n");
//}
//void InitArr(int* ptr,int sz)
//{
//	int num = 0;
//	int i = 0;
//	printf("请选择要初始化的元素个数(<=20):>");
//	scanf("%d", &num);
//	if (num <= sz)
//	{
//		for (i = 0; i < num; i++)
//		{
//			scanf("%d", ptr + i);
//		}
//		printf("初始化成功!\n");
//		PrintArr(ptr, sz);
//	}
//	else
//		printf("初始化元素过多!\n");
//}
//void EmptyArr(int* ptr,int sz)
//{
//	memset(ptr, 0, sizeof(int)*sz);
//	printf("清空数组成功!\n");
//	PrintArr(ptr, sz);
//}
//void ReverseArr(int* ptr,int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz/2; i++)  
//	{
//		tmp = *(ptr + i);
//		*(ptr + i) = *(ptr + sz - 1 - i);
//		*(ptr + sz - 1 - i) = tmp;
//	}
//	printf("倒置数组成功!\n");
//	PrintArr(ptr, sz);
//}
//void menu()
//{
//	printf("*********************************\n");
//	printf("******     1. InitArr      ******\n");
//	printf("******     2. EmptyArr     ******\n");
//	printf("******     3. ReverseArr   ******\n");
//	printf("******     0. Exit         ******\n");
//	printf("*********************************\n");
//}
//int main()
//{
//	int arr[SIZE] = { 0 };
//	int input = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case INITARR:
//			InitArr(arr,sz);
//			break;
//		case EMPTYARR:
//			EmptyArr(arr,sz);
//			break;
//		case REVERSEARR:
//			ReverseArr(arr,sz);
//			break;
//		case EXIT:
//			printf("退出程序!\n");
//			break;
//		default:
//			printf("选择错误，请重新输入!\n");
//			break;
//		}
//	} while (input);
//}
//5.实现一个函数，判断一个数是不是素数。
#include <math.h>
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	if (1 == n)
		return 0;
	else
		return 1;
}
int main()
{
	int num = 0;
	int ret = 0;
	
	printf("请输入:>");
	scanf("%d", &num);
	ret = is_prime(num);
	if (0 == ret)
	{
		printf("%d不是素数!\n", num);
	}
	else
	{
		printf("%d是素数!\n", num);
	}
	return 0;
}
