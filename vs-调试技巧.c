#define _CRT_SECURE_NO_WARNINGS 1

// bug是：计算机硬件或程序的缺陷
// 调试，英文名：Debug。是发现和减少计算机程序或电子仪器设备中程序错误的一个过程。
// 调试步骤：
// 发现程序错误->以隔离、消除方式对错误进行定位->确定错误产生的原因->提出纠正错误的方法->对程序错误进行改正，重新测试

// Debug 通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序。
// Release成为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	for (int i = 0;i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	system("pause");
//	return 0;
//}

// 所有的源代码（.c文件）编译之后会产生可执行程序。
// 用Debug 产生的是Debug版的可执行程序。这个版本可以调试，文件中包含调试信息 
// 用Release 产生的是Release版可执行程序

// Release版的优化在功能上有所调整。比如下面这代码，Debug版是死循环，Release版没有死循环。
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <=12; i++)
//	{
//		printf("哈哈\n");
//		arr[i] = 0;
//	}
//	return 0;
//}


// 调试快捷键 
// F5 启动调试。和F9配合使用。按下F9后出现的红点被称为 断点。
// 先设置断点，然后按F5，代码直接运行到断点处。然后按F10逐步调试
//#include <stdio.h>
//int main()
//{
//	for (int i = 0;i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//	for (int i = 0; i < 100; i++)
//	{
//		printf("%d\n", 10-i);
//	}
//	return 0;
//}


// F10逐过程、F11逐语句
// ctrl F5 执行程序，不调试
// shift F11 跳出一个函数


//#include <stdio.h>
//void test2()
//{
//	printf("艹艹\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//// 一层一层的调用函数


// 实现代码 1!+2!+3!+.....+n!
//#include <stdio.h>
//int jiecheng(int i) // 求每个数的阶乘
//{
//	if (i >= 2)
//	{
//		return i * jiecheng(i - 1);
//	}
//	return 1;
//}
//int jxxj(int n)  // 求它们阶乘后相加的和
//{
//	int tmp = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		tmp += jiecheng(i);
//	}
//	return tmp;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入n值：");
//	scanf("%d", &n);
//	ret = jxxj(n);
//	printf("结果是：%d\n", ret);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// int i = 0; 把i放在这，这样子也不会死循环
//	for (i = 0; i <= 12; i++)
//	{
//		printf("哈哈\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
// 这题为什么死循环？
// 首先可以显然看见，在循环中访问arr数组肯定越界了
// 通过调试可知，arr[12] 和i的地址相同。循环到i等于12时，把arr[12]改成了0，也就是i变成了0。所以死循环。
// 
// 为什么i的地址和arr[12]地址一样呢？
// 因为i和arr数组都是局部变量，存储在栈区。栈区默认先使用高地址，再使用低地址。
// 因为先使用i所以i为高地址，而且数组存储是连续的，地址随着下标增大而增大
// 然后是因为这个循环越界了，循环到i等于12的时候，正好越界到i的存储位置，把arr[12]改成0，也就是把i也改成了0。
// 栈区：存储方式是像盖房子一样，一层一层的存。把数据存在之前存储数据的顶部。取出数据也是上面的数据先取出，下面的数据后取出
// 也就是默认先使用高地址，再使用低地址。
// 至于为什么没有报错，因为程序忙着死循环，没有时间报错。

// 需要注意的是，改成Release版本的时候不会死循环。因为Release版本会优化，是i的地址小于arr的地址。



//  如何写出（已与调试）的代码。
// 优秀的代码：
//		1.代码运行正常。
//		2.bug很少。
//		3.效率高。
//		4.可读性高
//		5.可维护性高。
//		6.注释清晰。
//		7.文档齐全。

// 写出优秀代码的技巧：
//		1.使用assert
//		2.尽量使用const
//		3.养成良好的编码风格
//		4.添加必要的注释
//		5.避免编码的陷阱


// 模拟实现库函数：strcpy
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	// strcpy 字符串拷贝
//	char arr1[] = "########################";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2); // 把arr2中数据拷贝放入arr1中。也会把arr2中 '\0'也拷贝进去
//	printf("%s\n", arr1);  // 在打印arr1时，遇到 '\0' 就会停止打印，所以没有打印之后的 # 
//	return 0;
//}

//  下面是自己实现的strcpy函数功能
//void my_strcpy(char* arr1, char* arr2)  // 把arr2内容拷贝进入arr1中
//{
//	while (*arr2 != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;  // 把arr2 中 '\0' 拷贝进arr1 中
//}
//int main()
//{
//	char arr1[] = "########################";
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2); // 定义一个自己的字符串拷贝函数
//	printf("%s", arr1);
//	return 0;
//}

//   但这个代码太挫了，因为拷贝hello world 和拷贝 \0 放在了两个地方。下面继续优化
//void my_strcpy(char* arr1, char* arr2)
//{
//	while (*arr1++ = *arr2++) // 优化第二部。把表达式放在这。while判断循环是否执行看这表达式的值，
//		//而这个值取决于arr2的赋值。当arr2赋值 '\0'时这个表达式等于0,循环终止。在内存中字符'\0'就等于0
//	{
//		;//*arr1++ = *arr2++;  // 优化第一步
//	}
//}

// 但当arr2传入NULL指针时，程序会挂掉。使用指针之前，一定要判断指针有效性，继续优化
//void my_strcpy(char* arr1, char* arr2)
//{
//	if (arr2 != NULL && arr1 != NULL)
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//	}
//}

//  但即使规避了NULL指针，也没有很好的提示出现了什么错误。继续优化
//#include <stdio.h>
//#include <assert.h>
//void my_strcpy(char* arr1, char* arr2)
//{
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);  // 断言。若这个表达式结果为真，不会发生什么。若这个表达式结果为假，就会报错。把错误地方爆出来
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//}

//  继续优化
//  char*表示函数返回char类型的指针。加const的原因是，加了const，arr2就不能被修改。防止下面写错
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	char* ret = arr1;
//	assert(arr2 != NULL);
//	assert(arr1 != NULL);
//	while (*arr1++ = *arr2++) // 若这里把arr1和arr2写反了。加了const的arr2就会是程序错误，让程序员发现这里写错了
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "########################";
//	char arr2[] = "hello world";
//	//my_strcpy(arr1, arr2); // 定义一个自己的字符串拷贝函数
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}


//   这里阐述const的具体作用
//int main()
//{
	//const int num = 10; // 用const修饰num  使得num这个变量不能被修改
	//int* p = &num;
	//*p = 20;   //  但是通过地址一样的修改了num的值

	//const int* p = &num;    //  这里const，修饰的是 *p 不能通过p来非法改变 *p的值（num的值）
	//*p = 20;             // 不能非法修改了

	//const 可以放在*左边，也可以放在*右边
	// 例如：const int* p = &num;      int* const p = &num;
	// 放在不同位置，意义不同
	// const放在指针变量的*左边时，const int* p = &num;  修饰的是 *p 不能通过p来改变 *p的值（num的值）
	// const放在指针变量的*右边时，int* const p = &num;  修饰的是p 表示p不能被修改，但可以修改*p的值（num的值）
	//const修饰*p和p时，const int* const p = &num;   这样两个都修饰了，p和*p都不能被改变

	//printf("%d ", num);
	//return 0;
//}


//  模拟实现strlen函数

//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* arr)
//{
//	int count = 0;
//	assert(arr != NULL);
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int a = my_strlen(arr);
//	printf("长度为：%d\n", a);
//	return 0;
//}



// 编程常见错误：编译型错误（代码语法出错）、链接型错误（例如没有引用头文件，使用没有定义的函数）、运行时错误