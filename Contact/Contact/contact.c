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
}