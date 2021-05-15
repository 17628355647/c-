#pragma once
// ���ļ�������������
#include <stdio.h>
#include <string.h>
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option   // ��ö�٣�Ӧ�õ�switch case��䡣���Ӵ���ɶ���
{
	�˳�����,  // 0
	����, // 1
	ɾ��,
	����,
	�޸�,
	չʾͨѶ¼,
	����ͨѶ¼
};

struct PeoInfo //��Ա����
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
struct Contact  // ͨѶ¼����
{
	struct PeoInfo date[MAX];  
	int size;  // ��¼��ǰ���еĳ�Ա����
};

// ��������

// ��ʼ��ͨѶ¼
void Initpeople(struct Contact* ps);
// ���ӳ�Ա
void ADDpeople(struct Contact* ps);
// չʾͨѶ¼
void ShowConcat(const struct Contact* ps);
// ɾ����Ա
void Delpeople(struct Contact* ps);
// ���ҳ�Ա
void Searchpeople(const struct Contact* ps);
// �޸ĳ�Ա
void Modifipeople(struct Contact* ps);
// �����Ա,�������֡�
void Sortpeople(struct Contact* ps);