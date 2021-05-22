#pragma once
// ���ļ�������������
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
enum Option   // ��ö�٣�Ӧ�õ�switch case��䡣���Ӵ���ɶ���
{
	�˳�����,  // 0
	����, // 1
	ɾ��,
	����,
	�޸�,
	չʾͨѶ¼,
	����ͨѶ¼,
	�洢ͨѶ¼
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
	struct PeoInfo* date;  
	int size;  // ��¼��ǰ���еĳ�Ա����
	int capacity;  // ��ǰͨѶ¼�������
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
// �ͷſռ�
void DestroyContact(struct Contact* ps);

// �洢ͨѶ��
void save(struct Contact* ps);
// ����ͨѶ������
void LoadContact(struct Contact* ps);