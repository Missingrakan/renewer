#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sum += (unsigned int)(((num >> i) & 1)*pow(2, 31 - i));
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int n = 0;
//	unsigned int ret = 0;
//	printf("������:>");
//	scanf("%d", &n);
//	ret = reverse_bit(n);
//	printf("%u\n", ret);
//	return 0;
//}
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int ret = 0;
//	printf("������������:>");
//	scanf("%d%d", &num1, &num2);
//	ret = num1 + (num2 - num1) / 2;
//	printf("The average between %d and %d is %d\n", num1, num2, ret);
//	return 0;
//}
//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ�
//�����������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("�ҵ�����%d\n", ret);
//
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//				count++;
//		}
//		if (count == 1)
//			break;
//	}
//	printf("�ҵ�����%d\n", arr[i]);
//
//	return 0;
//}
//4.
//��һ���ַ����������Ϊ:"student a am i",
//			���㽫��������ݸ�Ϊ"i am a student".
//			Ҫ��
//			����ʹ�ÿ⺯����
//			ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
//
//void reverse_str(char* str)
//{
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
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
