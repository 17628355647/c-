#define _CRT_SECURE_NO_WARNINGS 1

// while ѭ����

//#include <stdio.h>
//
//int main()
//{
//	int n = 5;
//	while (n)
//	{
//		printf("hehe\n");  // ��ӡ5��hehe��
//		n -= 1;
//	}
//	return 0;
//}

// break ����ѭ����continue ֹͣ����ѭ����continue��������ٲ���ִ��,���Ǵ�while����������һ��ѭ��
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i) {
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//getchar() ���ռ���һ���ַ���������
//	//int ch = getchar();
//	//putchar(ch);  // putchar ��ӡgetchar���յ��ַ� ���Դ�����
//	int ch = 0;
//	// ����ctrl + z  ���൱��������EOF
//	//EOF - end of file �ļ�������־ �����ֵΪ-1
//	while ((ch = getchar()) != EOF)   
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char ����[20] = { 0 };
//	int a = 0;
//	int ch = 0;
//	printf("���������룺");
//	// scanf��getchar��Ϊ���뺯�����������뻺������������û�����ݡ��������ݾ�ֱ�Ӷ�ȡ����û����ȴ����롣
//	scanf("%s", &����);   // scanfֻ�������뻺������ȡ�ո�ǰ������  ��������Ϊ12345\n��  \n��ʾ�س�ȷ�ϡ�scanf��ȡ����Ϊ12345��\n���������뻺����
//	//getchar(); // ���һ��getchar ��\n��ȡ��������Ӱ�����
//	while ((ch = getchar()) != '\n')     // �����뻺������ȡ���ݣ���ȡ��\n��Ҳ�������� ������뻺���� ������
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����");
//	a = getchar();   // �ֵ�getcharʱ��ȥ���뻺����������û�����ݣ���������һ��\n��\n�ͱ���ȡ����û�е��û��Լ����롣
//	if ((a == 'Y') || (a == 'y'))
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch < '0') || (ch > '9'))
//			continue;
//		putchar(ch);
//		printf("\n");
//	}
//	return 0;
//}





//                                    for ѭ��

// �﷨
//for(���ʽ1;���ʽ2;���ʽ3)
//	ѭ�����
//���ʽ1Ϊ��ʼ�����֣���ʼ��ѭ�����������ʽ2Ϊ�����жϲ��֣������ж�ѭ����ֹ�����ʽ3Ϊ�������֣�����ѭ�������ĵ�����

// break��continue���÷���while��һ��

//#include <stdio.h>
  
//int main()
//{
//	// forѭ���������ֺ���һ��
//	for (int num = 1/*��ʼ��*/; num <= 10/*�жϲ���*/; num++/*��������*/)
//	{
//		if (num == 5)
//			continue;
//		printf("%d\n", num);
//	}
//	return 0;
//}
//forѭ�����飺
//	1.������forѭ�������޸ı�������ֹforѭ��ʧȥ���ơ�
//	2.����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)  // ǰ�պ󿪵�д��
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
	// forѭ���ĳ�ʼ�����жϺ͵���������ʡ�ԡ���forѭ�����жϲ��ֱ�ʡ�ԣ��ж������ͺ�Ϊ��
	//for (;;)  // ��ѭ��
	//{
	//	printf("hehe\n");
	//}

	/*int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)  //  ������дֻ�ܴ�ӡ10��hehe��
		{
			printf("hehe\n");
		}
	}*/
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
// ����ѭ������
//	for (int x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	// ѭ��0�Ρ���Ϊ�жϱ��ʽΪk=0����0������k����0Ϊ�٣���ѭ��0��
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}


//                                  do  while ѭ��
//�﷨��
//do
//	ѭ�����;
//while(���ʽ);

// һ��������ִ�У�do����ִ�������жϣ�while��
//break��continue�÷�һ��
#include <stdio.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//		if (i == 5)
//			continue;
//	} 	while (i <= 10);
//	return 0;
//}

//#include <stdio.h>

//int �׳�(int x)
//{
//	if (x > 1)
//	{
//		return x * �׳�(x - 1);
//	}
//	return 1;
//}

//int main()
//{
	//����n�Ľ׳�
	/*int n = 0;
	scanf("%d", &n);
	printf("%d�Ľ׳�Ϊ%d\n", n,(�׳�(n)));*/

	// ����n�Ľ׳�,����2
	/*int n = 0;
	int num = 1;
	scanf("%d", &n);
	for (int a = 1; a <= n; a++)
	{
		num = a * num;
	}
	printf("%d�Ľ׳�Ϊ%d\n", n, num);*/

	// ����1��+2��+3��....+10��
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d", &c);
	for (a = c; a >= 1; a--)
	{
		b += �׳�(a);
	}
	printf("ֵΪ%d\n", b);*/

	//�����������в���ĳ������n
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±�Ϊ%d��", i);
			break;
		}
	}
	if (i == sz)
		printf("û���ҵ�");*/
//	return 0;
//}

//  �������㷨
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 14;
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ����±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("û���ҵ�\n");
//	return 0;
//}

// ��д���룬��ʾ����ַ��������ƶ������м���

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char �ַ�[] = "How are you? I am fine";
//	char zifu[] = "######################";
//	char zifu1[] = "######################";
//	int left = 0;
//	//int right = sizeof(�ַ�) / sizeof(�ַ�[0]) - 2; // �ַ����Ľ�β��'\0' ����Ҫ��2
//	int right = strlen(�ַ�) - 1; // ��strlen���ַ�������0
//	printf("%s\n", zifu);
//	Sleep(1000);
//	system("cls");
//	while (left <= right)
//	{
//		zifu[left] = �ַ�[left];  // ���ַ���Ԫ�� ��ֵ��zifu����Ӧ��Ԫ�ء�
//		zifu[right] = �ַ�[right];
//		left += 1;
//		right -= 1;
//		printf("%s\n", zifu);
//		Sleep(1000);  // Sleep������ʾͣ�٣���λ���롣1000����Ҳ����1��
//		system("cls"); // �����ⲿ��ִ���ļ�������
//	}
//	while (right > -1)
//	{
//		zifu[left] = zifu1[left];  
//		zifu[right] = zifu1[right];
//		left += 1;
//		right -= 1;
//		printf("%s\n", zifu);
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char password[50] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", &password);
//		if (strcmp(password,"hahaha01") == 0) // == ���������ж��ַ�����ȣ���
//		{ //Ӧ��ʹ�ú���strcmp��strcmp(password,"hahaha01")����������ȷ��ص���0������һ�����ڵڶ����ַ��������ش������������֮������С�������
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//			printf("�������");
//	}
//	if (i == 3)
//		printf("�������붼�����˳�����\n");
//	return 0;
//}


// �����������жϴ�С
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("�������Ĵ�С����Ϊ%d>%d>%d", a, b, c);
//	return 0;
//}

// дһ�������ӡ1-100֮������3�ı���������
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}