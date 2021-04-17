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
//	init(arr,sz); // 初始化函数全为零
//	//print(arr, sz); // 打印数组内容
//	reverse(arr, sz);  // 实现数组逆置
//	print(arr, sz);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	// 交换数组
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
//	printf("%x\n", a); // %x 打印16进制数。
//	return 0;
//}


//#include <stdio.h>
//int i;   //  全局变量，不初始化，默认值为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))     // sizeof操作符计算变量/类型 所占内存大小，结果都是无符号数，大于等于0的数 。
//		printf(">\n");     //  当一个整型数与一个无符号数比较大小时，会把整型数转换成无符号数，也就是正数。
//	                       //   而-1的补码是11111111111111111111，这样的无符号数，非常大。故此处打印 >
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
//	b = ++c, c++, ++a, a++;     //  逗号表达式每个式子都会执行，但最终结果只看最后一个式子。
//	b += a++ + c;
//	printf("a=%d  b=%d  c=%d\n", a, b, c);
//	return 0;
//}

//#include <stdio.h>
////求两数二进制位的个数不同
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("输入两个数：");
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
////获取一个整数二进制序列中所有偶数位和奇数位，分别打印出来
//int main()
//{
//	int a = 0;
//	int tmp = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	tmp = a;
//	printf("奇数位：");
//	for (int i = 0; i < 16; i++)
//	{
//		printf("%d ", (a & 1));
//		a >>= 2;
//	}
//	printf("\n");
//	printf("偶数位：");
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
////写一个函数返回参数二进制中1的个数
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
//int fanhui(int a)     // 最优解！
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
//	printf("输入一个数：");
//	scanf("%d", &a);
//	//int sz = sizeof(a) * 8;
//	//printf("二进制位中1的个数是%d\n", fanhui(a,sz));
//	printf("二进制位中1的个数是%d\n", fanhui(a));
//	return 0;
//}


//#include <stdio.h>
//  不使用第三个变量，交换两个变量的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//  相加法
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	
//	// 异或法
//	/*a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;*/
//	printf("a=%d  b=%d\n", a, b);
//	return 0;
//}
  

//#include <stdio.h>
// 写一个函数打印数组arr内容，使用指针，不使用数组下标。
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
//// 实现一个函数判断一个数是不是素数
//int pdss(int a)  // 此函数判断是不是素数，是素数返回1，反之返回0
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
//	//printf("请输入一个数：");
//	//scanf("%d", &a);
//	/*if (1 == pdss(a))
//		printf("这个数%d是素数", a);
//	else
//		printf("这个数%d不是素数", a);*/
//	for (int j = 100; j <= 200; j++)
//	{
//		if (1 == pdss(j))
//			printf("%d\n", j);
//	}
//	return 0;
//}


//#include <stdio.h>
//// 打印乘法口决表
//int main()
//{
//	int a = 0;
//	printf("请输入打印几乘几的的乘法口诀表：");
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
//// 用递归的方法打印1个数的每位
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
//// 字符串逆序，不使用库函数
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
//// 递归实现一个数的每位数之和
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
//	printf("和为：%d\n", b);
//	return 0;
//}


//#include <stdio.h>
//// 递归实现n的k次方
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
//// 求e的x次方的值。
//double dgcf(double n, double k)  // 求次方
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
//double jiecheng(double x)  // 求阶乘
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
//		printf("输入错误！");
//	return 0;
//}



//#include <stdio.h>
//// 求1到100000之间的水仙花数并输出
//int cifang(int x, int len)  //  一个数的多少次方
//{
//	int tmp = 1;
//	for (int i = 0; i < len; i++)
//	{
//		tmp = tmp * x;
//	}
//	return tmp;
//}
//int zws(int x)  // 求出数字的位数
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x / 10;
//	}
//	return count;
//}
//int gwcf_sum(int x, int len)  // 每位数位数的次方相加
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
//int sxh(int x)  // 判断是不是水仙花数
//{
//	int len = zws(x); // 找x的位数
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
//			printf("%d是水仙花数\n", i);
//	}
//	return 0;
//}