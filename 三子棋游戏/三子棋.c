#define _CRT_SECURE_NO_WARNINGS 1
#include "��Ϸͷ�ļ�.h"
void menu()
{
	printf("*********************************************\n");
	printf("**************1.��ʼ    0.�˳�***************\n");
	printf("*********************************************\n");
}
void szq_w()
{
	int ret = 0;
	// �������飬����߳���������Ϣ
	char qipan[hang][lie] = { 0 };
	// ��ʼ������
	cshqp(qipan, hang, lie);
	// ��ӡ����
	dyqp(qipan,hang,lie);
	// ����
	while (1)
	{
		// �������
		wjxq(qipan,hang,lie);
		dyqp(qipan, hang, lie);
		// �ж�����Ƿ�Ӯ
		ret=ying(qipan,hang,lie);
		if (ret != 'c')
		{
			break;
		}
		// ��������
		dnxq(qipan, hang, lie);
		dyqp(qipan, hang, lie);
		// �жϵ����Ƿ�Ӯ
		ret=ying(qipan,hang,lie);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��ϲ��Ӯ�ˣ�\n");
	}
	else if (ret == '+')
	{
		printf("���ź�������\n");
	}
	else
		printf("ƽ��\n");
}

void szq_kj()
{
	int shuru = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("��ѡ��ֻ���������֣���");
		scanf("%d", &shuru);
		switch (shuru)
		{
		case 1:
			printf("�����忪ʼ��\n");
			szq_w();
			break;
		case 0:
			printf("�˳������壡\n");
			break;
		default:
			printf("�����������ѡ��\n");
			break;
		}
	} while (shuru);
}
int main()
{
	szq_kj();
	return 0;
}