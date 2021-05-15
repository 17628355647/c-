#pragma once
// 这文件用于声明函数
#include <stdio.h>
#include <string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option   // 用枚举，应用到switch case语句。增加代码可读性
{
	退出程序,  // 0
	增加, // 1
	删除,
	查找,
	修改,
	展示通讯录,
	排序通讯录
};

struct PeoInfo //成员类型
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact  // 通讯录类型
{
	struct PeoInfo date[MAX];  
	int size;  // 记录当前已有的成员个数
};

// 声明函数

// 初始化通讯录
void Initpeople(struct Contact* ps);
// 增加成员
void ADDpeople(struct Contact* ps);
// 展示通讯录
void ShowConcat(const struct Contact* ps);
// 删除成员
void Delpeople(struct Contact* ps);
// 查找成员
void Searchpeople(const struct Contact* ps);
// 修改成员
void Modifipeople(struct Contact* ps);
// 排序成员,按照名字。
void Sortpeople(struct Contact* ps);