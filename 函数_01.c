#define _CRT_SECURE_NO_WARNINGS 1

// 函数：是大型程序中某部分代码。由一个或多个语句块组成。它负责完成某项特定任务，而且相较于其它代码，具有相对的独立性
// 一般有输入参数并有返回值，提供对过程的封装和细节的隐藏。

// c语言中函数分类：库函数(c语言本身提供的)、自定义函数
// c语言常用的库函数都有：
//	IO函数、字符串操作函数、字符操作函数、内存操作函数、时间/日期函数、数学函数、其他函数。


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
//	//strlen - string length 字符串求长度。
//	//strcpy - string copy 字符串拷贝
//	strcpy(arr2, arr1); // 把arr1中内容拷贝到arr2中。arr1中的内容和 \0 都会拷贝到arr2中
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//memset - 内存设置。在内存中，修改字符串的内容
//	char arr[] = "hello world";
//	memset(arr, '*', 5);  // 把arr数组中前5个字符替换成*
//	printf("%s", arr);
//	return 0;
//}


//         自定义函数
// 格式
//函数返回类型 函数名(函数参数)
//{
//	语句;
//}


//#include <stdio.h>
//
//// 写一个函数找出两个数的最大值
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
//	printf("最大值：%d\n", c);
//	return 0;
//}


//#include <stdio.h>
//
//void jiaohuan(int* x, int* y)   // 此函数是交换两个变量的值。要用指针
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

// 函数参数：
//实际参数（实参）：在调用函数时，输入的参数。必须有确定的值。
//形式参数（形参）：在定义函数时，需要的参数。

//函数调用：
//1.传值调用：函数的形参和实参分别占有不同内存块。对形参的修改不会影响实参。
//2.传址调用：传址调用是把函数外部创建的变量的内存地址传递给函数参数。可以让函数和函数外部变量建立真正的联系。

//#include <stdio.h>
//#include <math.h>
//
//void sushu(int x)  // 此函数是判断一个数是否为素数。
//{
//	int i = 1;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			break;
//	}
//	if (i > sqrt(x))
//	{
//		printf("这个数%d为素数\n", x);
//	}
//	else
//		printf("这个数%d不是素数\n", x);
//}
//int runnian(int x)  // 判断是否为闰年。
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	return 0;
//}
////         此处的int x[]本质上是一个指针。sizeof(arr)求的是指针的大小，为4字节。sizeof(arr[0])也为4字节。
//int chazhao(int x[],int y, int sz)   // 数组在传参时，仅仅传的是第一个元素的地址。
//{  // { 1,2,3,4,5,6,7,8,9,10 }
//	//int left = 0, right = sizeof(x) / sizeof(x[0]) -1; //  数组在传参时，在函数内部，不能用sizeof这样子求个数！
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
//			printf("%d年是闰年\n", a);
//	}*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 在函数外部求数组个数。
//	int xiabiao=chazhao(arr, 9, sz);
//	if (xiabiao == -1)
//		printf("找不到指定的数字\n");
//	else
//		printf("下标是%d\n", xiabiao);
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

