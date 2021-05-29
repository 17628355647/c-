#define _CRT_SECURE_NO_WARNINGS 1

// .c文件，通过编译生成 .exe文件（可执行程序，二进制文件）。
//编译具体步骤：先预处理（删除注释之类），然后把源代码转化成汇编语言（会检查语法是否正确），然后把汇编语言转化成二进制语言文件（.obj目标文件），
//   最后一步添加链接生成可执行程序。

// 在ANSI C的任意一种实现中，存在两个不同的环境。翻译环境和执行环境
// 翻译环境：在这个环境中源代码（.c文件）被转换为可执行的机器指令。
// 执行环境：它用于实际执行代码

//#include <stdio.h>
//extern int add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 9;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n%d\n", add(a, b));
//	return 0;
//}



// 一个工程中，有多个源文件。每个源文件都会单独作为一个单元，被编译器进行处理，都会生成一个对应的目标文件(.obj文件)。这一步为编译，依赖编译器
// 所有生成的目标文件都会和链接器捆绑在一起，会生成一个单一而完整的可执行程序。这一步叫链接，依赖链接器
// 链接器同时也会引入标准c函数库中任何被该程序所用到的函数，而且还可以搜索程序员个人的程序库。


//具体步骤：
// 以gcc编译器为例。源文件hello.c

//1.预处理：宏定义展开、头文件展开、条件编译等，同时将代码中的注释删除，这里并不会检查语法。文本操作。
//gcc -E  hello.c -o  hello.i
//文件后缀.i预处理后的c语言文件。
//2.编译：将预处理后文件编译生成汇编文件。把c代码翻译成汇编代码。
//gcc -S  hello.i -o  hello.s
//编译会进行，语法分析（检查语法是否错误）、词法分析（把c语言代码构造成一个词法树）、语义分析（读懂c代码的含义）、符号汇总（把代码中的符号汇总，例如函数名，全局变量）
//文件后缀.s编译后的汇编文件。
//3.汇编：将汇编文件生成目标文件（二进制文件）。汇编代码转化成二进制代码。根据上一步的符号汇总，再形成符号表（符号名和地址）。
//gcc -c  hello.s -o  hello.o
//文件后缀.o编译后的目标文件。
//4.链接：所有生成的目标文件都会和链接器捆绑在一起，会生成一个单一而完整的可执行程序。这一步叫链接，依赖链接器
// 链接器同时也会引入标准c函数库中任何被该程序所用到的函数，而且还可以搜索程序员个人的程序库。
// 具体会：合并段表（目标文件有一定格式，分为几个段。把所有的目标文件对应的段上数据合并在一起）、符号表的合并和符号表的重定位
//gcc  hello.o -o  可执行文件名（自定义）







//  运行环境

// 程序执行的过程：
// 1.程序必须载入内存中。由操作系统的环境，一般由操作系统完成。独立环境中，要手动载入。
// 2.程序的执行便开始。接着便调用main函数。
// 3.开始执行程序代码。这个时候程序将使用一个运行时堆栈，存储函数的局部变量和返回地址。程序同时也可以使用静态内存，存储于静态内存中的变量
// 在程序的整个执行过程中一直保留他们的值。
// 4.终止程序。





// 预处理详解

// 预定义符号

// __FILE__     // 进行编译的源文件  
// __LINE__    //文件当前的行号
// __DATE__    // 文件被编译的日期
// __TIME__   // 文件被编译的时间
// __FUNCTION__  // 函数名
// __STDC__  // 如果编译器遵循ANSI C，其值为1，否则未定义。

//#include <stdio.h>
//#define max 100

