//�˵���Ϣ������+����+�Ա�+�绰+סַ
//����1000������Ϣ
//
//������ϵ��
//ɾ��
//�޸�
//����
//��ʾ
//����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

typedef struct Contact
{
	struct PeoInfo data[MAX];
	int sz;//��Ч��Ϣ�ĸ���
}Contact;

void InitContact(struct Contact* pcon);

void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);



