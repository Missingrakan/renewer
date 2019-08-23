#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有
//的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//void adjust_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		if (arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		if (arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int arr[] = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	adjust_arr(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
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

void FindNum(int arr[3][3], int k, int* prow, int* pcol)
{
	int x = 0;
	int y = *pcol-1;
	while(x<*prow && y>=0)
	{
		if(arr[x][y] > k)
		{
			y--;
		}
		else if(arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*prow = x;
			*pcol = y;
			return;
		}
	}
	*prow = -1;
	*pcol = -1;
}

int main()
{
	//int arr[3][3] = {1,2,3,2,3,4,4,5,6};
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int x = 3;
	int y = 3;
	//返回型参数
	FindNum(arr, 7, &x, &y);
	if(x == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("%d %d\n", x, y);
	}
	system("pause");
	//1 2 3
	//4 5 6
	//7 8 9
	return 0;
}