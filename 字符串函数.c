#define _CRT_SECURE_NO_WARNINGS 1

//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
// c语言中对字符和字符串的处理很频繁。字符串通常放在 常量字符串 或者 字符数组中。
// 常量字符串 适用于那些对它不做修改的字符串函数。

// strlen 函数。求字符串长度。
// unsigned int strlen (const char* str);
// 字符串以 '\0' 为结束标志，strlen函数返回的是在 '\0' 前面出现的字符个数（不包括 '\0'）
// 参数指向的字符串必须以 '\0' 结束
// 注意函数的返回值为 unsigned int 是无符号的（易错）

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

// 模拟实现strlen函数
//unsigned int my_strlen(const char* str)  // 计数器法
//{
//	assert(str != NULL);
//	unsigned int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char* str) // 递归法，不创建临时变量
//{
//	assert(str != NULL);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str+1);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}



// strcpy 函数 。字符串拷贝
// char* strcpy(char* destination,const char* source);  把source中字符串拷贝到destination中
// 源字符source 必须以 '\0' 结尾。不然循环不停止。程序崩溃。
// 会将源字符中 '\0' 也拷贝到目标空间中。
// 目标空间必须足够大，以确保能存放源字符串
// 目标空间必须可变。


//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* p = str1;
//	// 拷贝str2指向的字符内容到str1指向的字符内容中，包括'\0'
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return p;  // 返回目的空间的起始地址。
//}
//int main()
//{
//	char zf1[] = "hello world";
//	char zf2[] = "I love you";
//	/*strcpy(zf1, zf2);
//	printf("%s\n", zf1);*/
//
//	printf("拷贝前：%s\n", zf1);
//	my_strcpy(zf1, zf2);
//	printf("拷贝后：%s\n", zf1);
//	return 0;
//}




// strcat函数。字符串追加。在一个字符串后面，追加一个函数。
// char* strcat(char* destination,const char* source);
// 源字符必须以 '\0'结束
// 目标空间必须足够大，能容纳下源字符串的内容。目标字符串也必须有'\0'结尾
// 目标空间必须可改变。
// 字符串不可以自己给自己追加。因为 '\0'被覆盖了。

//char* my_strcat(char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* ret = p1;
//	while (*p1)  // 找出 '\0'位置
//	{
//		p1++;
//	}
//	while (*p1++ = *p2++)  
//	{
//		// 把p2所指向字符的内容，从p1中'\0'开始，追加到p1所指向的字符。p1中'\0'会被p2的首元素覆盖。当然p2中'\0'也会追加到p1中
//		;
//	}
//	return ret;  // 返回p1所指向字符的首元素地址
//}
//int main()
//{
//	char arr[30] = "abcde";
//	char* p = "fghi";
//
//	/*strcat(arr, p);
//	printf("%s\n", arr);*/
//
//	my_strcat(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}




// strcmp 函数。字符串比较。两个字符串，对应字符的ASCII码值。
// int strcmp(const char* str1,const char* str2);
// 第一个字符串大于第二个字符串，则返回大于0的数
// 第一个字符串等于第二个字符串，则返回0
// 第一个字符串小于第二个字符串，则返回小于0的数

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		str1++;
//		str2++;
//		if ((*str1 == '\0') && (*str2 == '\0'))
//			return 0;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abcde";
//	
//	//int ret = strcmp(arr1, arr2);
//
//	int ret = my_strcmp(arr1, arr2); // 模拟实现自己的 字符串比较函数
//
//	if (ret > 0)
//		printf("第一个字符串 大于 第二个字符串\n");
//	else if(ret == 0)
//		printf("第一个字符串 等于 第二个字符串\n");
//	else
//		printf("第一个字符串 小于 第二个字符串\n");
//	return 0;
//}




// strcpy,strcat,strcmp这三个函数，不受字符串长度限制。只会在遇到'\0'才停止。
// strncpy,strncat,strncmp。这三个函数，受字符串长度限制。
// strncpy，可以设置拷贝几个字符。strncat可以设置追加几个字符。strncmp可以设置比较几个字符

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>

// strncpy
// char* strncpy(char* dest,char* src,unsigned int count);  count 表示要拷贝多少个字节
// 如果count大于源字符中长度，则拷贝完源字符串后，会在目标后面追加'\0' 直到count个

//char* my_strncpy(char* dest, const char* src, unsigned int count)
//{
//	assert(dest && src);
//	unsigned int i = 0;
//	for (i = 0; i < count; i++)  // 设置拷贝个数
//	{
//		if (*src == '\0')  // 源字符串小于要拷贝的个数，用'\0'代替
//		{
//			*(dest + i) = '\0';
//		}
//		else
//			*(dest+i) = *src++; 
//	}
//	return dest;  // 返回目标地址
//}
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[] = "he";
//
//	/*strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);*/
//
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}


// strncat。可以设置在目标字符串后面，追加多少个源字符串的内容。
// char* strncat(char* dest,const char* src,unsigned int num);

//char* my_strncat(char* dest, const char* src, unsigned int num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//		dest++;
//	while (num && (*dest++ = *src++))
//		num--;
//	if (num == 0)  // 追加完个数num后。要在目标字符串后补上 '\0'
//		*dest = '\0';
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "abcde\0xxxxxxxxxxxx";
//	char arr2[] = "love";
//
//	/*strncat(arr1, arr2, 4);
//	printf("%s\n", arr1);*/
//
//	my_strncat(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}




//#include <stdio.h>
//#include <assert.h>
//#include <string.h>


// strncmp。可以设定比较几个字符的，字符串比较函数。
// int strncmp(const char* str1,const char* str2,unsigned int count);


