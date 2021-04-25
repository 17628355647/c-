#define _CRT_SECURE_NO_WARNINGS 1

// #include <stdio.h>

// 指针进阶：
// 1.字符指针。2.数组指针。3.指针数组。4.数组传参和指针传参。5.函数指针。6.函数指针数组。7.指向函数指针数组的指针
//  8.回调函数。9.指针和数组面试题解析。


// 1.字符指针
//int main()
//{
	/*char a = 'a';
	char* p = &a;*/

	//char arr[] = "abcdef";
	//char* p = arr;
	//// 两种打印方式一样。因为数组名就是首元素地址
	//printf("%s\n", p);
	//printf("%s\n", arr);

	//char* pc = "abcdefg";  // "abcdefg" 是一个常量字符串。这个表达式的意思是，把首元素（a）的地址赋给pc
	//printf("%s\n", pc);  // 打印整个字符串
	//printf("%c\n", *pc);  // 打印a。
	// *pc = 'w';  编译错误。因为"abcdefg" 是一个常量字符串，所以不能修改。
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//if (arr1 == arr2)  // arr1和arr2，数组名，是首元素地址。两个数组存储的地址，显然不同。故打印 haha
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//
//	if (p1 == p2)    
// 因为"abcdef"是常量字符串，不能被修改。p1，和p2都指向一样的字符串，内存中就没有必要，存两份一样的字符串。所以p1和p2指向同一个常量字符串
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


// 2.指针数组。指针数组是一个存放指针的数组

//int main()
//{
//	//int arr[10] = {0}; // 整型数组
//	//char arr2[5] = { 0 }; // 字符数组
//	//int* parr[5];  // 存放整型指针的数组
//	//char* pch[5];  // 存放字符指针的数组
//
//
//	int a = 10, b = 20, c = 30, d = 40;
//	int* p[4] = { &a,&b,&c,&d };  // 用指针数组存放地址。
//	// printf("%p\n", p[1]);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		//printf("%p\n", p[i]);  // 依次打印指针数组中的地址
//		//printf("%d\n", *(p[i]));  // 依次打印abcd
//		printf("%d的地址是%p\n", *(p[i]), p[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 5,6,7,8 };
//	int arr3[] = { 9,10,11,12 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//			//parr[i]++;
//		}
//		printf("\n");
//	}
//	return 0;
//}



//  3.数组指针。能够指向数组的指针。

//int main()
//{
//	//int* p = NULL;  // p整型指针，指向整型的指针，存放整型的地址
//	//char* pc = NULL; // pc字符指针，指向字符的指针，存放字符的地址
//	// 数组指针，指向数组的指针，存放数组的地址
//
//	//int arr[10] = { 0 };
//	// arr数组名，首元素地址
//	// &arr[0] 首元素地址
//	// &arr 数组的地址
//
//	//int arr[5] = { 1,2,3,4,5 };
//	//int(*p)[5] = &arr;  // 存放数组arr的地址，称为数组指针。int [5]表示整型数组，成员为5个。(*p)表示存放地址
//	// p就是数组指针。
//
//	char arr[7] = "abcdef";
//	char(*p)[7] = &arr; // 把数组arr的地址，存入数组指针变量p中
//	return 0;
//}

//int* p1[10];  //这表示指针数组，因为[]的结合性大于*，先与p1结合，表示为一个数组，存放指针的数组
//int(*p2)[10]; // 这表示数组指针，用括号(*p2)，使*与p2结合，表示一个指针，后面[10]表示存放 数组成员为10 的指针



//int main()
//{
	//char* arr[5]; // 字符指针数组
	// 存放字符指针数组的 数组指针
	//char* (*pa)[5] = &arr;
	//(*pa)中pa是指针变量名，*是表明pa是指针。char* 表示指针指向的类型是char* 。[5]表示指针指向的是数组，数组有5个元素
	//printf("%p", pa);

	/*int* arr[10] = {NULL};
	int* (*p)[10] = &arr;
	printf("%p ", p);*/

	//int arr1[5] = { 0 };
	//int arr2[5] = { 0 };
	//int* p1[2] = { &arr1, &arr2 };  // 指针数组,存放指针的数组
	//int(*parr1)[5] = &arr1; // 数组指针，存放数组地址的指针
	//int* (*p2)[2] = &p1;  // 数组指针，存放 指针数组的地址的指针
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)  // 打印数组内容，用数组指针
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));  // *pa就相当于arr
//	}
//	return 0;
//}


