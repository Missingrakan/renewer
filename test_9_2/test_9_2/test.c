#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//void find_two_diff_num(int arr[], int sz, int *p1, int *p2)
//{
//	1.���
//	int tmp = 0;
//	int i = 0;
//	int pos = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	2.�������Ľ���ж�����λ��һλΪ1
//	for (i = 0; i < 32; i++)
//	{
//		if (((tmp >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	3.����
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//			*p1 ^= arr[i];
//	}
//	*p2 = tmp ^ *p1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	 5---101
//	 6---110
//	5^6--011
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	find_two_diff_num(arr, sz, &num1, &num2);
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	printf("��������:>");
//	scanf("%d", &money);
//	
//	total += money;
//	empty = money;
//
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("total = %d\n", total);
//	return 0;
//}
//3.ģ��ʵ��strcpy
//#include <assert.h>
//char* my_strcpy(char * dest, const char * src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[10] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("arr1[] = \"%s\"\n", arr1);
//	printf("arr2[] = \"%s\"\n", arr2);
//	return 0;
//}
//4.ģ��ʵ��strcat
char* my_strcat(char *dest, const char*src)
{
	char* ret = dest;
	assert(dest && src);
	//��'\0'
	while (*dest)
	{
		dest++;
	}
	//׷��
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[10] = "abcdef";
	char arr2[20] = "asdfr";
	my_strcat(arr2, arr1);
	printf("arr1[] = \"%s\"\n", arr1);
	printf("arr2[] = \"%s\"\n", arr2);
	return 0;
}
