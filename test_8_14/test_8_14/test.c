#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
//1.��ɲ�������Ϸ��
//
//
//void menu()
//{
//	printf("******************************\n");
//	printf("******      1. play     ******\n");
//	printf("******      0. exit     ******\n");
//	printf("******************************\n");
//}
//
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	printf("��ʼ��Ϸ:Loading!!!!!!!!!!\n");
//	Sleep(1000);
//	int guss_num = 0;
//	while (1)
//	{
//		printf("������Ҫ�µ�����:>");
//		scanf("%d", &guss_num);
//		if (guss_num > random_num)
//		{
//			printf("�´���!\n");
//		}
//		else if (guss_num < random_num)
//		{
//			printf("��С��!\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶��ˣ�\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ!\n");
//			break;
//		default:
//			printf("ѡ�����!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//
//int bin_search(int* arr, int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = bin_search(arr,7,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ��������!");
//	}
//	else
//	{
//		printf("�ҵ���,�±�ʾ:%d\n", ret);
//	}
//	return 0;
//}
//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//
//
//int main()
//{
//	char psw[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", psw);
//		if (strcmp(psw, "123456") == 0)
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("��������������˳�����!\n");
//	}
//	return 0;
//}
//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ����.��
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch<48 || ch>57)
		{
			if (ch >= 65 && ch <= 90)
			{
				putchar(ch + 32);
			}
			else if (ch >= 96 && ch <= 122)
			{
				putchar(ch - 32);
			}
		}
	}
	return 0;
}