//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcdqwe";
//
//	int ret = strncmp(str1, str2, 3);
//	printf("%d\n", ret);
//	return 0;
//}


// strstr。查找字符串函数
// char* strstr(const char* p1,const char* p2);  在p1中有无查找p2。查找到了返回该处地址。找不到返回空指针NULL

//char* my_strstr(const char* p1, const char* p2)
//{
//	char* ret = NULL;
//	char* tmp = NULL;
//	char* pp2 = p2;
//	assert(p1 && p2);
//	if (*p2 == '\0')
//		return p1;
//	while ((*p1 != *p2) && (*p1 != '\0'))
//	{
//		p1++;
//	}
//	ret = p1;
//	tmp = p1;
//xunhuan:
//	while ((*p1 == *p2) && (*p2 != '\0'))
//	{
//		p1++;
//		p2++;
//	}
//	if ((*tmp == *(tmp + 1)) && *p2 != '\0')
//	{
//		p1 = tmp+1;
//		p2 = pp2;
//		ret++;
//		tmp++;
//		goto xunhuan;
//	}
//	if (*p2 == '\0')
//		return ret;
//	else
//		return NULL;
//}

//char* my_strstr(const char* p1, const char* p2) // 这个方法更优
//{
//	assert(p1 && p2);
//	char* s1 = (char*)p1;
//	char* s2 = (char*)p2;
//	char* cur = (char*)p1;
//	if (*s2 == '\0')
//		return ((char*)p1);
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	const char* p1 = "abbbcdef";
//	const char* p2 = "bc";
//
//	/*char* ret = strstr(p1, p2);
//	if (ret == NULL)
//		printf("没有找到\n");
//	else
//		printf("找到了，地址为:%s\n",ret);*/
//
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("没有找到\n");
//	else
//	{
//		printf("找到了\n");
//		printf("%s\n", ret);
//	}
//	return 0;
//}




// strtok。字符串切割函数。以某个字符，把一个字符串，分割成多个小的字符串
// 例如："192.168.31.121" 这样的字符串，以字符'.' ，把该字符串分割成 "192" "168" "31" "121" 这样的多个字符串
// 
// char* strtok(char* str,const char* sep);
// 
// sep参数是个字符串，定义了用作分隔符的字符集合。
// 第一个参数指定一个字符串，包含了0个或者多个sep字符串中一个或者多个分隔符分割的标记。
// strtok函数会找到 str中下一个标记，并将其用 '\0' 代替，返回一个指向这个标记的指针。
// strtok函数第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置 
// strtok函数第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
// 如果字符串中不存在更多的标记，则返回NULL指针。
// 使用strtok函数会改变被操作的字符串，所以使用该函数，都是去切分临时拷贝的字符串。

//char* my_strtok(char* str, const char* sep)
//{
//	static char* pc = NULL;
//	char* ret = str;
//	char* sep1 = (char*)sep;
//	if (str != NULL)
//	{
//		while (*str)
//		{
//			sep1 = (char*)sep;
//			while (*sep1)
//			{
//				if (*sep1 == *str)
//				{
//					pc = str+1;
//					*str = '\0';
//					return ret;
//				}
//				sep1++;
//			}
//			str++;
//		}
//	}
//	else
//	{
//		ret = pc;
//		str = pc;
//		while (*str)
//		{
//			sep1 = (char*)sep;
//			while (*sep1)
//			{
//				if (*sep1 == *str)
//				{
//					pc = str + 1;
//					*str = '\0';
//					return ret;
//				}
//				sep1++;
//			}
//			str++;
//		}
//	}
//	return NULL;
//}
//int main()
//{
//	char arr[] = "280@qq.com";
//	char* p = "@.";
//	char lins[100] = { 0 };
//	strcpy(lins, arr);  // 拷贝字符串
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL,p))  // 切割字符串
//	{
//		printf("%s\n", ret);
//	}

	//for (ret = my_strtok(arr, p); ret != NULL; ret = my_strtok(NULL, p))  // 切割字符串
	//{
	//	printf("%s\n", ret);
	//}
//	return 0;
//}




// strerror函数。错误报告函数
// char* strerror(int errnum);
// 返回错误码所对应的错误信息。
// 必须包含头文件 <errno.h>

#include <stdio.h>
#include <string.h>
#include <errno.h>


int main()
{
	printf("%s\n", strerror(0));  //  No error
	printf("%s\n", strerror(1));  //  Operation not permitted 操作被拒绝
	printf("%s\n", strerror(2));  // No such file or directory  没有这个文件或文件夹
	printf("%s\n", strerror(3));  // No such process
 //strerror中的参数0，1，2，3...这些参数是错误码。打印出的那些信息是描述错误码的。
 //strerror这函数就是把错误码的信息，转化成对应的错误信息，返回其地址。

	printf("%s\n", strerror(errno));  // errno 是一个全局的错误码的变量。
//当c语言的库函数，在执行过程中发生了错误。就会把对应的错误码，赋值到errno这个变量中。
 //只要去检测errno这个变量中的错误码的值，就知道错误产生的原因


	 //fopen函数。作用是打开文件。返回值是一个指针。类型是FILE*。
	FILE* pf = fopen("C:\\Users\\86176\\Desktop\\test.txt","r");  // 打开失败会返回一个空指针
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno)); 
// 打开失败。errno变量就存有错误码的值。通过strerror函数，找到错误码值对应的错误信息，返回错误信息字符串的首元素地址。然后打印出来。
	}
	else
	{
		printf("打开成功\n");
	}
	return 0;
}




