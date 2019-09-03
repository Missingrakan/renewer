//人的信息：名字+年龄+性别+电话+住址
//最多放1000个人信息
//
//增加联系人
//删除
//修改
//查找
//显示
//排序
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX 1000
#define DEFAULT_SIZE 3
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
	SORT,
	EMPTY
};

typedef struct PeoInfo
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PeoInfo;

//
//typedef struct Contact
//{
//	struct PeoInfo data[MAX];//存放数据的空间
//	int sz;//有效信息的个数
//
//}Contact;
typedef struct Contact
{
	PeoInfo* data;//动态内存开辟使用的指针
	int sz;       //有效信息的个数
	int capacity;//容量
}Contact;

void InitContact(struct Contact* pcon);

void AddContact(Contact* pcon);
void ShowContact(const Contact* pcon);
void DelContact(Contact* pcon);
void SerachContact(Contact* pcon);
void ModifyContact(Contact* pcon);
void SortContact(Contact* pcon);
void EmptyContact(Contact* pcon);
void DestroyContact(Contact* pcon);
void SaveContact(Contact* pcon);
void LoadContact(Contact* pcon);
