#pragma once

#include "SeqList.h"

#define NAME_MAX 100
#define TEL_MAX 100
#define ADDR_MAX 100



typedef struct PersonInfo
{
	char name[NAME_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Info;

typedef struct SeqList Contact;


//ͨѶ���ṩ�Ĳ���

//ͨѶ¼�ĳ�ʼ��������
void ContactInit(Contact* pcon);//ʵ�ʳ�ʼ���Ļ���˳���
void ContactDesTroy(Contact* pcon);

//���ӡ�ɾ�����޸ġ����ҡ��鿴ͨѶ¼
void ContactAdd(Contact* pcon);
void ContactDel(Contact* pcon);
void ContactModify(Contact* pcon);
void ContactFind(Contact* pcon);
void ContactShow(Contact* pcon);