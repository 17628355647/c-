#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#define dx 10
//int main()
//{
//	int arr[dx] = {1,2,3,4,5};
//	for (int* p = &arr[dx]; p > &arr[0];)
//	{
//		*(--p) = 0;
//	}
//	for (int i = 0; i < dx; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void init(int* x,int a)
//{
//	for (int i = 0; i < a; i++)
//	{
//		*(x + i) = i+1;
//	}
//}
//void print(int* x, int a)
//{
//	for (int i = 0; i < a; i++)
//	{
//		printf("%d ", *(x + i));
//	}
//}
//void reverse(int x[], int a)
//{
//	int zuo = 0;
//	int you = a - 1;
//	int tmp = 0;
//	for (int i = 0; i < (a / 2); i++)
//	{
//		tmp = x[zuo];
//		x[zuo] = x[you];
//		x[you] = tmp;
//		zuo += 1;
//		you -= 1;
//	}
//}
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz); // ��ʼ������ȫΪ��
//	//print(arr, sz); // ��ӡ��������
//	reverse(arr, sz);  // ʵ����������
//	print(arr, sz);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	// ��������
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 6,7,8,9,10 };
//	for (int i = 0; i < 5; i++)
//	{
//		int tmp = 0;
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", a[j]);
//	}
//	printf("\n");
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%d ", b[j]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a); // %x ��ӡ16��������
//	return 0;
//}


//#include <stdio.h>
//int i;   //  ȫ�ֱ���������ʼ����Ĭ��ֵΪ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))     // sizeof�������������/���� ��ռ�ڴ��С����������޷����������ڵ���0���� ��
//		printf(">\n");     //  ��һ����������һ���޷������Ƚϴ�Сʱ�����������ת�����޷�������Ҳ����������
//	                       //   ��-1�Ĳ�����11111111111111111111���������޷��������ǳ��󡣹ʴ˴���ӡ >
//	else
//		printf("<\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;     //  ���ű��ʽÿ��ʽ�Ӷ���ִ�У������ս��ֻ�����һ��ʽ�ӡ�
//	b += a++ + c;
//	printf("a=%d  b=%d  c=%d\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
////������������λ�ĸ�����ͬ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������");
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		count++;
//		c = c & (c - 1);
//	}
//	printf("%d", count);
//	return 0;
//}



//#include <stdio.h>
////��ȡһ����������������������ż��λ������λ���ֱ��ӡ����
//int main()
//{
//	int a = 0;
//	int tmp = 0;
//	printf("������һ��������");
//	scanf("%d", &a);
//	tmp = a;
//	printf("����λ��");
//	for (int i = 0; i < 16; i++)
//	{
//		printf("%d ", (a & 1));
//		a >>= 2;
//	}
//	printf("\n");
//	printf("ż��λ��");
//	a = tmp;
//	a = a >> 1;
//	for (int i = 0; i < 16; i++)
//	{
//		printf("%d ", (a & 1));
//		a >>= 2;
//	}
//	return 0;
//}



//#include <stdio.h>
////дһ���������ز�����������1�ĸ���
//int fanhui(int a,int sz)
//{
//	int count = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (1 == (a & 1))
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	return count;
//}
//int fanhui(int a)     // ���Ž⣡
//{
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a = a & (a - 1);
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	printf("����һ������");
//	scanf("%d", &a);
//	//int sz = sizeof(a) * 8;
//	//printf("������λ��1�ĸ�����%d\n", fanhui(a,sz));
//	printf("������λ��1�ĸ�����%d\n", fanhui(a));
//	return 0;
//}


//#include <stdio.h>
//  ��ʹ�õ�������������������������ֵ
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//  ��ӷ�
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	
//	// ���
//	/*a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;*/
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}
  

//#include <stdio.h>
// дһ��������ӡ����arr���ݣ�ʹ��ָ�룬��ʹ�������±ꡣ
//void zz_print(int* x, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(x + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	zz_print(arr,sz);
//	return 0;
//}


//#include <stdio.h>
//#include <math.h>
//// ʵ��һ�������ж�һ�����ǲ�������
//int pdss(int a)  // �˺����ж��ǲ�������������������1����֮����0
//{
//	for (int i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//int a = 0;
//	//printf("������һ������");
//	//scanf("%d", &a);
//	/*if (1 == pdss(a))
//		printf("�����%d������", a);
//	else
//		printf("�����%d��������", a);*/
//	for (int j = 100; j <= 200; j++)
//	{
//		if (1 == pdss(j))
//			printf("%d\n", j);
//	}
//	return 0;
//}


//#include <stdio.h>
//// ��ӡ�˷��ھ���
//int main()
//{
//	int a = 0;
//	printf("�������ӡ���˼��ĵĳ˷��ھ���");
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%dX%d=%-3d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}


