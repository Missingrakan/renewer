#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<stdlib.h>
#include <time.h>

void menu()
{
	printf("*************************\n");
	printf("*****     1. play   *****\n");
	printf("*****     0. exit   *****\n");
	printf("*************************\n");
}

void game()
{
	int rand_num = rand()%100 + 1;
	int guss_num = 0;
	printf("��ʼ��Ϸ\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d",&guss_num);
		if (guss_num > rand_num)
		{
			printf("�´���!\n");
		}
		else if (guss_num < rand_num)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("��ϲ��,�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("ѡ�����,����������!\n");
			break;
		}
	} while (input);
	return 0;
}