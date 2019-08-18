#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1 1 2 3 5 8 13 21 34 55 ...
#include <stdlib.h>

//
//int count = 0;
//
//int fib(int n)
//{
//	if(n == 3)
//		count++;
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}
//
////
////fib(50)-1
////fib(49) fib(48)-2
////48 47 47 46-4
////47 46 46 45 46 45 45 44-8
////
//
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d", &n);
//	ret = fib(n);//
//	printf("%d\n", ret);
//
//	system("pause");
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011-b
//	//101-a
//	//110-
//
//	printf("a = %d b =%d\n", a, b);
//
//	a = a^b;//异或-按（二进制）位异或
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b =%d\n", a, b);
//
//	/*
//	a = a+b;
//	b = a-b;
//	a = a-b;
//	*/
//
//	/*int tmp = 0;
//
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	for(i=1; i<sz; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("%d\n", max);
//
//	system("pause");
//	return 0;
//}
//
void Swap(int* px, int *py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a = 2;
	int b = 1;
	int c = 3;

	if(a<b)
	{
		Swap(&a, &b);
	}
	if(a<c)
	{
		Swap(&a, &c);
	}
	if(b<c)
	{
		Swap(&b, &c);
	}
	printf("%d %d %d\n", a, b, c);
	system("pause");
	return 0;
}