//#include <stdio.h>
//// �õݹ�ķ�����ӡ1������ÿλ
//void dgdy(int a)
//{
//	if (a / 10 != 0)
//	{
//		printf("%d ", (a % 10));
//		dgdy(a / 10);
//	}
//	else
//	{
//		printf("%d ", a);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	dgdy(a);
//	return 0;
//}


//#include <stdio.h>
//// �ַ������򣬲�ʹ�ÿ⺯��
//void reverse_string(char x[],int sz)
//{
//	char tmp;
//	int zuo = 0;
//	int you = sz -1;
//	while (zuo <= you)
//	{
//		tmp = x[zuo];
//		x[zuo] = x[you];
//		x[you] = tmp;
//		zuo++;
//		you--;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", x[i]);
//	}
//}
//int my_strlen(char* x)
//{
//	int count = 0;
//	while (*x != '\0')
//	{
//		count++;
//		x++;
//	}
//	return count;
//}
//void reverse_string(char a[],int zuo,int you)
//{
//	if (zuo >= you)
//	{
//		;
//	}
//	else
//	{
//		char tmp = a[zuo];
//		a[zuo] = a[you];
//		a[you] = tmp;
//		reverse_string(a, zuo + 1, you - 1);
//	}
//}
//void reverse_string(int a[])
//{
//	char tmp = a[0];
//	int len = my_strlen(a);
//	a[0] = a[len-1];
//	a[len-1] = '\0';
//	if (my_strlen(a + 1) >= 2)
//		reverse_string(a + 1);
//	a[len-1] = tmp;
//}
//int main()
//{
//	char a[] = "abcdef";
//	//scanf("%s", &a);
//	//int sz = sizeof(a) / sizeof(a[0]);
//	//reverse_string(a,sz);
//	/*int len = my_strlen(a);
//	int zuo = 0;
//	int you = len - 1;
//	reverse_string(a,zuo,you);*/
//	printf("%s\n", a);
//	reverse_string(a);
//	printf("%s\n", a);
//	return 0;
//}


//#include <stdio.h>
//// �ݹ�ʵ��һ������ÿλ��֮��
//int dgsum(int a)
//{
//	if (a / 10 != 0)
//		return (a % 10) + dgsum(a / 10);
//	return a;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = dgsum(a);
//	printf("��Ϊ��%d\n", b);
//	return 0;
//}


//#include <stdio.h>
//// �ݹ�ʵ��n��k�η�
//double dgcf(int n,int k)
//{
//	if (n != 0)
//	{
//		if (k > 0)
//			return n * dgcf(n, k - 1);
//		else if (k == 0)
//			return 1;
//		else
//			return 1.0 / (dgcf(n, -k));
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = dgcf(n,k);
//	printf("ret = %lf", ret);
//	return 0;
//}


//#include <stdio.h>
//// ��e��x�η���ֵ��
//double dgcf(double n, double k)  // ��η�
//{
//	if (n != 0)
//	{
//		if (k > 0)
//			return n * dgcf(n, k - 1);
//		else if (k == 0)
//			return 1;
//		else
//			return 1.0 / (dgcf(n, -k));
//	}
//	else
//		return 0;
//}
//double jiecheng(double x)  // ��׳�
//{
//	if (x == 1)
//		return 1;
//	else
//		return x * jiecheng(x - 1);
//}
//int main()
//{
//	double x = 0;
//	double n = 0;
//	double tmp = 1;
//	scanf("%lf%lf", &x, &n);
//	if (n > 0) {
//		for (int i = 1; i <= n; i++)
//		{
//			tmp += dgcf(x, i) / jiecheng(i);
//		}
//		printf("%lf", tmp);
//	}
//	else
//		printf("�������");
//	return 0;
//}



//#include <stdio.h>
//// ��1��100000֮���ˮ�ɻ��������
//int cifang(int x, int len)  //  һ�����Ķ��ٴη�
//{
//	int tmp = 1;
//	for (int i = 0; i < len; i++)
//	{
//		tmp = tmp * x;
//	}
//	return tmp;
//}
//int zws(int x)  // ������ֵ�λ��
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x / 10;
//	}
//	return count;
//}
//int gwcf_sum(int x, int len)  // ÿλ��λ���Ĵη����
//{
//	if (x < 9)
//	{
//		return cifang(x, len);
//	}
//	else
//	{
//		return cifang((x % 10), len) + gwcf_sum(x / 10, len);
//	}
//}
//int sxh(int x)  // �ж��ǲ���ˮ�ɻ���
//{
//	int len = zws(x); // ��x��λ��
//	int tmp = gwcf_sum(x,len);
//	if (tmp == x)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 100000; i++)
//	{
//		if (1 == sxh(i))
//			printf("%d��ˮ�ɻ���\n", i);
//	}
//	return 0;
//}