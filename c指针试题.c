#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>
//int main()
//{
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));   //  16
	//printf("%d\n", sizeof(a+0));  // 4
	//printf("%d\n", sizeof(*a));  // 4
	//printf("%d\n", sizeof(a+1)); // 4
	//printf("%d\n", sizeof(a[1])); // 4
	//printf("%d\n", sizeof(&a)); // 4
	//printf("%d\n", sizeof(*&a)); // 16
	//printf("%d\n", sizeof(&a+1)); // 4
	//printf("%d\n", sizeof(&a[0])); // 4
	//printf("%d\n", sizeof(&a[0]+1)); // 4

	//char a[] = "hello";
	//printf("%d\n", sizeof(a));   //  6
	//printf("%d\n", sizeof(a + 0));  // 4
	//printf("%d\n", sizeof(*a));  // 1
	//printf("%d\n", sizeof(a + 1)); // 4
	//printf("%d\n", sizeof(a[1])); // 1
	//printf("%d\n", sizeof(&a)); // 4
	//printf("%d\n", sizeof(*&a)); // 6
	//printf("%d\n", sizeof(&a + 1)); // 4
	//printf("%d\n", sizeof(&a[0])); // 4
	//printf("%d\n", sizeof(&a[0] + 1)); // 4

	//printf("%d\n", strlen(a));  // 5
	//printf("%d\n", strlen(a+0)); // 5
	//printf("%d\n", strlen(*a));  //  
	//// *a表示首元素，也就是传了首元素的ASCII码值。strlen需要传首元素地址，把首元素的ASCII码值 当作地址，非法访问。程序终止
	//printf("%d\n", strlen(a[1])); // a[1]也是一个元素。程序终止
	//printf("%d\n", strlen(&a)); // 5
	//printf("%d\n", strlen(&a+1)); // 数组越界，随机值 
	//printf("%d\n", strlen(&a[0]+1)); // 4 
//	return 0;
//}
//


//int main()
//{
	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));  // 4
	//printf("%d\n", sizeof(p+1)); //4
	//printf("%d\n", sizeof(*p)); //1
	//printf("%d\n", sizeof(p[0])); // 1
	//printf("%d\n", sizeof(&p)); // 4
	//printf("%d\n", sizeof(&p+1)); // 4
	//printf("%d\n", sizeof(&p[0]+1));  // 4

//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));   // 48
//	printf("%d\n", sizeof(a[0][0])); //4
//	printf("%d\n", sizeof(a[0]));   // 16  a[0]表示第一行数组名。数组名大多数情况是首元素地址
//	printf("%d\n", sizeof(a[0]+1));// 4   a[0]+1 表示第一行，第二个元素的地址。
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 
//	printf("%d\n", sizeof(a+1));  // 4
//	printf("%d\n", sizeof(*(a + 1))); // 16
//	printf("%d\n", sizeof(&a[0] + 1)); // 4
//	printf("%d\n", sizeof(*(&a[0] + 1))); // 16
//	printf("%d\n", sizeof(*a));  // 16
//	printf("%d\n", sizeof(a[3])); // 16 
//	// sizeof内部表达式不会参与真实运算。sizeof只是根据类型计算大小。a[3]第四行，也就是16。不回去访问a[3]
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(p - 1));  // 输出2和5
//	return 0;
//}


//struct test
//{
//	int num;
//	char* pc;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}*p;
//// 结构体test的类型变量大小为20字节
//// 假设p的值为0x100000。
//int main()
//{
//	p = (struct test*)0x100000;  // 初始化
//	printf("%p\n", p + 0x1);// 结构体指针加1，跳过一个结构体，地址也就跳过20字节
//	printf("%p\n", (unsigned long)p + 0x1); // 强制类型转化成长整型，然后加1。
//	printf("%p\n", (unsigned int*)p + 0x1); // 强制类型转化成整型指针，加一也就跳过4字节。
//	return 0;
//}



//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };  // 括号里面是逗号表达式。也就是{1,3,5}的意思。数组3行2列，依次初始化。第一行有1和3两个元素
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);  //打印1
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	// 写出数组元素在内存中存储情况。小端存储
//	// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);  // 把数组首元素地址强制类型转化成整数，然后加1。在转化成int*类型指针。得到比原来地址多1的地址
//	printf("%x,%x", p1[-1], *p2);  // %x 以16进制进行打印。 打印4和2000000
//	//第一个打印4。第二个打印2000000。因为int*类型指针解引用向后访问4字节内容，为00 00 00 02，因为是小端存储所以，结果为02 00 00 00
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];  // 数组指针。但只能存数组元素为4的数组的地址
//	p = a; // a为首元素地址也就是a[0]，代表第一行。强行把a的地址赋给p
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);  
//	// p[4][2] 等价于 *(*(p+4)+2)。因为p为数组指针，p+4向后跳4个数组（数组的元素个数为4）的地址。
//	// 因为p指向一个数组，所以解引用后为当前位置数组首元素地址，然后+2，再解引用，得到改位置的数。
//	// &p[4][2] 取出该位置的地址。
//	// &p[4][2] - &a[4][2] 地址相减代表，地址之间的元素个数，因为&p[4][2] 小于 &a[4][2]，所以得到负数。结果为-4
//	// 以%d的形式打印，得到-4。
//	// %p是打印地址，不关心正负，16进制。也就是把-4的补码，看成一个正数，然后转化成16进制数，进行打印
//	return 0;
//}



//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&aa + 1);  //&aa + 1，取出整个数组的地址，然后地址加1，地址跳到数组最后，然后强制类型转换成整型指针
//	int* p2 = (int*)(*(aa)+1); 
//	// aa为首元素地址，也就是第一行数组的地址，解引用表示第一行数组，然后加1表示第一行数组首元素地址加1，最后强制类型转换成整型指针
//	printf("%d,%d", *(p1 - 1), *(p2 - 1));  // 10和1
//	return 0;
//}


//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);   // at
//	return 0;
//}


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };  
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);  // POINT
	printf("%s\n", *--*++cpp+3);  // ER
	printf("%s\n", *cpp[-2]+3); // ST
	printf("%s\n", cpp[-1][-1]+1);// EW
	// 关键在于++cpp是自增，改变了cpp存的地址
	return 0;
}


