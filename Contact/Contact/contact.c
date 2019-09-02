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
		printf("ͨѶ¼����,�޷����!\n");
		return;
	}
	//¼����Ϣ
	printf("����������:>");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("����������:>");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("������绰:>");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("������סַ:>");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("���ӳɹ�!\n");
}

void ShowContact(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	//�Ҳ���
	return -1;
}

void DelContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	int i = 0;
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��!\n");
		return;
	}
	//ɾ��
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//����
	pos = FindByName(pcon, name);
	if (-1 == pos)
	{
		printf("Ҫɾ�����˲�����!\n");
		return;
	}

	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}

	pcon->sz--;
	printf("ɾ���ɹ�!\n");
}

void SerachContact(Contact* pcon)
{
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	pos = FindByName(pcon,name);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ��˲�����!\n");
		return;
	}
	//Ԥ��
	printf("%15s\t%5s\t%5s\t%12s\t%20s\n", "����","����","�Ա�","�绰","��ַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ��˲�����!\n");
		return;
	}
	//�޸���Ϣ
	printf("����������:>");
	scanf("%s", pcon->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pcon->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pcon->data[pos].sex);
	printf("������绰:>");
	scanf("%s", pcon->data[pos].tele);
	printf("������סַ:>");
	scanf("%s", pcon->data[pos].addr);

	printf("�޸ĳɹ�!\n");
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
	printf("******      1.������      ******\n");
	printf("******      2.������      ******\n");
	printf("******      3.���Ա�      ******\n");
	printf("******      4.���绰      ******\n");
	printf("******      5.��סַ      ******\n");
	printf("******      0. �˳�       ******\n");
	printf("--------------------------------\n");
}
void SortContact(Contact* pcon)
{
	int input = 0;
	do
	{
		menu1();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_name);
			printf("����ɹ�!\n");
			ShowContact(pcon);
			break;
		case 2:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_age);
			printf("����ɹ�!\n");
			ShowContact(pcon);
			break;
		case 3:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_sex);
			printf("����ɹ�!\n");
			ShowContact(pcon);
			break;
		case 4:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_tele);
			printf("����ɹ�!\n");
			ShowContact(pcon);
			break;
		case 5:
			qsort(pcon->data, pcon->sz, sizeof(PeoInfo), cmp_by_addr);
			printf("����ɹ�!\n");
			ShowContact(pcon);
			break;
		case 0:
			printf("�˳�!\n");
			break;
		default:
			printf("ѡ���������������!\n");
			break;
		}
	} while (input);
}

void EmptyContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(PeoInfo));
	printf("�����ϵ��!!!\n");
}
