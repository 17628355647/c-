#define _CRT_SECURE_NO_WARNINGS 1

// �������顣C99��׼�У��ṹ���е����һ��Ԫ��������δ֪��С�����飬��ͽ����������Ա

#include <stdio.h>
#include <stdlib.h>
//struct S
//{
//	int n;
//	int arr[];  // δ֪��С�����顣�������顣Ҳ��д�� int arr[0];
//	// ����Ĵ�С�ǿ��Ե����ġ�
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));  // 4�ֽڡ��ṹ���ڼ����Сʱ�����������������Ա��
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* p = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//	if (p != NULL)
//	{
//		ps = p;
//		// Ȼ��ʹ��
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S s;
	s.arr = (int*)malloc(10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(s.arr + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(s.arr + i));
	}
	int* p= (int*)realloc(s.arr, 20 * sizeof(int));  // ����
	if (p != NULL)
	{
		s.arr = p;
	}
	free(s.arr);
	s.arr = NULL;
}



// ����������ص㣺
// 1.�ṹ������������Աǰ���������һ��������Ա��
// 2.sizeof���ص����ֽṹ���С����������������ڴ�
// 3.�������������Ա�Ľṹ�� ��malloc���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ��Ĵ�С��

// ��������ô���1.�����ڴ��ͷš�2.�����ڷ����ٶȣ������ڴ���Ƭ��