#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 枚举：就是把可能的值一一列举

// 枚举类型定义。使用关键字enum来定义
//enum Day  // 枚举类型
//{
//	// 枚举的可能取值。枚举常量
//	星期一,星期二,星期三,星期四,星期五,星期六,星期天
//};
//enum sex
//{
//	male,female,secret
////  0     1       2
//};
//// 枚举常量默认值从0开始，逐渐递增。当然也可以在创建时手动的赋初值。
//enum color
//{
//	RED = 4,GREEN=6,BLUE = 9
//};
//int main()
//{
//	//enum sex s = male;  // s这个枚举类型的变量，只能赋枚举类型里面的值
//	//enum Day d = 星期一;
//	printf("%d %d %d\n", male, female, secret); // 0 1 2
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	return 0;
//}


// 枚举优点：
//		1.增加代码可读性和可维护性
//		2.和#define定义的标识符相比，枚举有类型检查，更加严谨
//		3.防止了命名污染
//		4.便于调试
//		5.使用方便，一次可以定义多个常量。



// 联合类型。也叫共用体类型
// 联合也是一种特殊的自定义类型。这种类型定义的变量也包含一系列成员，特征是这些成员共用同一块空间
// 联合体所占空间大小，至少为最大成员的大小。
//union Un  // 使用union关键字定义联合类型
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));  // 4
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));  // 地址都一样
//
//	return 0;
//}


// 判断机器的大小端
//union Un
//{
//	char c;
//	int a;
//};
//int main()
//{
//	/*int a = 0x11223344;
//	char* p = (char*)&a;
//	if (*p == 0x11)
//	{
//		printf("机器为大端存储");
//	}
//	else if (*p == 0x44)
//	{
//		printf("机器为小端存储");
//	}*/
//
//	// 利用联合体
//	union Un u;
//	u.a = 1;
//	//printf("%d\n", u.c);
//	if (1 == u.c)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}


// 枚举类型变量大小，就是一个整型int的大小
//enum sex 
//{
//	男,女,保密
//};
//int main()
//{
//	enum sex s = 男;
//	printf("%d\n", sizeof(s)); // 4字节
//	return 0;
//}


// 联合体的大小至少是最大成员的大小。当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
union Un
{
	int a;  // 对齐数4
	char arr[5];// 对齐数1
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));  // 8字节

	return 0;
}