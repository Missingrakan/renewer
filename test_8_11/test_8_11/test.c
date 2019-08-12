#define _CRT_SECURE_NO_WARNINGS 1
//
#include <stdio.h>
#include <stdlib.h>
//
//1. 给定两个整形变量的值，将两个值的内容进行交换。
//int main()
//{
//	int num1 = 20;
//	int num2 = 30;
//	int tmp = 0;
//	printf("num1 = %d,num2 = %d\n", num1, num2);
//	tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//	printf("num1 = %d,num2 = %d\n", num1, num2);
//
//	system("pause");
//	return 0;
//}
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//int main()
//{
//	int num1 = 20;
//	int num2 = 30;
//	printf("num1 = %d,num2 = %d\n", num1,num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("num1 = %d,num2 = %d\n", num1, num2);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("a = %d,b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d,b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}
//3.求10 个整数中最大值。
//int main()
//{
//	int arr[] = { 1, 13, 56, 89, -6, 58, 18, 27, 30, 66 };
//	int i = 0;
//	int max = arr[1];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	system("pause");
//	return 0;
//}
//4.将三个数按从大到小输出。
//void Swap(int* x,int* y)
//{
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("请输入三个数:>");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b , &c);
//	}
//	printf("%d %d %d", a, b, c);
//
//	system("pause");
//	return 0;
//}
//5.求两个数的最大公约数。

//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	while (x != y)
//	{
//		if (x>y)
//			x = x - y;
//		else
//			y = y - x;
//	}
//	printf("最大公约数为：%d\n", x);
//
//	system("pause");
//	return 0;
//}

int main()
{
	int a = 30; 
	int b = 20;
	int c = 0;
	//printf("请输入两个操作数:>");
	//scanf("%d %d", &a, &b);
	while (c=a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);

	
	return 0;
}