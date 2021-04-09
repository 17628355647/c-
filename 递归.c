#define _CRT_SECURE_NO_WARNINGS 1

// 函数的嵌套调用和链式访问。
//函数嵌套：函数和函数之间可以有机的组合的。函数里面可以调用其它函数。
// 链式访问：把一个函数的返回值，作为另一个函数的参数。

//#include <stdio.h>
//
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));  // printf的返回值是字符的个数。
//
//	return 0;
//}

//函数的声明：1.告诉编译器函数名、参数、返回类型。2.函数的声明一般出现在函数的使用之前，先声明再使用。3.函数的声明放在头文件中。
//函数的定义：函数的具体实现，交代函数的功能实现。
// 函数声明放在.h头文件中，函数定义放在.c源文件中。方便把代码，工程拆分成各种各样模块。

//#include "add.h"  // 引用自己写的头文件。
//#include <stdio.h>
//
//int main()
//{
//	int a = 10, b = 25;
//	printf("%d\n", add(a, b));
//}



//                  递归
// 递归：程序调用自身的编程技巧。（套娃）

//递归两个必要条件：
//1.存在限制条件，当满足这个限制条件的时候，递归不再继续。
//2.每次递归调用之后越来越接近这个限制条件。

// 递归常见问题：栈溢出。
//首先内存划分为栈区、堆区和静态区。栈区：函数调用、局部变量、函数形式参数。堆区：动态开辟的内存。静态区：全局变量，static修饰的变量
//栈溢出：因为函数调用在栈区创建空间，递归不断调用函数，导致栈区空间被占用光，故容易发生栈溢出。

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
//	printf("输入一个整数:");
//	scanf("%d", &a);
//	zhengx(a);
//	return 0;
//}

// 编写代码求字符串长度

//#include <stdio.h>
//
//int qzfccd(char* x)   // char* x 指针变量，存放地址。这里是存放数组的地址。
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
//	printf("输入字符串：");
//	scanf("%s", &zf);
//	printf("%d\n", qzfccd(&zf));  //数组传参传过去的不是整个数组，而是首元素的地址
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
//	printf("请输入一串字符：");
//	scanf("%s", &arr);
//	printf("字符长度为%d\n", my_strlen(&arr));
//	return 0;
//}

// 求n的阶乘

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
//	printf("要求谁的阶乘：");
//	scanf("%d", &n);
//	printf("%d的阶乘结果为%d\n", n, jiecheng(n));
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int res = 1;
//	printf("要求谁的阶乘：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		res *= i;
//	}
//	printf("%d\n", res);
//}

// 求第n个斐波那契数列

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
//	printf("要求多少个斐波那契数列：");
//	scanf("%d", &n);
//	fb(n);
//	return 0;
//}

// 汉诺塔问题
//#include <stdio.h>
//int count = 1;
//void move(char x,char y)
//{
//	printf("移动第%d次从%c移动到%c\n",count, x, y);
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
//	printf("请输入圆盘数：");
//	scanf("%d", &n);
//	hannuota(n, 'a', 'b', 'c');
//	return 0;
//}

// 青蛙跳台阶。n个台阶。青蛙可以一次跳一个，也可以跳两个台阶。有多少种跳法。

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
//	printf("输入台阶数：");
//	scanf("%d", &n);
//	printf("有%d种跳法。", taijie(n));
//	return 0;
//}