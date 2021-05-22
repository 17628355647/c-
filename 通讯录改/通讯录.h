#pragma once
// 这文件用于声明函数
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
enum Option   // 用枚举，应用到switch case语句。增加代码可读性
{
	退出程序,  // 0
	增加, // 1
	删除,
	查找,
	修改,
	展示通讯录,
	排序通讯录,
	存储通讯录
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
	struct PeoInfo* date;  
	int size;  // 记录当前已有的成员个数
	int capacity;  // 当前通讯录最大容量
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
// 释放空间
void DestroyContact(struct Contact* ps);

// 存储通讯库
void save(struct Contact* ps);
// 加载通讯中内容
void LoadContact(struct Contact* ps);