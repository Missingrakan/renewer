#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
//void Print_Arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void MoveOddEven(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	
//	while (left < right)
//	{
//		//������
//		while ((left < right) &&(arr[left] % 2 != 0))
//		{
//			left++;
//		}
//		//��ż��
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//} 
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	MoveOddEven(arr, sz);
//	Print_Arr(arr, sz);
//	return 0;
//}
//2.
////���Ͼ��� 
//��һ����ά����.
//�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ���ڡ�
//ʱ�临�Ӷ�С��O(N);
//
//���飺
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
//struct Point
//{
//	int x;
//	int y;
//};
//struct Point FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	struct Point ret = { -1, -1 };
//
//	while (x<row&&y>=0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			ret.x = x;
//			ret.y = y;
//			return ret;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	struct Point ret = { 0 };
//	ret = FindNum(arr, 6, 3, 3);
//	if (-1 == ret.x)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("%d %d\n",ret.x, ret.y);
//	}
//	return 0;
//}

//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
#include <string.h>
#include <assert.h>
//void left_move(char* str, int k)
//{
//	int j = 0;
//	for (j = 0; j < k; j++)
//	{
//		��תһ���ַ�
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//void reverse_str(char* left, char* right)
//{
//	assert(left && right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//ABCDEF -- 2
//AB CDEF
//BA FEDC
//CDEFAB
//void left_move(char*str, int k)
//{
//	assert(str);
//	int len = strlen(str);
//	reverse_str(str, str + k - 1);
//	reverse_str(str + k, str + len - 1);
//	reverse_str(str, str + len - 1);
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	int n = 0;
//	printf("%s\n", arr);
//	printf("������Ҫ�����ĸ���:>");
//	scanf("%d", &n);
//	left_move(arr, n);
//	printf("%s\n", arr);
//	return 0;
//}

//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
void reverse_str(char* left, char* right)
{
	assert(left && right);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char*str, int k)
{
	assert(str);
	int len = strlen(str);
	reverse_str(str, str + k - 1);
	reverse_str(str + k, str + len - 1);
	reverse_str(str, str + len - 1);
}
int is_left_move(char* str1, char* str2)
{
	int len = strlen(str1);
	int i = 0;
	for (i = 0; i <= len; i++)
	{
		left_move(str1, 1);
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_left_move(arr1,arr2);
	if (1 == ret)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