//       数组指针用法,一般用于二维数组以上
//void dy_sz1(int arr[3][5], int hang, int lie) //打印二维数组,方法一 。参数是数组形式
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void dy_sz2(int(*arr)[5], int hang, int lie)  // 参数是数组指针形式
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//			// printf("%d ", (*(arr + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	dy_sz1(arr,3,5);  // 打印二维数组。
//	// arr首元素地址，首元素为 {1,2,3,4,5} 第二个元素为{2,3,4,5,6} 第三个元素为{3,4,5,6,7}。
//	// 也就是说arr为{1,2,3,4,5}的地址
//	
//	// 另外一种版本
//	dy_sz2(arr, 3, 5);
//	return 0;
//}


// int(*parr[10])[5]; // parr是一个数组，数组成员有10个。每一个成员是一个数组指针，所指向的数组为整型且5个成员的数组。
// int(*parr[9])[4]; 创建一个数组parr，成员9个，每个成员为数组指针，每个成员指向一个成员为4的整型数组
// char(*parr[5])[14];



//    4.数组传参、指针参数

//   一维数组传参
//void test1(int arr[])
//{
//	//  这样子传参可以
//}
//void test1(int arr[10])
//{
//	//  这样子传参可以
//}
//void test1(int* arr)
//{
//	//  这样子传参可以
//}
//void test2(int* arr[10])
//{
//	//  这样子传参可以
//}
//void test2(int** arr)
//{
//	//  这样子传参可以
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* parr[10] = { 0 };
//	test1(arr);
//	test2(parr);
//	return 0;
//}


// 二维数组传参

//void test(int arr[3][5])
//{
//	// 这样子传参可以
//}
//void test(int arr[][5])
//{
//	// 这样子传参可以。省略行，但不能省略列
//}
//void test(int(*arr)[5])  // 二级数组的首元素地址，是表示第一行的数组。存放数组的地址，用数组指针。
//{
//	// 这样子传参可以
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr); //二维数组传参
//	return 0;
//}
// 二维数组传参，函数形参的设计只能省略第一个[]的数字。因为对一个二维数组，可以不知道有多少行，但必须知道一行多少元素。这样子方便运算



//  1级指针传参
//#include <stdio.h>
//void dayin(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* parr = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	dayin(parr, sz);
//	return 0;
//}

// 2级指针传参

//void test(int** p)
//{
//	printf("%d ", **p);
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	int** p2 = &p1;
//	test(p2);
//	test(&p1);
//	int* arr[10];
//	test(arr); // 也 ok
//	return 0;
//}


//   函数指针。指向函数的指针。也就是存放函数地址的指针

//#include <stdio.h>
//void test()
//{
//	printf("呵呵\n");
//}
//int sum(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", test);   // 打印函数的地址
//	printf("%p\n", &test);  // 打印函数的地址
//	return 0;
//}
// 上面代码我们看出，&函数名 和 函数名 都代表函数的地址

// 如何存放函数的地址呢？
//int main()
//{
//	void (*p)() = test;    // 用函数指针变量，存放函数的地址
//	int(*psum)(int, int) = sum;   // 用函数指针变量，存放函数的地址
//
//	// 用函数指针，使用函数
//	(*p)();
//	printf("%d ", (*psum)(5, 3));  // *加函数指针名，括起来。后面在传入参数即可
//	return 0;
//}


