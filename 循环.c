#define _CRT_SECURE_NO_WARNINGS 1

// while 循环。

//#include <stdio.h>
//
//int main()
//{
//	int n = 5;
//	while (n)
//	{
//		printf("hehe\n");  // 打印5个hehe。
//		n -= 1;
//	}
//	return 0;
//}

// break 跳出循环。continue 停止本次循环，continue后面代码再不会执行,而是从while处，继续下一次循环
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
//	//getchar() 接收键盘一个字符，并返回
//	//int ch = getchar();
//	//putchar(ch);  // putchar 打印getchar接收的字符 。自带换行
//	int ch = 0;
//	// 输入ctrl + z  就相当于输入了EOF
//	//EOF - end of file 文件结束标志 本身的值为-1
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
//	char 密码[20] = { 0 };
//	int a = 0;
//	int ch = 0;
//	printf("请输入密码：");
//	// scanf、getchar都为输入函数。先在输入缓冲区，查找有没有数据。若有数据就直接读取，若没有则等待输入。
//	scanf("%s", &密码);   // scanf只会再输入缓冲区读取空格前的内容  输入密码为12345\n。  \n表示回车确认。scanf读取密码为12345，\n则留在输入缓冲区
//	//getchar(); // 多加一个getchar 把\n读取掉。避免影响程序。
//	while ((ch = getchar()) != '\n')     // 在输入缓冲区读取数据，读取到\n。也就是起了 清空输入缓冲区 的作用
//	{
//		;
//	}
//	printf("请确认（Y/N）：");
//	a = getchar();   // 轮到getchar时，去输入缓冲区查找有没有数据，若里面有一个\n，\n就被读取。就没有等用户自己输入。
//	if ((a == 'Y') || (a == 'y'))
//	{
//		printf("确认成功");
//	}
//	else {
//		printf("确认失败");
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





//                                    for 循环

// 语法
//for(表达式1;表达式2;表达式3)
//	循环语句
//表达式1为初始化部分，初始化循环变量。表达式2为条件判断部分，用于判断循环终止。表达式3为调整部分，用于循环条件的调整。

// break和continue的用法与while中一样

//#include <stdio.h>
  
//int main()
//{
//	// for循环把三部分合在一起。
//	for (int num = 1/*初始化*/; num <= 10/*判断部分*/; num++/*调整部分*/)
//	{
//		if (num == 5)
//			continue;
//		printf("%d\n", num);
//	}
//	return 0;
//}
//for循环建议：
//	1.不可再for循环体内修改变量，防止for循环失去控制。
//	2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < 10; i++)  // 前闭后开的写法
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
	// for循环的初始化、判断和调整都可以省略。但for循环的判断部分被省略，判断条件就恒为真
	//for (;;)  // 死循环
	//{
	//	printf("hehe\n");
	//}

	/*int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)  //  这样子写只能打印10个hehe。
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
// 两个循环变量
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
//	// 循环0次。因为判断表达式为k=0。把0赋给了k，而0为假，故循环0次
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}


//                                  do  while 循环
//语法：
//do
//	循环语句;
//while(表达式);

// 一上来就先执行（do）。执行完再判断（while）
//break和continue用法一样
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

//int 阶乘(int x)
//{
//	if (x > 1)
//	{
//		return x * 阶乘(x - 1);
//	}
//	return 1;
//}

//int main()
//{
	//计算n的阶乘
	/*int n = 0;
	scanf("%d", &n);
	printf("%d的阶乘为%d\n", n,(阶乘(n)));*/

	// 计算n的阶乘,方法2
	/*int n = 0;
	int num = 1;
	scanf("%d", &n);
	for (int a = 1; a <= n; a++)
	{
		num = a * num;
	}
	printf("%d的阶乘为%d\n", n, num);*/

	// 计算1！+2！+3！....+10！
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d", &c);
	for (a = c; a >= 1; a--)
	{
		b += 阶乘(a);
	}
	printf("值为%d\n", b);*/

	//在有序数组中查找某个数字n
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，下标为%d，", i);
			break;
		}
	}
	if (i == sz)
		printf("没有找到");*/
//	return 0;
//}

//  择半查找算法
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
//			printf("找到了下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("没有找到\n");
//	return 0;
//}

// 编写代码，演示多个字符从两端移动，向中间汇聚

//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char 字符[] = "How are you? I am fine";
//	char zifu[] = "######################";
//	char zifu1[] = "######################";
//	int left = 0;
//	//int right = sizeof(字符) / sizeof(字符[0]) - 2; // 字符串的结尾是'\0' 所以要减2
//	int right = strlen(字符) - 1; // 用strlen算字符串长度0
//	printf("%s\n", zifu);
//	Sleep(1000);
//	system("cls");
//	while (left <= right)
//	{
//		zifu[left] = 字符[left];  // 把字符的元素 赋值给zifu中相应的元素。
//		zifu[right] = 字符[right];
//		left += 1;
//		right -= 1;
//		printf("%s\n", zifu);
//		Sleep(1000);  // Sleep函数表示停顿，单位毫秒。1000毫秒也就是1秒
//		system("cls"); // 调用外部可执行文件（程序）
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

//编写代码实现，模拟用户登录情景，并且只能登录三次
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char password[50] = "";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", &password);
//		if (strcmp(password,"hahaha01") == 0) // == 不能用来判断字符串相等！。
//		{ //应该使用函数strcmp。strcmp(password,"hahaha01")，若两个相等返回的是0，若第一个大于第二个字符串，返回大于零的数。反之，返回小于零的数
//			printf("登录成功");
//			break;
//		}
//		else
//			printf("输入错误。");
//	}
//	if (i == 3)
//		printf("三次密码都错误，退出程序\n");
//	return 0;
//}


// 输入三个数判断大小
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数：");
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
//	printf("三个数的大小排序为%d>%d>%d", a, b, c);
//	return 0;
//}

// 写一个代码打印1-100之间所有3的倍数的数字
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