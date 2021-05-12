#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 结构体是一些值的集合，这些值称为成员变量。结构体的每个成员可以是不同类型的变量。

// 结构体的声明
//struct tag
//{
//	成员列表;
//};

// 声明一个学生的结构体类型。然后可以用这个类型，创建一个结构体变量
//struct students
//{
//	char name[10];
//	int age;
//	char tle[12];
//	char sex[10];
//}s1,s2,s3;  // 定义结构体类型后，立刻创建结构体变量s1,s2,s3，这三个变量为全局变量。
//struct  // 匿名结构体类型
//{
//	int a;
//	int b;
//}x; // 匿名结构体类型要创建变量，只能在这创建。
//struct
//{
//	int a;
//	char c;
//}*p;  // 匿名结构体指针类型
//int main()
//{
//	struct students zhangsan = { "张三",24,"1234567890","男" };    // 创建一个结构体变量
//	
//	return 0;
//}


// 结构体的自引用
//struct Node
//{
//	int date; // 数据域
//	struct Node *next; // 指针域
//};


// 用typedef 重命名结构体
//typedef struct stu
//{
//	char name[10];
//	int age;
//}students;   // 把结构体类型名struct stu，重名名为students
//int main()
//{
//	students zhangsan = { "张三",10 }; // 结构体变量定义
//	return 0;
//}


// 结构体初始化
//struct t
//{
//	char name[10];
//	double x;
//};
//struct s
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//	struct t t1;
//};
//int main()
//{
//	struct s s1 = { 'c',1,5.12,"hello",{"哈哈",3.14} };
//	printf("%c %d %lf %s", s1.c, s1.a, s1.d, s1.arr);
//	
//	return 0;
//}



// 结构体内存对齐。计算结构体大小
// 结构体内存对齐规则：
// 1.第一个成员在与结构体变量偏移量为0的地址处。
// 2.其它成员变量要对其某个数字（对齐数）的整数倍的地址处。
// 对齐数等于编译器默认的一个对齐数与该成员大小的较小值。
// vs编译器下，默认为8。gcc编译器没有默认对齐数
// 3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
// 4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//   结构体的整体大小就是所有最大对齐数（含嵌套结构的对齐数）的整数倍。
//struct S1
//{
//	char c;
//	int a;
//	char x;
//};
//struct S2
//{
//	char c;
//	char x;
//	int a;
//};
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	/*struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };*/
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	//printf("%d\n", sizeof(s1));  // 12
//	//printf("%d\n", sizeof(s2)); //  8
//	printf("%d\n", sizeof(s3)); //16
//	printf("%d\n", sizeof(s4)); // 32
//	return 0;
//}


// 为什么存在内存对齐？
// 1.平台原因（移植原因）：不是所有的硬件平台都能访问任意地址上的任意数据；
//  某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
// 2.性能原因：数据结构（尤其是栈）应该尽可能地在自然边界上对齐。
//   原因在于为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问
// 结构体的内存对齐是拿空间换性能。


// 设计结构体时，应该让占用空间小的成员尽量集中在一起。这样子满足了对齐，也节约了空间。


// 修改默认对齐数。
// 预处理指令 #pragma。可以改变我们的默认对齐数。
//#pragma pack(4)  // 设置默认对齐数为4
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()  // 取消设置的默认对齐数
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



// offsetof 计算结构体中某变量相当于首地址的偏移量。
//#include <stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	double d;
//};
//void Init(struct S* p) // 结构体传参，传地址最好
//{
//	p->c1 = 'c';
//	p->a = 100;
//	p->d = 5.20;
//}
//int main()
//{
//	/*printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, d));*/
//	struct S s = {0};
//	Init(&s); // 对结构体变量s进行初始化。
//	printf("%c %d %lf\n", s.c1, s.a, s.d);
//	return 0;
//}



// 位段：位段的声明和结构体类似。但有两个不同：1.位段成员必须是整型类型。2.位段的成员名后边有一个冒号和一个数字。
// 位段的内存分配：位段的空间上是按照需要以4个字节（int）或者1字节（char）的方式来开辟的。
// 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序要避免使用位段
//struct A
//{
//	// 冒号后面的数字表示，所占空间大小，单位比特位。
//	int a : 2;  // a占2个比特位
//	int b : 5;  // b占5个比特位
//	int c : 10;
//	int d : 30;
//	// 数字的大小必须小于类型的大小，比如int类型，32个比特位大小。数字就必须小于32
//};
// A 就是一个位段。
//int main()
//{
//	struct A a1;
//	printf("%d\n", sizeof(a1)); // 8字节
//// 位段所占空间大小。是根据位段的成员来分配的。
////成员都是int类型，就依次给32比特位大小，成员依次填入，分配内存不够时，剩下的就浪费掉，再分配32比特位大小
//	return 0;
//}
// 位段能够很好的节省空间。
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	//printf("%d\n", sizeof(s));
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

// 位段的跨平台问题：
// 1.int位段被当成有符号数还是无符号数不确定
// 2.位段中最大位的数目不能确定（例如int类型的大小，在16位机器和32位机器上面不同）
// 3.位段中成员在内存中从左向右分配，还是从右向左分配，每个机器不同。
// 4.当结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余位时，是舍弃剩余位，还是利用，这是不确定的。

// 位段比结构体更节约空间，但不能跨平台。

// 位段应用：用于网络传输，让数据包更小。