#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int num)
//{
//	// 返回 1的位数 
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	printf("请输入:>");
//	scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d中二进制中1的个数为%d\n",n,ret);
//	return 0;
//}
//
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("请输入:>");
//	scanf("%d", &n);
//	printf("偶数位;>");
//	for (i = 30; i >= 0;i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n奇数位:>");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//3. 输出一个整数的每一位。
//
//int main()
//{
//	int input = 0;
//	int i = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &input);
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d ", (input >> 1) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

//int compare_one_bit(int m,int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	printf("请输入要比较的两个数:>");
//	scanf("%d%d", &m, &n);
//	ret = compare_one_bit(m, n);
//	printf("%d和%d中有%d个二进制位不同\n", m, n, ret);
//	return 0;
//}
//
//int compare_one_bit(int num)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	printf("请输入要比较的两个数:>");
//	scanf("%d%d", &m, &n);
//	ret = compare_one_bit(m^n);
//	printf("%d和%d中有%d个二进制位不同\n", m, n, ret);
//	return 0;
//}


//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1; a<=5; a++)
//	{
//		for(b=1; b<=5; b++)
//		{
//			for(c=1; c<=5; c++)
//			{
//				for(d=1; d<=5; d++)
//				{
//					for(e=1; e<=5; e++)
//					{
//						if(((b==2)+(a==3)==1)&&
//						   ((b==2)+(e==4)==1)&&
//						   ((c==1)+(d==2)==1)&&
//						   ((c==5)+(d==3)==1)&&
//						   ((e==4)+(a==1)==1))
//						{
//							if(a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A')+
//			(killer == 'C')+
//			(killer == 'D')+
//			(killer != 'D')) == 3)
//		{
//			printf("凶手是%c\n", killer);
//		}
//	}
//	return 0;
//}

//3.在屏幕上打印杨辉三角。
//1 0 0 0
//1 1 0 0
//1 2 1 0
//1 3 3 1
int main()
{
	int i = 0; 
	int j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
