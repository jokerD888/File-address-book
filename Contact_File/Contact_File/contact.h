#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//#define MAX 1000
#define DEFAULT_SZ 3
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

typedef struct Contact
{
	struct PeoInfo *data;//���һ����Ϣ
	int size;   //��¼��ǰ���е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼���������
}Contact;

//��������
//��ʼ��
void InitContact(struct Contact* ps);
//���һ����Ϣ
void AddContact(struct Contact* ps);
//��ӡ��Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps);
//����ָ����ϵ����Ϣ
void Searchtact(const struct Contact* ps);
//�޸�ָ����ϵ����Ϣ
void ModifyContact(struct Contact* ps);
//����ͨѶ¼����
void SortContact(struct Contact* ps);
//
void DestoryContact(Contact*ps);
//�����ļ�
void SaveContact(Contact*ps);
//������Ϣ��ͨѶ¼
void LoadContact(Contact*ps);





