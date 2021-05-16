#define _CRT_SECURE_NO_WARNINGS 1

// 动态内存函数：malloc、free、calloc、realloc

// 之前我们知道的内存使用方式：
// 1.创建变量。例如：int a;  局部变量在栈区，全局变量在静态区
// 2.创建数组。int arr[10];  
// 上面两种内存开辟的方式的特点：1.空间开辟是固定的。2.数组在申明的时候，必须指定数组长度，所需内存在编译时分配
// 但往往有时候对于空间大小的需求是在程序运行时才知道，只能使用动态内存开辟。
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct stu arr[50];  // 存放50个struct stu类型的数据
//	// 但若是只需要30个，就浪费了。需要100个，就不够
//	return 0;
//}
// C99标准的c语言，支持创建变长数组，也就是int arr[n],n可以为变量。但当前编译器，不支持C99标准。gcc编译器支持




//动态内存分配在内存的 堆区 分配

// malloc函数
// void* malloc(size_t size);
// 这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针。
// 1.如果开辟成功，则返回一个指向开辟好空间的指针
// 2.如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查
// 3.返回指定类型是void* 所以malloc函数并不知道开辟空间要存放什么，使用时，跟随自己的意愿，强制类型转换返回的指针，即可
// 4.如果参数size为0，malloc的行为是标准未定义的，取决于编译器。size表示要开辟的字节个数


// 当开辟空间，使用完后。空间应该还给 操作系统。
// 使用free函数，释放和回收动态内存
// void free(void* ptr)
// 没有手动的还空间，程序结束或者死掉后，系统也会自动回收空间。
// 一定要手动还空间。
// 若ptr所指向的空间不是动态内存开辟的，那free函数的行为没有定义，各编译器不一样
// 如果ptr本来就是NULL指针，则函数什么都不用做。


//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	// 向内存申请 10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//		printf("%s\n", strerror(errno)); // 打印错误原因
//	else
//	{
//		printf("%p\n", p);  // 正常使用
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p+i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	// 当动态内存空间不再使用时
//	// 就应该还给 操作系统。
//	// 利用free函数。
//	free(p);
//	p = NULL;   // 虽然p所指向的空间已经还给系统了，但p依旧存有那空间的地址，需要手动的将p设为空指针。防止p非法访问。
//	return 0;
//}




// calloc函数。也是用来动态内存分配
// void* calloc(size_t num,size_t size);  num为元素个数。size为每个元素的大小
// 函数的功能为 num个大小的size的元素开辟一块空间，并且把空间的每个字节初始化为0。
// 与函数malloc的区别只在于calloc会与返回地址之前把申请的空间的每个空间初始化为0，其他地方一样

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//		printf("%s", strerror(errno));
//	else
//	{
//		printf("开辟成功\n");
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	// 释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}




// realloc函数。让动态内存管理更加灵活
// realloc函数可以做到对动态内存大小的调整。
// void* realloc(void* ptr,size_t size);
// ptr是要调整的内存地址。
// size调整之后新大小
// 返回值为调整之后的内存起始位置
// 这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到 新 的空间
// realloc在调整内存空间的时候，存在两种情况：1.如果原先空间后面的内存空间足够大，则在后面开辟，返回的指针和原来一样
//   2.如果原先空间后面的内存空间不够大，则会重新开辟一块足够大的空间，并且会复制原先数据。之前的空间会释放。返回的指针于之前指针不同

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//
//	// 假设使用的40字节空间不够，则需要使用realloc调整空间大小
//	int* p2 = (int*)realloc(p, 80); //用新的变量来接受，realloc的返回值。防止realloc开辟失败
//	if (p2 == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		p = p2;
//		int i = 0;
//		for (i = 10; i < 20; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 20; i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

// 当然也可以直接用realloc开辟空间。int* p = (int*)realloc(NULL,40);  等价于malloc


//   常见的动态内存错误

// 1.对NULL指针的解引用操作

//int main()
//{
//	int* p = (int*)malloc(40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;   // 万一 malloc开辟空间失败，p就为NULL。此时解引用就存在问题。
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


// 2.对动态开辟空间的越界访问

//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++) // 越界访问
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


// 3.对非动态开辟内存使用free释放

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	*p = 10;
//	free(p);  // 对非动态开辟内存使用free释放
//	p = NULL;
//	return 0;
//}



// 4.使用free释放动态开辟内存的 一部分

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*p++ = i;
//		}
//	}
//	free(p);   // 此时的p指针并不指向，动态开辟空间的起始位置。使用free，会导致只释放了动态开辟空间的一部分，和释放后面非动态开辟的空间
//	p = NULL;
//	return 0;
//}



// 5.对同一块动态内存多次释放

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	else
//	{
//		// 使用
//	}
//	free(p);
//	//......
//	free(p);  //对同一块动态内存多次释放。
//	return 0;
//}



// 6.动态开辟内存忘记释放（内存泄露）
//#include <Windows.h>
//int main()
//{
//	while (1)
//	{
//		malloc(1);  // 一直开辟空间，没有回收。
//		Sleep(1000);
//	}
//	return 0;
//}






// 常见笔试题

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);  // 2.开辟了一块动态内存空间，并没有释放，容易造成内存泄漏。
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);  // 1.函数传参，是拷贝一份到函数的形参，并不会改变str的值，也就是str依旧是NULL指针，后面的字符串复制会产生错误
//	strcpy(str, "hello world");
//	printf(str);
//}

// 修改后
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);   // 动态开辟空间后，把地址赋给指针变量
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str);  //   传入指针的地址，就可以对指针本身进行修改。
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);  // 使用完空间后，释放。str为动态开辟空间的起始地址。
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}



//返回栈空间地址问题。
//char* GetMemory()
//{
//	char p[] = "hello world";   // 修改方法。只需要用static修饰数组即可
//	return p;
//}
//void Test()
//{
//	char* str = NULL;
//	str = GetMemory();  // 虽然str拿到了字符串的地址。但字符串在GetMemory函数结束后就被销毁了，空间释放了。
//	printf(str);   // 打印出现错误。str非法访问。
//}
//int main()
//{
//	Test();
//	return 0;
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test()
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}



//void Test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)  // 虽然str所指向的动态内存开辟空间已经被释放了，但str仍保留了该内存空间地址。
//	{
//		strcpy(str, "world");  //非法访问。强行将str所指向的不属于程序的空间，修改。
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}





// c/c++ 对于内存开辟的方式

// 内存分为：内核空间（用户不能读写，操作系统使用）、栈区（局部变量）、内存映射段（文件映射，动态库，匿名映射）
//   堆区（用于malloc，calloc，realloc动态开辟空间）、数据段（也叫静态区，存放全局变量和静态变量）、代码段（可执行代码，只读常量）

// 1.栈区：在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时这些存储单元自动被释放。栈内存分配运算内置于处理器
//    的指令集中，效率很高，但是分配的内存容量有限。栈区主要存放运行函数而分配的局部变量、函数参数、返回数据、返回地址等。
// 2.堆区：一般由程序员分配释放，若程序员不释放，程序结束时可能由OS回收。分配方式类似于链表
// 3.数据段：也叫静态区。存放全局变量、静态数据。程序结束后由系统释放
// 4.代码段：存放函数体（类成员函数和全局函数）的二进制代码。