//int main()
//{
//	//printf("%s\n", __FILE__);   // 打印当前源文件的名称（加上绝对路径）
//	//printf("%d\n", __LINE__);   // 打印此代码 所在源文件中的行号
//	//printf("%s\n", __DATE__);   // 打印文件被编译日期
//	//printf("%s\n", __TIME__);   // 打印文件被编译的时间
//	//printf("%s\n", __FUNCTION__);  // 打印该处的运行的函数名
//
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* p = fopen("日志.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(p, "文件名：%s  函数名：%s  行号：%d  日期：%s  时间：%s  i=%d\n", __FILE__, __FUNCTION__,__LINE__, __DATE__, __TIME__,i);
//	}
//	fclose(p);
//	p = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




//预处理指令：#define、#include、#pragma、#if、#endif、#line 以及各种#开头的指令

// #define 可以定义标识符，定义宏
//#include <stdio.h>
// 定义标识符
//#define max 100  
//#define STR "hehe"
//#define reg register  // 相当于给关键字重命名
//#define forever for(;;) // 也可以在后面加语句
//int main()
//{
//	printf("%d\n", max);
//	printf("%s\n", STR);
//	return 0;
//}


// #define 定义宏。允许把参数替换到文本中，这种实现成为宏。注意宏的参数不是传参的，而是替换的
//#include <stdio.h>
//#define SQART(x) x*x
//#define add(x,y) x+y
//#define zf(x) x
//int main()
//{
//	/*int a = add(4,5);
//	printf("%d\n", a);*/
//
//	//int a = SQART(5 + 1);
//	//printf("%d\n", a);  // 这里打印11，而不是36。原因在于，把SQART(5+1),替换成了 5+1*5+1 结果当然是11。5+1并不会先运算
//
//	//printf("%s\n", zf("哈哈"));
//	return 0;
//}


//#define double(x) x+x
//#define shuangbei(x) (x+x)
//int main()
//{
//	int a = 5;
//	int ret = 10 * double(5);  // 展开为 10*5+5  结果为55
//	int res = 10 * shuangbei(5);   // 展开为 10*(5+5)  结果为100
//	printf("%d\n", ret);
//	printf("%d\n", res);
//	return 0;
//}

// 提示：用于对数值表达式进行求值的宏定义都应该尽量加上括号，避免使用宏时，由于参数中的操作符或临近操作符之间不可预料的相互作用




//#define 替换规则
// 1.在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先被替换
// 2.替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换
// 3.最后，再次对结果文件进行扫描，看看是否包含任何#define定义的符号。如果是，重复上面步骤

// 注意：1.宏参数和#define定义中可以出现其它#define定义的变量。但是对于宏，不能出现递归
// 2.当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。








// # 和 ##


//#include <stdio.h>
//void dayin(int a)
//{
//	printf("a的值为：%d\n", a);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("a的值是：%d\n", a);
//
//	dayin(a);
//	dayin(b);
//	return 0;
//}
// 怎么把参数名插入字符串中呢？



//#include <stdio.h>
//#define print(x) printf(#x"的值为%d\n",x)   // 在x前加个#号，x不会被参数替换。在传入参数为a时，#x 会变成"a"
//int main()
//{
//	// 两个字符串在一起时，会被当作一个字符串处理
//	/*printf("hello world\n");
//	printf("hello ""world\n");
//	printf("hel""lo ""wor""ld\n");*/
//
//	int a = 10;
//	int b = 2;
//	print(a);  // 被替换成 printf("a""的值为%d\n",a);
//	print(b);
//
//	return 0;
//}





// ## 的作用。##可以把位于它两边的符号合成一个符号。它允许宏定义从分离的文本片段创建标识符。
//#include <stdio.h>
//#define CAT(x,y) x##y
//
//int main()
//{
//	int Class2 = 4;
//	//printf("%d\n", a);
//
//	printf("%d\n", CAT(Class,2));  // 替换成 printf("%d\n",Class2);
//	return 0;
//}





// 带副作用的宏参数。当宏参数在宏的定义中出现超过一次的时候，如果参数带有副作用，那么你在使用这个宏的时候就可能导致不可预测的后果。
// 副作用就是表达式求值的时候出现永久性效果。例如：x+1; 不带副作用。 x++; 带副作用

//int main()
//{
//	int a = 10;
//
//	// 下面两个代码结果都是11。
//	int b = a + 1;   // 但是a的值依旧为10
//	int c = ++a;     // a的值变成11了。这样子就说这样的代码有副作用。
//	return 0;
//}


//#include <stdio.h>
//#define jiaoda(x,y) ((x)>(y)? (x):(y))
//
//int main()
//{
//	int a = 10;
//	int b = 3;
//	// 有副作用的宏参数
//	int c = jiaoda(a++, b++);   // 被替换成  ((a++)>(b++)? (a++):(b++))
//	printf("%d\n", c);  // c的值为11
//	printf("%d %d\n", a, b); // a的值为12，b的值为4
//	return 0;
//}







// 宏和函数的对比
// 宏通常被应用于执行简单的运算。比如找出两个数的最大值
// 那为什么不用函数完成这些简单的运算呢？
// 原因：1.用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需的时间更多。所以宏比函数在程序的规模和速度方面更胜一筹。
//2.更为重要的是函数的参数必须声明特定的类型。所以函数只能在类型合适的表达式上使用。反之宏可以用于整型、长整型、浮点型等多种类型。宏没有类型限制

//宏当然也有缺点：
// 1.每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度
// 2.宏没办法调试
// 3.宏是没有限制类型，所以不够严谨
// 4.宏可能会带来运算符优先级的问题，导致程序容易出现错误



//  宏有个最特殊的地方就是：宏的参数可以为类型，函数不行
//#include <string.h>
//#include <stdio.h>
//#define kpkj(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = kpkj(10, int);  // 使用宏开辟10个整型大小的空间。
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", p[i]);
//	free(p);
//	p = NULL;
//	return 0;
//}



// 一般而言函数的命名不全大写，宏的命名全大写


// #undef 这指令可以移除一个宏定义。
//#define DOUBLE(X) (X+X) 
//#include <stdio.h>
//int main()
//{
//	printf("%d ", DOUBLE(5));
//#undef DOUBLE    // 移除DOUBLE宏定义
//	return 0;
//}




// 命令行定义：允许在命令行中定义符号。用于启动编译过程。
// 以gcc编译器为例，gcc test.c -D sz=10   -D 选项 在命令行中定义sz标识符为10





// 条件编译：在编译一个程序的时候我们如果要将一条语句（或一组语句）编译或者放弃是很方便的。调试的代码，删除可惜，保留又碍事，可以选择性编译

//#include <stdio.h>
//#define DEBUG   // 这里定义了DEBUG 下面的条件编译就执行下面的语句。
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	//  使用#ifdef   #endif   条件编译。如果这里的 DEBUG 被定义过，就执行下面的代码。反之就不执行。
//#ifdef DEBUG   
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}


