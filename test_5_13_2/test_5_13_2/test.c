#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//���ֲ���/�۰����
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	int ret = binary_search(arr, k, sz);
//	if(-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//...
//welcome to bit!!!!!
//
#include <string.h>
#include <windows.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	
	int left = 0;
	//int right = sizeof(arr1)/sizeof(arr1[0])-2;
	int right = strlen(arr1)-1;
	//
	while(left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}

	system("pause");
	return 0;
}


//int main()
//{
//	int i = 0;
//	//"123456"
//	char password[20] = {0};
//
//	for(i=0; i<3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") == 0)//string compare   strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	}
//	//
//	if(i == 3)
//	{
//		printf("����������������˳�����\n");
//	}
//	system("pause");
//	return 0;
//}


//#include <time.h>
//
//void menu()
//{
//	printf("************************\n");
//	printf("******   1. play  ******\n");
//	printf("******   0. exit  ******\n");
//	printf("************************\n");
//}
//
////ʱ���
//
//void game()
//{
//	//0x7fff
//	//0111 1111 1111 1111
//	//
//	//RAND_MAX
//	//1. ���������
//	int num  = 0;
//	int guess = 0;
//	num = rand()%100+1;
//
//	//printf("%d\n", num);
//	//2. ������
//	while(1)
//	{
//		printf("�������(1-100)>:");
//		scanf("%d", &guess);
//		if(guess < num)
//		{
//			printf("��С��\n");
//		}
//		else if(guess > num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//time_t  == unsigned int
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//		//
//	} while (input);
//	return 0;
//}
//
//
//void test()
//{
//again:
//	printf("test\n");
//}
//
//int  main()
//{
//	printf("hehe\n");
//	goto again;
//	return 0;
//}

//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if(strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//
//	while(1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if(strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	return 0;
//}
//


//
//int  main()
//{
//	/*do
//	printf("hehe\n");
//	while(1);*/
//
//	int i = 1;
//	do
//	{
//		printf("%d ", i);//1
//		i++;
//	} while (i <= 10);
//	system("pause");
//	return 0;
//}
