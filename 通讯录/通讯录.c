#define _CRT_SECURE_NO_WARNINGS 1
#include "ͨѶ¼.h"
// ���ļ���ʵ�ֺ�������

void Initpeople(struct Contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));  // ��date��ȫ�ĳ�0
	ps->size = 0;  // ����ͨѶ¼���ֻ��0��Ԫ��
}
static int Findpeople(const struct Contact* ps, char name[MAX_NAME])  // ���ҳ�Ա���ҵ��˷��س�Ա�����±꣬�Ҳ�������-1
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
		printf("ͨѶ¼���ˣ��治����\n");
	}
	else
	{
		printf("���������֣�");
		scanf("%s", ps->date[ps->size].name);
		printf("���������䣺");
		scanf("%d", &(ps->date[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->date[ps->size].sex);
		printf("������绰��");
		scanf("%s", ps->date[ps->size].tele);
		printf("�������ַ��");
		scanf("%s", ps->date[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void Delpeople(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫɾ����Ա�����֣�");
	scanf("%s", name);
	// 1. ����Ҫɾ��������ʲôλ��
	int ret = Findpeople(ps,name);  
	// 2. ɾ��
	if (ret == -1)
	{
		printf("Ҫɾ���ĳ�Ա������\n");
	}
	else
	{
		int j = 0;
		for (j = ret; j < (ps->size)-1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}
void Modifipeople(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵĳ�Ա���֣�");
	scanf("%s", name);
	int ret = Findpeople(ps, name);
	if (ret == -1)
	{
		printf("�������û���ҵ�\n");
	}
	else
	{
		printf("�������޸ĺ�����֣�");
		scanf("%s", ps->date[ret].name);
		printf("�������޸ĺ�����䣺");
		scanf("%d", &(ps->date[ret].age));
		printf("�������޸ĺ���Ա�");
		scanf("%s", ps->date[ret].sex);
		printf("�������޸ĺ�ĵ绰��");
		scanf("%s", ps->date[ret].tele);
		printf("�������޸ĺ�ĵ�ַ��");
		scanf("%s", ps->date[ret].addr);
		printf("�޸ĳɹ�\n");
	}
}
void Searchpeople(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("������Ҫ���ҵ����֣�");
	scanf("%s", name);
	int ret = Findpeople(ps, name);
	if (ret == -1)
	{
		printf("û���ҵ�\n");
	}
	else
	{
		printf("�ҵ���\n");
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->date[ret].name, ps->date[ret].age, ps->date[ret].sex, ps->date[ret].tele, ps->date[ret].addr);
	}
}
void ShowConcat(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-10s\t%-4s\t%-5s\t%-12s\t%-20s\n","����","����","�Ա�","�绰","��ַ");
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
	printf("�������\n");
}