// (*(void(*)())0)();
// void(*)()是一个函数指针类型，放入括号中 (void(*)()) 表示强制类型转换。
// (void(*)())0 把整数0的类型强制转换成函数指针类型。把0当成函数地址。
//  然后*解引用调用0地址处的函数。(*(void(*)())0)()。
//  总的来说这代码的意思是，把0强制转换成一个，返回值为空 无参数的函数 指针类型。
//    然后*解引用，访问地址为0处的返回值为空 无参数的函数。
// 
// 
// void (*signal(int, void(*)(int)))(int);
//  函数名为signal，有两个参数，一个是整型int，另一个是函数指针类型void(*)(int),
//  把函数名和参数去掉，剩下的表示函数的返回类型。void (*) (int)表示函数指针类型，所以函数signal的返回类型是函数指针。
// 总的来说这是在声明一个函数，函数名signal，函数参数为int整型和void(*)(int)函数指针类型。返回类型是函数指针void (*) (int)
// void (*signal(int x, void(*p)(int a)))(int z)
// 但是那样写太繁琐了，简化一下
//typedef void(*pfun_t)(int);  // 把void (*) (int)函数指针类型，重名名为pfun_t
//pfun_t signal(int, pfun_t);  // 简化完成


//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int, int) = add;
//	printf("%d \n", (p)(5, 9));  // 直接通过地址调用
//	printf("%d \n", (*p)(5, 9));  // 解引用后调用
//	printf("%d \n", (**p)(5, 9)); // 多颗*也没有作用
//	printf("%d \n", (***p)(5, 9));
//	// 上面代码看出，打印四次的结果都一样。
//	return 0;
//}



//  函数指针数组。存放函数指针的数组。也就是这个数组里面存的都是函数的地址

//#include <stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*padd)(int, int) = add;   // 存放函数的地址。函数指针
//	int(*p[4])(int, int) = { add,sub,mul,div };  // 创建函数指针数组，存放4个函数地址
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p ", p[i]);  // 打印数组内容
//		printf("%d\n", p[i](10, 5));  // 依次调用数组中函数
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//// 写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*, const char*) = my_strcpy;
//// 写一个函数指针数组，存放4个my_strcpy函数地址
//char* (*pfarr[4])(char*, const char*) = {my_strcpy};




// 函数指针数组用途：转移表。
// 例子：计算器
//#include <stdio.h>
//void menu()
//{
//	printf("***************************************\n");
//	printf("**********-欢迎使用计算器**************\n");
//	printf("*********-1.加法    2.减法*************\n");
//	printf("**********3.乘法    4.除法*************\n");
//	printf("**********     0.退出     *************\n");
//	printf("***************************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入要计算的两个数：");
//	scanf("%d%d", &x, &y);
//	return p(x, y);
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = calc(add);  //  回调函数
//			printf("结果为：%d\n", ret);
//			break;
//		case 2:
//			ret = calc(sub);
//			printf("结果为：%d\n", ret);
//			break;
//		case 3:
//			ret = calc(mul);
//			printf("结果为：%d\n", ret);
//			break;
//		case 4:
//			ret=calc(div);
//			printf("结果为：%d\n", ret);
//			break;
//		case 0:
//			printf("程序退出！\n");
//			break;
//		default:
//			printf("请输入正确的值\n");
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[5])(int, int) = { 0,add,sub,mul,div };  // 用函数指针数组
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入要计算的数字：");
//			scanf("%d%d", &x, &y);
//			printf("结果为：%d\n", pfarr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("程序结束\n");
//		}
//		else
//			printf("选择错误！\n");
//	} while (input);
//	return 0;
//}


// 指向函数指针数组的 指针。
// 一个指针指向一个数组，这个数组的元素都是函数指针

//#include <stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*parr[])(int, int) = { add,sub };  // 函数指针数组
//	int(*(*p)[])(int, int) = &parr; // 指向函数指针数组的指针
//	// p是一个数组指针，指向一个数组，数组里面的成员为 函数指针类型。
//	return 0;
//}




// 回调函数
// 回调函数就是通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时。
// 我们就说这是回调函数。回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件，
// 或条件进行响应。

//  说白了就是把 函数地址 作为一个函数的参数。通过函数地址去调用另一个函数，被调用的函数被称为回调函数。

