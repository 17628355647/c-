#define _CRT_SECURE_NO_WARNINGS 1

// 字符分类函数：
// 函数           如果他的参数符合下列条件就返回真
// iscntrl        判断是否为控制字符
// isspace        判断是否为空白字符
// isdigit        判断是否为十进制数字字符
// isxdigit       判断是否为16进制数字字符
// islower        判断是否为小写字母
// issupper       判断是否为大写字母
// isalpha        判断是否为字母
// isalnum        判断是否为字母或数字字符
// ispunct        判断是否为标点符号
// isgraph        判断是否为图形字符
// isprint        判断是否为可打印字符

//#include <stdio.h>
//#include <ctype.h>

//int main()
//{
//	char ch = '5';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}


// 字符转换函数。tolower函数，转小写。toupper函数，转大写。

//int main()
//{
//	char ch = toupper('a');
//	printf("%c", ch);
//}
//#include <string.h>
//int main()
//{
//	char ch[] = "I AM A StudeNT";
//	int sz = strlen(ch);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if(isupper(ch[i]))
//			ch[i] = tolower(ch[i]);
//	}
//	printf("%s\n", ch);
//	return 0;
//}




// memcpy函数。内存拷贝
// void* memcpy(void* des,const void* src,unsigned int num);
// 函数memcpy从src的位置开始向后复制num个字节的数据到des的内存位置。
// 这个函数在遇到 '\0' 的时候并不会停下来。
// 如果src和des有任何的重叠，复制的结果都是未定义的。

#include <stdio.h>
#include <assert.h>
//struct s
//{
//	char name[10];
//	int age;
//};
//
//void* my_memcpy(void* des, const void* src, unsigned int num)
//{
//	assert(des && src);
//	char* p1 = (char*)des;
//	char* p2 = (char*)src;
//	while (num)
//	{
//		*p1++ = *p2++;
//		num--;
//	}
//	return des;
//}
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//struct s stu[] = { { "李华",14 },{"张三",20} };
//	//struct s st[3] = { 0 };
//
//	//memcpy(st, stu, sizeof(stu));  // 拷贝结构体
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(st, stu, sizeof(stu));
//	return 0;
//}



// memmove函数，处理内存重叠的情况。在一个数组里面，[1,2,3,4,5,6]，把后四项拷贝到前四项，这种内存重叠的拷贝
// void* memmove(void* dest,const void* src,size_t count);
#include <memory.h>
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest && src);
//	char* p1 = (char*)dest;
//	char* p2 = (char*)src;
//	if (p1 > p2)
//	{
//		p1 += (count-1);
//		p2 += (count-1);
//		while (count)
//		{
//			*p1-- = *p2--;
//			count--;
//		}
//	}
//	else
//	{
//		while (count)
//		{
//			*p1++ = *p2++;
//			count--;
//		}
//	}
//	return dest;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//memmove(arr, arr+2, 16);
//
//	my_memmove(arr+4, arr+2, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// memcmp 内存比较
// int memcmp(const void* p1,const void* p2,size_t num);
// 比较从p1和p2指针开始的num个字节
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,6,7 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}



// memset内存设置函数。
// void* memset(void* dest, int c, size_t count);
// 把dest所指向的空间，设置成count字节个字符c
int main()
{
	char arr[10] = { 0 };
	memset(arr, '*', 10);
	return 0;
}