#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
//	printf("������:>");
//	scanf("%d", &n);
//	print_multable(n);
//	return 0;
//}
//2.ʹ�ú���ʵ���������Ľ�����
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
//	printf("������:>");
//	scanf("%d %d", &num1, &num2);
//	printf("a = %d,b = %d\n", num1, num2);
//	swap1(&num1, &num2);
//	printf("a = %d,b = %d\n", num1, num2);
//	return 0;
//}
//3.ʵ��һ�������ж�year�ǲ������ꡣ
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
//	printf("���������:>");
//	scanf("%d", &year);
//	ret = is_leap_year(year);
//	if (0 == ret)
//	{
//		printf("%d�겻������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}
//4.
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
//	printf("��ѡ��Ҫ��ʼ����Ԫ�ظ���(<=20):>");
//	scanf("%d", &num);
//	if (num <= sz)
//	{
//		for (i = 0; i < num; i++)
//		{
//			scanf("%d", ptr + i);
//		}
//		printf("��ʼ���ɹ�!\n");
//		PrintArr(ptr, sz);
//	}
//	else
//		printf("��ʼ��Ԫ�ع���!\n");
//}
//void EmptyArr(int* ptr,int sz)
//{
//	memset(ptr, 0, sizeof(int)*sz);
//	printf("�������ɹ�!\n");
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
//	printf("��������ɹ�!\n");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�����!\n");
//			break;
//		default:
//			printf("ѡ���������������!\n");
//			break;
//		}
//	} while (input);
//}
//5.ʵ��һ���������ж�һ�����ǲ���������
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
	
	printf("������:>");
	scanf("%d", &num);
	ret = is_prime(num);
	if (0 == ret)
	{
		printf("%d��������!\n", num);
	}
	else
	{
		printf("%d������!\n", num);
	}
	return 0;
}
