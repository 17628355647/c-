#define _CRT_SECURE_NO_WARNINGS 1
#include "通讯录.h"
// 这文件，实现函数功能

void Initpeople(struct Contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));  // 把date中全改成0
	ps->size = 0;  // 设置通讯录最初只有0个元素
}
static int Findpeople(const struct Contact* ps, char name[MAX_NAME])  // 查找成员。找到了返回成员所在下标，找不到返回-1
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
			return i;
	}
	return -1;
}
void ADDpeople(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录满了，存不下了\n");
	}
	else
	{
		printf("请输入名字：");
		scanf("%s", ps->date[ps->size].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->date[ps->size].age));
		printf("请输入性别：");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入电话：");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入地址：");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void Delpeople(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除成员的名字：");
	scanf("%s", name);
	// 1. 查找要删除的人在什么位置
	int ret = Findpeople(ps,name);  
	// 2. 删除
	if (ret == -1)
	{
		printf("要删除的成员不存在\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < (ps->size)-1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void Modifipeople(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要修改的成员名字：");
	scanf("%s", name);
	int ret = Findpeople(ps, name);
	if (ret == -1)
	{
		printf("输入错误，没有找到\n");
	}
	else
	{
		printf("请输入修改后的名字：");
		scanf("%s", ps->date[ret].name);
		printf("请输入修改后的年龄：");
		scanf("%d", &(ps->date[ret].age));
		printf("请输入修改后的性别：");
		scanf("%s", ps->date[ret].sex);
		printf("请输入修改后的电话：");
		scanf("%s", ps->date[ret].tele);
		printf("请输入修改后的地址：");
		scanf("%s", ps->date[ret].addr);
		printf("修改成功\n");
	}
}
void Searchpeople(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找的名字：");
	scanf("%s", name);
	int ret = Findpeople(ps, name);
	if (ret == -1)
	{
		printf("没有找到\n");
	}
	else
	{
		printf("找到了\n");
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->date[ret].name, ps->date[ret].age, ps->date[ret].sex, ps->date[ret].tele, ps->date[ret].addr);
	}
}
void ShowConcat(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n","姓名","年龄","性别","电话","地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
				ps->date[i].name, ps->date[i].age, ps->date[i].sex, ps->date[i].tele, ps->date[i].addr);
		}
	}
}
void Sortpeople(struct Contact* ps)
{
	int i = 0;
	for (i = 0; i < ps->size-1; i++)
	{
		int j = 0;
		for (j = 0; j < (ps->size)-i-1; j++)
		{
			if (strcmp(ps->date[j].name, ps->date[j + 1].name) > 0)
			{
				struct PeoInfo tmp = ps->date[j];
				ps->date[j] = ps->date[j + 1];
				ps->date[j + 1] = tmp;
			}
		}
	}
	printf("排序完成\n");
}