#define _CRT_SECURE_NO_WARNINGS 1

// ������Ƕ�׵��ú���ʽ���ʡ�
//����Ƕ�ף������ͺ���֮������л�����ϵġ�����������Ե�������������
// ��ʽ���ʣ���һ�������ķ���ֵ����Ϊ��һ�������Ĳ�����

//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));  // printf�ķ���ֵ���ַ��ĸ�����
//
//	return 0;
//}

//������������1.���߱��������������������������͡�2.����������һ������ں�����ʹ��֮ǰ����������ʹ�á�3.��������������ͷ�ļ��С�
//�����Ķ��壺�����ľ���ʵ�֣����������Ĺ���ʵ�֡�
// ������������.hͷ�ļ��У������������.cԴ�ļ��С�����Ѵ��룬���̲�ֳɸ��ָ���ģ�顣

//#include "add.h"  // �����Լ�д��ͷ�ļ���
//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 25;
//	printf("%d\n", add(a, b));
//}



//                  �ݹ�
// �ݹ飺�����������ı�̼��ɡ������ޣ�

//�ݹ�������Ҫ������
//1.���������������������������������ʱ�򣬵ݹ鲻�ټ�����
//2.ÿ�εݹ����֮��Խ��Խ�ӽ��������������

// �ݹ鳣�����⣺ջ�����
//�����ڴ滮��Ϊջ���������;�̬����ջ�����������á��ֲ�������������ʽ��������������̬���ٵ��ڴ档��̬����ȫ�ֱ�����static���εı���
//ջ�������Ϊ����������ջ�������ռ䣬�ݹ鲻�ϵ��ú���������ջ���ռ䱻ռ�ù⣬�����׷���ջ�����

//#include <stdio.h>;
//void zhengx(unsigned int x)
//{
//	if (x > 9)
//	{
//		zhengx(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	/*printf("hehe\n");
//	main();*/
//	unsigned int a = 0;
//	printf("����һ������:");
//	scanf("%d", &a);
//	zhengx(a);
//	return 0;
//}

// ��д�������ַ�������

//#include <stdio.h>
//
//int qzfccd(char* x)   // char* x ָ���������ŵ�ַ�������Ǵ������ĵ�ַ��
//{
//	if (*x == '\0')
//		return 0;
//	else
//		return 1 + qzfccd(x+1);
//}
//
//int main()
//{
//	char zf[50] = "";
//	printf("�����ַ�����");
//	scanf("%s", &zf);
//	printf("%d\n", qzfccd(&zf));  //���鴫�δ���ȥ�Ĳ����������飬������Ԫ�صĵ�ַ
//	return 0;
//}

//#include <stdio.h>
//
//int my_strlen(char* x)
//{
//	if (*x == '\0')
//		return 0;
//	else
//		return 1 + strlen(x + 1);
//}
//int main()
//{
//	char arr[50] = "";
//	printf("������һ���ַ���");
//	scanf("%s", &arr);
//	printf("�ַ�����Ϊ%d\n", my_strlen(&arr));
//	return 0;
//}

// ��n�Ľ׳�

//#include <stdio.h>

//int jiecheng(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		return x * jiecheng(x - 1);
//}
//int main()
//{
//	int n = 0;
//	printf("Ҫ��˭�Ľ׳ˣ�");
//	scanf("%d", &n);
//	printf("%d�Ľ׳˽��Ϊ%d\n", n, jiecheng(n));
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int res = 1;
//	printf("Ҫ��˭�Ľ׳ˣ�");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		res *= i;
//	}
//	printf("%d\n", res);
//}

// ���n��쳲���������

//#include <stdio.h>
//void fb(int x)
//{
//	int i = 0;
//	int j = 1;
//	int a = 1;
//	for (a = 1; a <= x; a++)
//	{
//		int tmp = j;
//		printf("%d ", j);
//		j = i + j;
//		i = tmp;
//	}
//}
//int fb(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return fb(x - 1) + fb(x - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("Ҫ����ٸ�쳲��������У�");
//	scanf("%d", &n);
//	fb(n);
//	return 0;
//}

// ��ŵ������
//#include <stdio.h>
//int count = 1;
//void move(char x,char y)
//{
//	printf("�ƶ���%d�δ�%c�ƶ���%c\n",count, x, y);
//	count++;
//}
//void hannuota(int x, char a, char b, char c)
//{
//	if (x == 1)
//		move(a, c);
//	else
//	{
//		hannuota(x - 1, a, c, b);
//		move(a, c);
//		hannuota(x - 1, b, a, c);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������Բ������");
//	scanf("%d", &n);
//	hannuota(n, 'a', 'b', 'c');
//	return 0;
//}

// ������̨�ס�n��̨�ס����ܿ���һ����һ����Ҳ����������̨�ס��ж�����������

//#include <stdio.h>;
//
//int taijie(int x)
//{
//	if (x == 1)
//		return 1;
//	else if (x == 2)
//	{
//		return 2;
//	}
//	else
//		return taijie(x - 1) + taijie(x - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("����̨������");
//	scanf("%d", &n);
//	printf("��%d��������", taijie(n));
//	return 0;
//}