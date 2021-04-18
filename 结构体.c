#define _CRT_SECURE_NO_WARNINGS 1

// 结构体：结构体是一些值的集合，这些值称为成员变量。结构体的每个成员可以是不同类型的变量

// 定义一个学生的结构体类型。struct结构体关键字，student结构体标签(结构体类型名)，struct stduent结构体类型
//struct student
//{
//	// 成员变量
//	char name[10];
//	int age;
//	char phone[12];
//	char sex[5];
//}s1,s2,s3;  // s1,s2,s3是三个全局结构体变量
//typedef struct student  // typedef 重命名。给这个struct student重命名位stu
//{
//	// 成员变量
//	char name[10];
//	int age;
//	char phone[12];
//	char sex[5];
//}stu;    // stu重命名后的名字
//int main()
//{
//	//struct student xiaoming; // 创建结构体变量xiaoming，局部变量
//	//stu zhanghua;  // 重命名后，更加简洁的创建变量
//	stu xiaoming = { "小明",12,"12345678945","男" };  // 初始化结构体变量
//	return 0;
//}


// 结构体成员可以是标量、数组、指针、甚至是其它结构体。

//结构体变量的定义和初始化

//struct cheshi
//{
//	int x;
//	int y;
//}p1;   // 声明类型的同时定义变量p1
//struct cheshi p2; // 定义结构体变量p2
//struct cheshi p3 = {5,6}; // 初始化：定义变量的同时赋值

//#include <stdio.h>
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct t
//{
//	char ch[10];
//	struct s s1;  // 结构体中包含结构体变量
//	char* pc;
//};
//int main()
//{
//	char a = 'a';
//	struct t t1 = { "hello",{4,'h',"加油！哈哈",5.241},&a };  // 初始化结构体变量t1
//	printf("%s\n", t1.ch);  // 打印结构体变量中成员
//	printf("%d\n", t1.s1.a);   // 打印结构体中嵌套的结构体成员
//	printf("%p\n", t1.pc);   
//	return 0;
//}



// 结构体变量访问成员，是通过点操作符（.）访问。
// 当结构体指针访问指向变量的成员，有时候我们得到的不是一个结构体变量，而是指向一个结构体的指针。通过->箭头访问

//#include <stdio.h>
//typedef struct stu
//{
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu s)  // 创建函数打印结构体变量内容。
//{
//	printf("name:%s\n", s.name);
//	printf("age:%d\n", s.age);
//	printf("tele:%s\n", s.tele);
//	printf("sex:%s\n", s.sex);
//}
//void print2(stu* p)
//{
//	printf("name:%s\n", p->name);  // 传入地址的话，就用箭头->直接指向要访问的成员
//	printf("age:%d\n", p->age);
//	printf("tele:%s\n", p->tele);
//	printf("sex:%s\n", p->sex);
//}
//int main()
//{
//	stu s = { "小明",18,"13345784267","男" };  // 初始化结构体变量
//	print1(s);
//	print2(&s);  // 传入s的地址。这样子更好，占用内存空间更少
//	return 0;
//}
// 结构体在传参的时候，传入结构体地址更好。因为函数传参时，参数是需要压栈的，
// 如果一个结构体对象过大，参数压栈的系统开销比较大，导致性能下降

// 栈是一种数据结构。往栈上插入数据叫压栈。往栈上删除数据叫出栈。因为往栈上存数据，只能从栈顶一层一层的存。
// 释放数据的时候，也是从栈顶一层一层释放。因此栈的特点是先进去后出，后进先出。

// 内存分为：栈区、堆区、静态区
// 栈区用于存放局部变量，函数的形式参数，函数调用
// 堆区用于动态内存分配，比如malloc，free，realloc，calloc这些函数
// 静态区用于存放 全局变量，静态变量等。