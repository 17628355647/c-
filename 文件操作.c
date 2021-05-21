#define _CRT_SECURE_NO_WARNINGS 1

// 磁盘上的文件分为两种：1.程序文件。2.数据文件。
// 程序文件：包括源程序文件（后缀.c）、目标文件（windows环境后缀为.obj）、可执行程序（windows环境后缀为.exe）。
// 数据文件：文件内容不一定是程序，而是程序运行时读写的数据。比如程序运行需要从中读取数据的文件，或者输出内容的文件。


// 文件名。一个文件要有一个唯一的文件标识，以便用户识别和引用。
// 文件名包括三部分：文件路径、文件名主干、文件后缀

// 文件类型。根据数据段组织形式，数据文件被称为文本文件或者二进制文件。
// 数据在内存中以二进制的形式存储，如果不加转换的输出到外存，就是二进制文件。
// 如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII字符的形式存储的文件就是文本文件。
// 字符一律用ASCII码形式存储，数值型数据既可以用ASCII形式存储，也可以使用二进制形式存储。

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* p = fopen("test.txt","wb");
//	fwrite(&a, 4, 1, p);
//	fclose(p);
//	p = NULL;
//	return 0;
//}


// 文件缓冲区
// ANSIC标准采用“缓冲文件系统”处理数据文件。所谓缓冲文件系统是指 系统自动地在内存中为程序中每一个正在使用的文件开辟一块“文件缓冲区”
// 从内存向磁盘输出数据会先送到内存中的缓冲区，装满缓冲区后才一起送到磁盘上。如果从磁盘向计算机读入数据，则从磁盘文件中读取数据
//  输入到内存缓冲区（充满缓冲区），然后再从缓冲区逐个地将数据送到程序数据区（程序变量等）。缓冲区的大小根据c编译系统决定。



// 文件指针。每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如，文件的名字、文件状态、文件当前位置）
// 这些信息是保存在一个结构体变量中。该结构体变量系统声明，取名FILE。

// 每当打开一个文件时，系统会根据文件的情况自动创建一个FILE结构体变量，并填充其中信息，使用者不必关心。
// 一般都是通过一个FILE的指针来维护这个FILE变量。


// 文件读写之前要先打开文件，结束后要关闭文件。
// 打开文件同时，都会返回一个FILE*的指针变量，指向该文件。打开失败会返回一个空指针
// fopen打开文件，fclose关闭关闭文件。
// FILE* fopen(const char* filename,const char* mode);
// int fclose(FILE* p);
// mode为打开模式。
// r,w,a分别表示只读，只写和追加数据，如果没有文件，w模式会创建一个新文件，r和a模式会报错。rb,wb,ab以二进制方式，只读，只写，追加
// r+,w+,a+分别表示读写，读写，追加数据，没有文件的话r+模式会报错，w+和a+会创建一个新文件。rb+,wb+,ab+用法雷同。
// w和w+模式会创建新文件，如果已有相同名字文件，会覆盖掉之前文件。
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* p = fopen("text.txt", "a");
//	if (p == NULL)  //判断是否打开成功
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(p);  // 关闭文件。
//	p = NULL;
//	return 0;
//}



// 文件顺序读写

// 适用于所有输入输出流。
// fgetc函数。把文件的一个字符读取出来。int fgetc(FILE* p); 向流（输入流或输出流）获取信息。
// fputc函数。把一个字符写入文件中。 int fputc(int c,FILE* p);  向流（输入流或输出流）写入信息



//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	// 写文件。
//	fputc('I', p);
//	fputc(' ', p);
//	fputc('O', p);
//	fputc(' ', p);
//	fputc('U', p);
//	// 关闭文件
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	printf("%c",fgetc(p));  // 读文件.
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	fclose(p);
//	p = NULL;
//	return 0;
//}


// 从键盘输入或从屏幕输出。键盘和屏幕都是外部设备。
// 键盘 - 标准输入设备。屏幕 - 标准输出设备。
// 这些设备是程序默认打开的两个流设备。
// 电脑运行会默认打开三个流，stdin（键盘）、stdout（屏幕）、stderr，类型都是FILE*
// 

//int main()
//{
//	int ch = fgetc(stdin);   // 从键盘输入，存到ch中
//	fputc(ch, stdout); // 然后从屏幕输出
//	return 0;
//}



