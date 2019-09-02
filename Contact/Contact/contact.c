#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* pcon)
{
	assert(pcon);
	memset(pcon->data, 0, sizeof(PeoInfo));
	pcon->sz = 0;
}

void AddContact(Contact* pcon)
{
	assert(pcon);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满,无法添加!\n");
		return;
	}
	//录入信息
	printf("请输入姓名:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("请输入性别:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("请输入住址:>");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("增加成功!\n");
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

static int FindByName(Contact* pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz; i++)
	{
		if (0 == strcmp(pcon->data[i].name, name))
		{
			return i;
		}
	}
	//找不到
	return -1;
}

void DelContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	int i = 0;
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法删除!\n");
		return;
	}
	//删除
	printf("请输入要删除人的姓名:>");
	scanf("%s", name);
	//查找
	pos = FindByName(pcon, name);
	if (-1 == pos)
	{
		printf("要删除的人不存在!\n");
		return;
	}

	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}

	pcon->sz--;
	printf("删除成功!\n");
}

void SerachContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	printf("请输入要查找人的姓名:>");
	scanf("%s", name);
	pos = FindByName(pcon,name);
	if (-1 == pos)
	{
		printf("要查找的人不存在!\n");
		return;
	}
	//预览
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "姓名","年龄","性别","电话","地址");
	printf("%15s\t%5d\t%5s\t%12s\t%20s\n",
		pcon->data[pos].name,
		pcon->data[pos].age,
		pcon->data[pos].sex,
		pcon->data[pos].tele,
		pcon->data[pos].addr);

}

void ModifyContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (-1 == pos)
	{
		printf("要修改的人不存在!\n");
		return;
	}
	//修改信息
	printf("请输入姓名:>");
	scanf("%s", pcon->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pcon->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pcon->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pcon->data[pos].tele);
	printf("请输入住址:>");
	scanf("%s", pcon->data[pos].addr);

	printf("修改成功!\n");
}

//void qsort(void *base,
//	size_t num, 
//	size_t width,
//	int(*compare)(const void *elem1, const void *elem2));

int cmp_by_name(const void *elem1, const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->name, ((PeoInfo *)elem2)->name);
}

int cmp_by_age(const void *elem1, const void *elem2)
{
	return (((PeoInfo *)elem1)->age - ((PeoInfo *)elem2)->age);
}

int cmp_by_sex(const void *elem1, const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->sex, ((PeoInfo *)elem2)->sex);
}

int cmp_by_tele(const void *elem1, const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->tele, ((PeoInfo *)elem2)->tele);
}

int cmp_by_addr(const void *elem1, const void *elem2)
{
	return strcmp(((PeoInfo *)elem1)->addr, ((PeoInfo *)elem2)->addr);
}

void menu1()
{
	printf("--------------------------------\n");
	printf("******      1.按姓名      ******\n");
	printf("******      2.按年龄      ******\n");
	printf("******      3.按性别      ******\n");
	printf("******      4.按电话      ******\n");
	printf("******      5.按住址      ******\n");
	printf("******      0. 退出       ******\n");
	printf("--------------------------------\n");
}
void SortContact(Contact* pcon)
{
	int input = 0;
	do
	{
		menu1();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_name);
			printf("排序成功!\n");
			ShowContact(pcon);
			break;
		case 2:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_age);
			printf("排序成功!\n");
			ShowContact(pcon);
			break;
		case 3:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_sex);
			printf("排序成功!\n");
			ShowContact(pcon);
			break;
		case 4:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_tele);
			printf("排序成功!\n");
			ShowContact(pcon);
			break;
		case 5:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_addr);
			printf("排序成功!\n");
			ShowContact(pcon);
			break;
		case 0:
			printf("退出!\n");
			break;
		default:
			printf("选择错误，请重新输入!\n");
			break;
		}
	} while (input);
}

void EmptyContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(PeoInfo));
	printf("清空联系人!!!\n");
}
