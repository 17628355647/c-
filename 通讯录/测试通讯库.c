#define _CRT_SECURE_NO_WARNINGS 1

// ���ļ����ڲ���ͨѶ¼
// ͨѶ�⹦�ܣ�1.���1000��������Ϣ���������֣����䣬�绰���Ա𣬵�ַ��
//             2.���ӻ�ɾ��������Ϣ��
//             3.���Һ�����Ϣ��
//             4.�޸Ļ�����Ϣ��
//             5.��ӡ������Ϣ
#include "ͨѶ¼.h"

void menu()
{
	printf("*****************************************************\n");
	printf("********1.����                2.ɾ��*****************\n");
	printf("********3.����                4.�޸�*****************\n");
	printf("********5.��ʾ������Ϣ        6.���������Ϣ*********\n");
	printf("********           0.�˳�            ****************\n");
	printf("*****************************************************\n");
}

int main()
{
	int a = 0;
	// ����ͨѶ¼
	struct Contact con;  // conΪͨѶ¼������1000��Ԫ�ص������size
	// ��ʼ��ͨѶ¼
	Initpeople(&con);
	// 
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &a);
		switch (a)
		{
		case ����:
			ADDpeople(&con);  // ���ӳ�Ա
			break;
		case ɾ��:
			Delpeople(&con);  // ɾ����Ա
			break;
		case ����:
			Searchpeople(&con);
			break;
		case �޸�:
			Modifipeople(&con);
			break;
		case չʾͨѶ¼:
			ShowConcat(&con); // ��ʾ������Ϣ
			break;
		case ����ͨѶ¼:
			Sortpeople(&con);
			break;
		case �˳�����:
			printf("�˳�\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (a);
	return 0;
}