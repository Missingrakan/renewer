#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
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
//		printf("������:>");
//		scanf("%d", &n);
//		ret = fib(n);
//		printf("��%d��쳲���������:>%d\n", n, ret);
//	}
//	return 0;
//}
//
//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
//		printf("�����������ָ��:>");
//		scanf("%d%d", &n, &k);
//		ret = fact(n, k);
//		printf("%d^%d = %d\n", n, k, ret);
//	}
//	return 0;
//}
//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ�������
//���������������֮�ͣ�
//���磬����DigitSum(1729)��
//��Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
//	printf("������һ����:>");
//	scanf("%d", &num);
//	ret = DigitSum(num);
//	printf("%d\n",ret);
//	return 0;
//}
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
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
//	printf("������һ����:>");
//	scanf("%d", &num);
//	ret = factorial(num);
//	printf("%d! = %d\n", num, ret);
//	return 0;
//}
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num = 0;
//	printf("������һ����:>");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}
//
