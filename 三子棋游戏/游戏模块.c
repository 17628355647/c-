#define _CRT_SECURE_NO_WARNINGS 1
#include "��Ϸͷ�ļ�.h"

void cshqp(char x[hang][lie], int a, int b)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			x[i][j] = ' ';
		}
	}
}

//void dyqp(char x[hang][lie],int a,int b)
//{
//	int i = 0;
//	for (i = 0; i < hang; i++)
//	{
//		printf(" %c | %c | %c \n",x[i][0],x[i][1],x[i][2]);
//		if(i<a-1)
//			printf("---|---|---\n");
//	}
//}

// �Ż�һ�´�ӡ����
void dyqp(char x[hang][lie], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf(" %c ", x[i][j]);
			if(j<b-1)
				printf("|");
		}
		printf("\n");
		if (i < a - 1)
		{
			for (int j = 0; j < b; j++)
			{
				printf("---");
				if (j < b - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void wjxq(char x[hang][lie], int a, int b)
{
	int hen = 0;
	int zong = 0;
	printf("�������\n");
	printf("���������꣺");
	while (1)
	{
		scanf("%d%d", &hen, &zong);
		if (hen >= 1 && hen <= a && zong >= 1 && zong <= b)
		{
			if (x[hen - 1][zong - 1] == ' ')
			{
				x[hen - 1][zong - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���Ѿ������ˡ��������룺");
			}
		}
		else
		{
			printf("��������������룺");
		}
	}
}
void dnxq(char x[hang][lie], int a, int b)
{
	int hen = 0;
	int zong = 0;
	printf("��������\n");
	while (1)
	{
		hen = rand() % a;
		zong = rand() % b;
		if (x[hen][zong] == ' ')
		{
			x[hen][zong] = '+';
			break;
		}
	}
}
int man(char x[hang][lie], int a, int b)
{
	// ���� 1 ��ʾ�������ˡ�����0 ��ʾ����û����
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (x[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char ying(char x[hang][lie], int a, int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		// ������
		if (x[i][0] == x[i][1] && x[i][2] == x[i][0] && x[i][0] != ' ')
		{
			return x[i][0];
		}
	}
	for (i = 0; i < b; i++)
	{
		// ������
		if (x[0][i] == x[1][i] && x[0][i] == x[2][i] && x[0][i] != ' ')
		{
			return x[0][i];
		}
	}
	if (x[0][0] == x[1][1] && x[0][0] == x[2][2] && x[1][1] != ' ')
	{
		// �Խ���
		return x[0][0];
	}
	if (x[2][0] == x[1][1] && x[1][1] == x[0][2] && x[1][1] != ' ')
	{
		return x[2][0];
	}
	// �ж�ƽ��
	if (1 == man(x,a,b))
	{
		return 'q';
	}

	// ��Ϸ����
	return 'c';
}