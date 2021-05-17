#define _CRT_SECURE_NO_WARNINGS 1

// 柔性数组。C99标准中，结构体中的最后一个元素允许是未知大小的数组，这就叫柔性数组成员

#include <stdio.h>
#include <stdlib.h>
//struct S
//{
//	int n;
//	int arr[];  // 未知大小的数组。柔性数组。也可写作 int arr[0];
//	// 数组的大小是可以调整的。
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));  // 4字节。结构体在计算大小时，不包含柔性数组成员。
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* p = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//	if (p != NULL)
//	{
//		ps = p;
//		// 然后使用
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};
int main()
{
	struct S s;
	s.arr = (int*)malloc(10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(s.arr + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(s.arr + i));
	}
	int* p= (int*)realloc(s.arr, 20 * sizeof(int));  // 调整
	if (p != NULL)
	{
		s.arr = p;
	}
	free(s.arr);
	s.arr = NULL;
}



// 柔性数组的特点：
// 1.结构体的柔性数组成员前面必须至少一个其他成员。
// 2.sizeof返回的这种结构体大小不包括柔性数组的内存
// 3.包含柔性数组成员的结构体 用malloc函数进行内存的动态分配，并且分配的内存应该大于结构体的大小。

// 柔性数组好处：1.方便内存释放。2.有利于访问速度，减少内存碎片。