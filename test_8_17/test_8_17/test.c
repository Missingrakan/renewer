#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//1.递归和非递归分别实现求第n个斐波那契数。
//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)
//{
//	//1 2 3 5 8 13 21 34 55
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n > 2)
//	{
//		c = a + b;
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
//	while (1)
//	{
//		printf("请输入:>");
//		scanf("%d", &n);
//		ret = fib(n);
//		printf("第%d个斐波那契数是:>%d\n", n, ret);
//	}
//	return 0;
//}
//
//2.编写一个函数实现n^k，使用递归实现
//
//int fact(int n, int k)
//{
//	if (k <= 1)
//		return n;
//	else
//		return n*fact(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int ret = 0;
//	while (1)
//	{
//		printf("请输入底数和指数:>");
//		scanf("%d%d", &n, &k);
//		ret = fact(n, k);
//		printf("%d^%d = %d\n", n, k, ret);
//	}
//	return 0;
//}
//3. 写一个递归函数DigitSum(n)，输入一个非负整数，
//返回组成它的数字之和，
//例如，调用DigitSum(1729)，
//则应该返回1 + 7 + 2 + 9，它的和是19
//
//int DigitSum(int n)
//{
//	if (n/10 == 0)
//		return n;
//	else
//		return (n % 10 + DigitSum(n / 10));
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &num);
//	ret = DigitSum(num);
//	printf("%d\n",ret);
//	return 0;
//}
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//
#include <assert.h>
int my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return count;
}
//void reverse_string(char* str)
//{
//	assert(str != NULL);
//	int len = my_strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
void reverse_string(char* str)
{
	assert(str != NULL);
	int len = my_strlen(str);
	char* left = str;
	char* right = str + len - 1;
	char tmp = 0;

	tmp = *left;
	*left = *right;
	*right = '\0';
	if (my_strlen(left) >= 2)
		reverse_string(str + 1);
	*right = tmp;

}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
//5.递归和非递归分别实现strlen
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//6.递归和非递归分别实现求n的阶乘
//int factorial(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*factorial(n - 1);
//}
//int factorial(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &num);
//	ret = factorial(num);
//	printf("%d! = %d\n", num, ret);
//	return 0;
//}
//7.递归方式实现打印一个整数的每一位
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}
//
