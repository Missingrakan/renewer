#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int num)
//{
//	// ���� 1��λ�� 
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
//	printf("������:>");
//	scanf("%d", &n);
//	ret = count_one_bits(n);
//	printf("%d�ж�������1�ĸ���Ϊ%d\n",n,ret);
//	return 0;
//}
//
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	printf("������:>");
//	scanf("%d", &n);
//	printf("ż��λ;>");
//	for (i = 30; i >= 0;i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n����λ:>");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//3. ���һ��������ÿһλ��
//
//int main()
//{
//	int input = 0;
//	int i = 0;
//	printf("������һ������:>");
//	scanf("%d", &input);
//	for (i = 0; i < 32; i++)
//	{
//		printf("%d ", (input >> 1) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

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
//	printf("������Ҫ�Ƚϵ�������:>");
//	scanf("%d%d", &m, &n);
//	ret = compare_one_bit(m, n);
//	printf("%d��%d����%d��������λ��ͬ\n", m, n, ret);
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
//	printf("������Ҫ�Ƚϵ�������:>");
//	scanf("%d%d", &m, &n);
//	ret = compare_one_bit(m^n);
//	printf("%d��%d����%d��������λ��ͬ\n", m, n, ret);
//	return 0;
//}


//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
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
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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
//			printf("������%c\n", killer);
//		}
//	}
//	return 0;
//}

//3.����Ļ�ϴ�ӡ������ǡ�
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