//void dayin(char* str)
//{
//	printf("哈哈：%s", str);
//}
//void test(void(*p)(char*))
//{
//	p("大家好");  // 通过函数地址，调用函数
//}
//int main()
//{
//	test(dayin);
//	return 0;
//}



// 冒泡排序
#include <stdio.h>

//void paixv(int arr[], int sz)  // 冒泡排序，但只能排序整型。
//{
//	for (int j = 0; j < sz-1; j++)
//	{
//		int i = 0;
//		for (i = 0; i < sz -1-j; i++)
//		{
//			int tmp = 0;
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,54,6,4,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	paixv(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	struct stu s[3] = { {"李明",12},{"张华",18},{"赵强",9} };  // 结构体数组
//	return 0;
//}




//   介绍  void*指针
//int main()
//{
//	int a = 10;
//	//int* pa = &a;  // a为整型，所以接受a的指针为int*类型
//	//char* pc = &a; // 用char* 类型指针 可以接受a的地址，但该指针只能访问1字节内容
//
//	// void* 类型的指针，可以接受任意类型的地址。void 意为无，空，没有类型限制。void* 可以接受任意类型的指针
//	void* pv = &a;
//	// *pv = 8;    //  void* 类型的指针不能进行解引用。因为不知道类型，也就不知道访问多少内存空间。
//	// 当然也不能pv++。void*类型的指针也不能进行加减运算
//	return 0;
//}





//   qsort函数可以排序整型数组，结构体数组，浮点型数组等等各种数组
// #include <stdlib.h>
//struct stu
//{
//	char name[10];
//	int age;
//};
//int zsbj(const void* e1, const void* e2) // 比较整数大小
//{
//	// void* 类型指针不能解引用。但可以强制类型转化，然后解引用 *(int*)e1。毕竟我们知道这个函数是比较整数的。
//	return (*(int*)e1 - *(int*)e2);  // e1大于e2返回大于0的数，e1小于e2返回小于0的数，e1等于e2返回0。
//}
//int fdsbj(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//int jgtbj(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//int main()
//{
//	/*int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), zsbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//
//	// 排浮点数大小
//	/*float f[] = {6.2,4.2,9.4,7.1,1.2,4.1,5.4,1.9,3.7};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), fdsbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f   ", f[i]);
//	}*/
//
//
//	// 排序结构体内部成员大小
//	struct stu s[3] = { {"李明",12},{"张华",18},{"赵强",9} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]),jgtbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//		printf("%d ", s[i].age);
//		printf("\n");
//	}
//	return 0;
//}


//  写一个自己的qsort函数。
//void jiaohuan(char* c1,char* c2,int szd)
//{
//	for (int i = 0; i < szd; i++)
//	{
//		char tmp = 0;
//		tmp = *(c1+i);
//		*(c1+i) = *(c2+i);
//		*(c2+i) = tmp;
//	}
//}
//void my_qsort(void* base, int sz, int szd, int(*p)(const void*, const void*))
//{
//	// base数组首元素地址。sz数组大小。szd数组一个元素大小。int(*p)(const void* e1, const void* e2)所需调用比较函数的地址
//	for (int i = 0; i < sz - 1; i++) // 比较的趟数
//	{
//		for (int j = 0; j < sz - 1 - i; j++) // 每趟，两元素的比较
//		{
//			// base 是没有类型的地址，不能解引用。强制类型转换为访问一个字节的char*，然后加上szd每个元素的大小。
//			// 就传入了数组两相邻元素的地址了。
//			if (p((char*)base + j*szd,(char*)base + (j+1) * szd) > 0)  
//			{
//				jiaohuan((char*)base + j * szd, (char*)base + (j + 1) * szd,szd);  // 交换
//			}
//		}
//	}
//}
//int main()
//{
//	/*float f[] = { 1.2,5.2,7.1,3.1,2.4,6.3,9.2,8.4 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	my_qsort(f, sz, sizeof(f[0]), fdsbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}*/
//
//	struct stu s[3] = { {"李明",12},{"张华",18},{"赵强",9} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(s[0]),jgtbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//		printf("%d ", s[i].age);
//		printf("\n");
//	}
//	return 0;
//}


