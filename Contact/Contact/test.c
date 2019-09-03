#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("*********************************\n");
	printf("******        1. add       ******\n");
	printf("******        2. del       ******\n");
	printf("******        3. search    ******\n");
	printf("******        4. modify    ******\n");
	printf("******        5. show      ******\n");
	printf("******        6. sort      ******\n");
	printf("******        7. empty     ******\n");
	printf("******        0. exit      ******\n");
	printf("*********************************\n");

}

void test()
{
	//����ͨѶ¼
	struct Contact con = { 0 };
	//��ʼ��ͨѶ¼
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SerachContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EMPTY:
			EmptyContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("�˳�����!\n");
			break;
		default:
			printf("ѡ���������������!\n");
			break;
		}
	} while(input);
}

int main()
{
	test();
	return 0;
}