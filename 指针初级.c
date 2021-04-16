#define _CRT_SECURE_NO_WARNINGS 1

// 指针是编程语言中的一个对象，利用地址，它的值直接指向存在电脑存储器中另一个地方的值。
// 通过指针能找到所需的变量单元，可以说，地址指向该变量单元
// 指针就是一个变量，用于存放内存单元地址。
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int* p = &a; // 取地址后，存放于指针变量中。
//	return 0;
//}

// 一个内存单元为1个字节大小。
// 对于32位的计算机，产生了2的32次方个地址编号。当然存放地址的指针需要32个比特，也就是占4字节。64位电脑同理。


// 指针和指针类型

//#include <stdio.h>
//
//int main()
//{
	//printf("%d\n", sizeof(int*));  // 计算指针类型的大小。
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(double*));
	// 指针类型的大小都是一样的

	// 指针类型的实际意义
	//int a = 0xabfe4711;
	/*int* pa = &a;
	*pa = 2;*/
	/*char* pb = &a;  用字符类型的指针变量接收地址后，通过解引用修改，并不能完全修改。因为字符只占一个字节，只能修改一个字节。
	*pb = 0;*/
	//printf("%p\n", pa);
	//printf("%p\n", pb);
	//return 0;
//}
// 指针类型决定了指针进行解引用操作的时候能够访问空间的大小。
// int* p;   *p 能够访问4字节
// char* p;  *p 能够访问1字节
// double* p;  *p 能够访问8字节

//
//#include <stdio.h> 
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
// 指针类型决定了指针走一步多远，指针的步长。
// int* p;  p+1  地址向后走4字节（也就是1个int大小）
// char* p;  p+1  地址向后走1字节（也就是1个char大小）

//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr; // 数组名就是数组首元素地址
//	for (int i = 0; i < 10; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}


// 野指针：野指针就是指向的位置是不可知的（随机的、不正确的、没有明确限制的）
// 例如，指针未初始化，默认为随机值。指针越界访问。以及指针指向的空间释放了。

//#include <stdio.h>
//int main()
//{
//	//int a; // 局部变量不初始化，默认为随机值。
//	//int* p; // 局部指针变量，默认为随机值。
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)
//	{
//		p++; // 此处p越界了。越界后p为随机值
//	}
//	return 0;
//}


// 如何避免野指针：
// 1.指针初始化。2.小心指针越界。3.指针指向空间释放时，置为NULL。4.指针使用之前检查有效性
// 当创建指针变量时，不知道该怎么初始化，就初始化为NULL，int* p = NULL;


//  指针运算
// 1.指针 +- 整数
// 2.指针 - 指针
// 3.指针的关系运算

//#include <stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i)); // 指针和整数的运算。
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = &arr[1];
//	int* p2 = &arr[9];
//	printf("%d ", p2 - p1); // 指针减指针
//	// 指针减指针得到中间的元素个数
//	// 指针减指针，必须要求两指针在同一块空间，比如在同一个数组
//	return 0;
//}

//int my_strlen(char* x)
//{
//	char* start = x;
//	char* end = x;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char zf[] = "haha";
//	int a = my_strlen(zf);
//	printf("%d ", a);
//	return 0;
//}

// 指针大小比较
// 标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但不允许与指向第一个元素之前的那个内存位置的指针进行比较。



// 指针和数组。
// 数组名就是数组首元素的地址。
// 当然在 &数组名 这种情况数组名表示整个数组，&数组名，得到整个数组地址。
// 还有就是使用sizeof(数组名)，这里的数组名，也不是首元素地址。这里表示整个数组，sizeof（数组名）表示整个数组大小
//int main()
//{
//	int arr[10] = { 0 };
//	// int* p = arr; // 数组名就是数组首元素地址
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);  // 这里是取了整个数组的地址
//	printf("%p\n", &arr+1); // 所以这里加1 ，地址就跳过了整个数组
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%p == %p\n", &arr[i], p + i);  // 地址一样。
//	//}
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;  // 给数组赋值。
//	}
//	for (int j = 0; j < 10; j++)
//	{
//		printf("%d ", *(p + j));
//		//printf("%d ", arr[j]);
//	}
//	return 0;
//}



//   二级指针
// 指针也是变量，也有相应的地址。指针的地址就是二级指针。
//#include <stdio.h>
//
//int main()
//{
//	int a = 9;
//	int* p = &a;
//	int** pp = &p;  // 二级指针
//	int*** ppp = &pp; // 三级指针
//	**pp = 20;  // 二级指针的解引用
//	***ppp = 7;
//	printf("%d\n", a);
//	printf("%d\n", *p);  // 指针的解引用
//	printf("%d\n", **pp);
//	printf("%d\n", ***ppp);
//	return 0;
//}


//  指针数组
// 顾名思义，就是用来存放指针的数组。
//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//
//	// 创建指针数组，存放同一类型的指针。
//	int* arr[3] = { &a,&b,&c }; // 指针数组
//	for (int i = 0; i < 3; i++)
//	{
//		// 调用指针数组中元素，并解引用
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}


#include <stdio.h>
#define dx 10
int mian()
{
	int arr[dx];
	for (int* p = &arr[dx]; p > &arr[0];)
	{
		*(--p) = 0;
	}
	for (int i = 0; i < dx; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}