// 适用所有流。
// fgets文本行输入函数。向流（输入流或输出流）获取信息。 char* fgets(char* string,int n,FILE* stream);  从流上获取字符
// fputs文本行输出函数。向流（输入流或输出流）写入信息。int fputs(const char* string,FILE* stream);  把字符串，写入流上

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	char arr[100] = "";
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(arr,100,pf);   // 读文件，放入arr中。
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "a");
//	char arr[100] = "";
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	
//	fputs("hahahahaha\n",pf);
//	fputs("lalalalla\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	char arr[20] = { 0 };
//	//fgets(arr,15,stdin);   // 从标准输入流，读取信息到arr中。
//	//fputs(arr, stdout);  // 把arr中信息，输出到标准输出流。
//
//	gets(arr);
//	puts(arr);
//	return 0;
//}



// fscanf格式化 向流（输入流或输出流）获取信息 函数。 int fscanf(FILE* stream,const char* format[,argument]...);
// fprintf格式化 向流（输入流或输出流）输入信息 函数。int fprintf(FILE* stream,const char* format[,argument]...);

//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 520,1.124f,"hello world" };
//	////// 将结构体中信息写入文件
//	//FILE* pf = fopen("test.txt", "w");
//	//if (pf == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//
//	//fprintf(pf,"%d %f %s",s.n,s.f,s.arr);
//	//fclose(pf);
//	//pf = NULL;
//
//	struct S s = { 0 };
//	FILE* pr = fopen("test.txt", "r");
//	if (pr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fscanf(pr, "%d %f %s", &(s.n), &(s.f), &(s.arr));
//	printf("%d %f %s", s.n, s.f, s.arr);
//	fclose(pr);
//	pr = NULL;
//
//	return 0;
//}

//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.f), &(s.arr));
//	printf("%d %.2f %s", s.n, s.f, s.arr);
//
//	/*fprintf(stdout, "hello");*/
//	return 0;
//}



// scanf 是针对标准输入流（stdin），也就是键盘输入，从该流上面 格式化 获取信息。
// printf 是针对标准输出流（stdout），也就是屏幕显示，从该流上面 格式化 写入信息。
// 而fscanf和fprintf 是针对所有流都可以。

// sscanf函数。int sscanf(const char* buffer,const char* format[,argument]....); 从一个字符串里面 获取格式化信息。
// sprintf函数。 int sprintf(char* buffer,const char* format[,argument]);  把格式化数据，转化成字符串，再放入字符串中。

//struct S
//{
//	int n;
//	float c;
//	char arr[10];
//};
//
//int main()
//{
//	/*struct S s = { 100,3.14f,"abcderf" };
//	char buff[200] = {0};
//	sprintf(buff, "%d %f %s", s.n, s.c, s.arr);
//	printf("%s\n", buff);*/
//
//	struct S tmp = { 0 };
//	char* buff = "100 3.14 abcdefg";
//	sscanf(buff, "%d %f %s", &(tmp.n), &(tmp.c), tmp.arr);   // 用格式化方式，在字符串中获取信息。
//	printf("%d %f %s", tmp.n, tmp.c, tmp.arr);
//	return 0;
//}





// 下面两函数只适用于文件流。并且是二进制的输入或输出。
// fread函数。  size_t fread(void* buffer,size_t size,size_t count,FILE* stream);
// fwrite函数。size_t fwrite(const void* buffer,size_t size,size_t count,FILE* stream);  
//  把任意类型变量的地址指向的内容，写count个 size字节大小的内容 到文件流上。

struct S
{
	char name[20];
	int age;
	double d;
};
int main()
{
	//struct S s = { "张三",12,1.82 };
	//FILE* p = fopen("test.txt", "wb");
	//if (p == NULL)
	//{
	//	printf("%s", strerror(errno));
	//	return 0;
	//}
	//fwrite(&s,sizeof(s),1,p);     // 写文件
	//fclose(p);
	//p = NULL;


	struct S s = { 0 };
	FILE* pr = fopen("test.txt", "rb");
	if (pr == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fread(&s, sizeof(s), 1, pr);  // 读文件

	fclose(pr);
	pr = NULL;
	return 0;
}