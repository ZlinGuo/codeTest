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


//通讯里提供的操作

//通讯录的初始化和销毁
void ContactInit(Contact* pcon);//实际初始化的还是顺序表
void ContactDesTroy(Contact* pcon);

//增加、删除、修改、查找、查看通讯录
void ContactAdd(Contact* pcon);
void ContactDel(Contact* pcon);
void ContactModify(Contact* pcon);
void ContactFind(Contact* pcon);
void ContactShow(Contact* pcon);