// 常见的条件编译指令
//1. #if 常量表达式
      // ....
//   #endif

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 0   // 常量表达式为真，就执行下面语句
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}


//2.多个分支的条件编译
//#if 常量表达式
//     .....
//#elif 常量表达式
//     .......
//#else
//    .......
//#endif

//#include <stdio.h>
//int main()
//{
//#if 0
//    printf("哈哈\n");
//#elif 1
//    printf("呵呵\n");
//#else
//    printf("拉拉\n");
//#endif
//    return 0;
//}




//3.判断是否被定义
// 
// 判断symbol被定义了
//#if defined(symbol)
//#ifdef symbol
//
// 判断symbol没有被定义
//#if !defined(symbol)
//#ifndef symbol


//#include <stdio.h>
//
//int main()
//{
////#if !defined(MAX)       // 没有定义MAX标识符，就执行下面的语句
////    printf("MAX");
////#endif
//
//#if defined(MAX)       // 定义MAX标识符，就执行下面的语句
//    printf("MAX");
//#endif
//    return 0;
//}





// 4.嵌套指令
//#if defined(OS)
//    #ifdef OPYION1
//        unix_option1();
//    #endif
//    #ifdef OPTION2
//        unix_option2();
//    #endif
//#elif defined(OE)
//    #ifdef OPTION2
//        msdos_option2();
//    #endif
//#endif





// 文件包含。#include 指令可以使另一个文件被编译。就像另一个文件实际出现一样。
// 这种替换的方式很简单：预处理器先删除这条指令，并用包含文件的内容替换，这样一个源文件，被包含10次，那就实际被编译10次



//#include <stdio.h>  // 尖括号，引库里面的头文件。查找头文件直接去标准路径下查找。速度快
//#include "add.h"  // 双引号，引自己写的头文件。先去源文件所在目录，未找到，再去库函数头文件查找。
//int main()
//{
//    int ret = add(2, 4);
//    printf("ret = %d\n", ret);
//    printf("hehe\n");
//    return 0;
//}



// 在包含头文件时，可能存在嵌套文件包含，一个头文件被包含多次，就会被多次编译。造成代码冗余
//#ifndef __TEST_H__  如果没有定义 __TEST_H__  就执行下面语句
//#define __TEST_H__  然后定义 __TEST_H__ 
//int add(int, int);  声明 函数
//#endif
// 这样子就完美解决了，一个头文件被多次包含，多次编译造成的代码冗余。因为第二次编译就会发现已经定义过了__TEST_H__  下面内容便不会执行
// #pragma once 也可以让多次包含的头文件不在多次编译，只编译一次





// offset 的实现
#include <stdio.h>
//#include <stddef.h>
#define my_offsetof(struct_name,member_name) (int)&(((struct_name*)0)->member_name) 
struct S
{
    char c;
    int a;
    short b;
    int arr[20];
};
int main()
{
    //struct S s;
    // offsetof 计算偏移量
    /*printf("偏移量：%d\n", offsetof(struct S, c));
    printf("偏移量：%d\n", offsetof(struct S, a));
    printf("偏移量：%d\n", offsetof(struct S, b));*/


    // 模拟实现 offsetof 
    printf("偏移量：%d\n", my_offsetof(struct S, c));
    printf("偏移量：%d\n", my_offsetof(struct S, a));
    printf("偏移量：%d\n", my_offsetof(struct S, b));
    printf("偏移量：%d\n", my_offsetof(struct S, arr));
    return 0;
}







