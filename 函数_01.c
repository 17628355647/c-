#define _CRT_SECURE_NO_WARNINGS 1

// �������Ǵ��ͳ�����ĳ���ִ��롣��һ������������ɡ����������ĳ���ض����񣬶���������������룬������ԵĶ�����
// һ��������������з���ֵ���ṩ�Թ��̵ķ�װ��ϸ�ڵ����ء�

// c�����к������ࣺ�⺯��(c���Ա����ṩ��)���Զ��庯��
// c���Գ��õĿ⺯�����У�
//	IO�������ַ��������������ַ������������ڴ����������ʱ��/���ں�������ѧ����������������


//#include <stdio.h>;
//
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 45;
//	int b = 79;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "I love study ";
//	char arr2[20] = "************";
//	//strlen - string length �ַ����󳤶ȡ�
//	//strcpy - string copy �ַ�������
//	strcpy(arr2, arr1); // ��arr1�����ݿ�����arr2�С�arr1�е����ݺ� \0 ���´����arr2��
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//memset - �ڴ����á����ڴ��У��޸��ַ���������
//	char arr[] = "hello world";
//	memset(arr, '*', 5);  // ��arr������ǰ5���ַ��滻��*
//	printf("%s", arr);
//	return 0;
//}


//         �Զ��庯��
// ��ʽ
//������������ ������(��������)
//{
//	���;
//}


//#include <stdio.h>
//
//// дһ�������ҳ������������ֵ
//int bijiao(int x, int y)
//{
//	if (x < y)
//		x = y;
//	return x;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = bijiao(a, b);
//	printf("���ֵ��%d\n", c);
//	return 0;
//}


//#include <stdio.h>
//
//void jiaohuan(int* x, int* y)   // �˺����ǽ�������������ֵ��Ҫ��ָ��
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("a=%d,b=%d\n", a, b);
//	jiaohuan(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

// ����������
//ʵ�ʲ�����ʵ�Σ����ڵ��ú���ʱ������Ĳ�����������ȷ����ֵ��
//��ʽ�������βΣ����ڶ��庯��ʱ����Ҫ�Ĳ�����

//�������ã�
//1.��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�顣���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//2.��ַ���ã���ַ�����ǰѺ����ⲿ�����ı������ڴ��ַ���ݸ����������������ú����ͺ����ⲿ����������������ϵ��

//#include <stdio.h>
//#include <math.h>
//
//void sushu(int x)  // �˺������ж�һ�����Ƿ�Ϊ������
//{
//	int i = 1;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			break;
//	}
//	if (i > sqrt(x))
//	{
//		printf("�����%dΪ����\n", x);
//	}
//	else
//		printf("�����%d��������\n", x);
//}
//int runnian(int x)  // �ж��Ƿ�Ϊ���ꡣ
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	return 0;
//}
////         �˴���int x[]��������һ��ָ�롣sizeof(arr)�����ָ��Ĵ�С��Ϊ4�ֽڡ�sizeof(arr[0])ҲΪ4�ֽڡ�
//int chazhao(int x[],int y, int sz)   // �����ڴ���ʱ�����������ǵ�һ��Ԫ�صĵ�ַ��
//{  // { 1,2,3,4,5,6,7,8,9,10 }
//	//int left = 0, right = sizeof(x) / sizeof(x[0]) -1; //  �����ڴ���ʱ���ں����ڲ���������sizeof�������������
//	int left = 0, right = sz - 1;
//	while (left <= right)
//	{
//		if (x[(left + right) / 2] < y)     
//		{
//			left = (left + right) / 2 + 1;
//		}
//		else if (x[(left + right) / 2] > y)
//		{
//			right = (left + right) / 2 - 1;
//		}
//		else
//			return (right+left)/2;
//	}
//	return -1;
//	
//}
//int main()
//{
//	//sushu(10);
//	/*for (int a = 1000; a <= 2000; a++)
//	{
//		if (1 == runnian(a))
//			printf("%d��������\n", a);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  // �ں����ⲿ�����������
//	int xiabiao=chazhao(arr, 9, sz);
//	if (xiabiao == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�±���%d\n", xiabiao);
//	return 0;
//}

//#include <stdio.h>
//
//void zeng(int* x)
//{
//	*x += 1;
//}
//int main()
//{
//	int num = 0;
//	zeng(&num);
//	zeng(&num);
//	zeng(&num);
//	printf("%d\n", num);
//	return 0;
//}

