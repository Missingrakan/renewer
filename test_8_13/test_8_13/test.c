#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//1.����Ļ���������ͼ����
//int main()
//{
//	int line = 0;
//	int i = 0;
//	printf("������һ������:>");
//	scanf("%d", &line);
//	�ϲ���
//	for (i = 1; i <= line; i++)
//	{
//		int j = 0;
//		for (j = line; j > i; j--)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	�²���
//	for (i = line-1; i >= 1; i--)
//	{
//		int j = 0;
//		for (j = line; j > i; j--)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�
//������ȷ�õ��ڸ�������
//�磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
//
//�������У�ˮ�ɻ�����Narcissistic number��
//Ҳ��Ϊ������������������ķ˹׳����ķ˹������
//��Armstrong number������ָһNλ����
//�������֮N�η��͵��ڸ�����
//����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
//153 = 1^3 + 5^3 + 3^3��
//370 = 3^3 + 7^3 + 0^3��
//371 = 3^3 + 7^3 + 1^3��
//407 = 4^3 + 0^3 + 7^3��
//
//#include <math.h>
//void Search_Nar(int n)
//{
//	int tmp = n;
//	int count = 1;
//	int sum = 0;
//	while (tmp/10)
//	{
//		count++;
//		tmp = tmp / 10;
//	}
//	tmp = n;
//	while (tmp)
//	{
//		sum += (int)pow(tmp%10, count);
//		tmp /= 10;
//	}
//	if (n == sum)
//	{
//		printf("%d ", n);
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 153; i <= 999; i++)
//	{
//		Search_Nar(i);
//	}
//	return 0;
//}

//3.
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�
//����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

int main()
{
	int a = 0; 
	int n = 0;
	int i = 0;
	int sum = 0;
	int ret = 0;
	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++)
	{
		ret= 10 * ret+a;//2 2*10+2 22*10+22 2222
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}