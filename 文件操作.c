#define _CRT_SECURE_NO_WARNINGS 1

// �����ϵ��ļ���Ϊ���֣�1.�����ļ���2.�����ļ���
// �����ļ�������Դ�����ļ�����׺.c����Ŀ���ļ���windows������׺Ϊ.obj������ִ�г���windows������׺Ϊ.exe����
// �����ļ����ļ����ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݡ��������������Ҫ���ж�ȡ���ݵ��ļ�������������ݵ��ļ���


// �ļ�����һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ������á�
// �ļ������������֣��ļ�·�����ļ������ɡ��ļ���׺

// �ļ����͡��������ݶ���֯��ʽ�������ļ�����Ϊ�ı��ļ����߶������ļ���
// �������ڴ����Զ����Ƶ���ʽ�洢���������ת�����������棬���Ƕ������ļ���
// ���Ҫ�����������ASCII�����ʽ�洢������Ҫ�ڴ洢ǰת������ASCII�ַ�����ʽ�洢���ļ������ı��ļ���
// �ַ�һ����ASCII����ʽ�洢����ֵ�����ݼȿ�����ASCII��ʽ�洢��Ҳ����ʹ�ö�������ʽ�洢��

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


// �ļ�������
// ANSIC��׼���á������ļ�ϵͳ�����������ļ�����ν�����ļ�ϵͳ��ָ ϵͳ�Զ������ڴ���Ϊ������ÿһ������ʹ�õ��ļ�����һ�顰�ļ���������
// ���ڴ������������ݻ����͵��ڴ��еĻ�������װ�����������һ���͵������ϡ�����Ӵ����������������ݣ���Ӵ����ļ��ж�ȡ����
//  ���뵽�ڴ滺��������������������Ȼ���ٴӻ���������ؽ������͵���������������������ȣ����������Ĵ�С����c����ϵͳ������



// �ļ�ָ�롣ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ���磬�ļ������֡��ļ�״̬���ļ���ǰλ�ã�
// ��Щ��Ϣ�Ǳ�����һ���ṹ������С��ýṹ�����ϵͳ������ȡ��FILE��

// ÿ����һ���ļ�ʱ��ϵͳ������ļ�������Զ�����һ��FILE�ṹ������������������Ϣ��ʹ���߲��ع��ġ�
// һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE������


// �ļ���д֮ǰҪ�ȴ��ļ���������Ҫ�ر��ļ���
// ���ļ�ͬʱ�����᷵��һ��FILE*��ָ�������ָ����ļ�����ʧ�ܻ᷵��һ����ָ��
// fopen���ļ���fclose�رչر��ļ���
// FILE* fopen(const char* filename,const char* mode);
// int fclose(FILE* p);
// modeΪ��ģʽ��
// r,w,a�ֱ��ʾֻ����ֻд��׷�����ݣ����û���ļ���wģʽ�ᴴ��һ�����ļ���r��aģʽ�ᱨ��rb,wb,ab�Զ����Ʒ�ʽ��ֻ����ֻд��׷��
// r+,w+,a+�ֱ��ʾ��д����д��׷�����ݣ�û���ļ��Ļ�r+ģʽ�ᱨ��w+��a+�ᴴ��һ�����ļ���rb+,wb+,ab+�÷���ͬ��
// w��w+ģʽ�ᴴ�����ļ������������ͬ�����ļ����Ḳ�ǵ�֮ǰ�ļ���
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	FILE* p = fopen("text.txt", "a");
//	if (p == NULL)  //�ж��Ƿ�򿪳ɹ�
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fclose(p);  // �ر��ļ���
//	p = NULL;
//	return 0;
//}



// �ļ�˳���д

// ���������������������
// fgetc���������ļ���һ���ַ���ȡ������int fgetc(FILE* p); �����������������������ȡ��Ϣ��
// fputc��������һ���ַ�д���ļ��С� int fputc(int c,FILE* p);  ���������������������д����Ϣ



//int main()
//{
//	FILE* p = fopen("test.txt", "w");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	// д�ļ���
//	fputc('I', p);
//	fputc(' ', p);
//	fputc('O', p);
//	fputc(' ', p);
//	fputc('U', p);
//	// �ر��ļ�
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
//	printf("%c",fgetc(p));  // ���ļ�.
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	printf("%c", fgetc(p));
//	fclose(p);
//	p = NULL;
//	return 0;
//}


// �Ӽ�����������Ļ��������̺���Ļ�����ⲿ�豸��
// ���� - ��׼�����豸����Ļ - ��׼����豸��
// ��Щ�豸�ǳ���Ĭ�ϴ򿪵��������豸��
// �������л�Ĭ�ϴ���������stdin�����̣���stdout����Ļ����stderr�����Ͷ���FILE*
// 

//int main()
//{
//	int ch = fgetc(stdin);   // �Ӽ������룬�浽ch��
//	fputc(ch, stdout); // Ȼ�����Ļ���
//	return 0;
//}



// ������������
// fgets�ı������뺯���������������������������ȡ��Ϣ�� char* fgets(char* string,int n,FILE* stream);  �����ϻ�ȡ�ַ�
// fputs�ı���������������������������������д����Ϣ��int fputs(const char* string,FILE* stream);  ���ַ�����д������

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	char arr[100] = "";
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(arr,100,pf);   // ���ļ�������arr�С�
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
//	//fgets(arr,15,stdin);   // �ӱ�׼����������ȡ��Ϣ��arr�С�
//	//fputs(arr, stdout);  // ��arr����Ϣ���������׼�������
//
//	gets(arr);
//	puts(arr);
//	return 0;
//}



// fscanf��ʽ�� �����������������������ȡ��Ϣ ������ int fscanf(FILE* stream,const char* format[,argument]...);
// fprintf��ʽ�� ���������������������������Ϣ ������int fprintf(FILE* stream,const char* format[,argument]...);

//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 520,1.124f,"hello world" };
//	////// ���ṹ������Ϣд���ļ�
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



// scanf ����Ա�׼��������stdin����Ҳ���Ǽ������룬�Ӹ������� ��ʽ�� ��ȡ��Ϣ��
// printf ����Ա�׼�������stdout����Ҳ������Ļ��ʾ���Ӹ������� ��ʽ�� д����Ϣ��
// ��fscanf��fprintf ����������������ԡ�

// sscanf������int sscanf(const char* buffer,const char* format[,argument]....); ��һ���ַ������� ��ȡ��ʽ����Ϣ��
// sprintf������ int sprintf(char* buffer,const char* format[,argument]);  �Ѹ�ʽ�����ݣ�ת�����ַ������ٷ����ַ����С�

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
//	sscanf(buff, "%d %f %s", &(tmp.n), &(tmp.c), tmp.arr);   // �ø�ʽ����ʽ�����ַ����л�ȡ��Ϣ��
//	printf("%d %f %s", tmp.n, tmp.c, tmp.arr);
//	return 0;
//}





// ����������ֻ�������ļ����������Ƕ����Ƶ�����������
// fread������  size_t fread(void* buffer,size_t size,size_t count,FILE* stream);
// fwrite������size_t fwrite(const void* buffer,size_t size,size_t count,FILE* stream);  
//  ���������ͱ����ĵ�ַָ������ݣ�дcount�� size�ֽڴ�С������ ���ļ����ϡ�

struct S
{
	char name[20];
	int age;
	double d;
};
int main()
{
	//struct S s = { "����",12,1.82 };
	//FILE* p = fopen("test.txt", "wb");
	//if (p == NULL)
	//{
	//	printf("%s", strerror(errno));
	//	return 0;
	//}
	//fwrite(&s,sizeof(s),1,p);     // д�ļ�
	//fclose(p);
	//p = NULL;


	struct S s = { 0 };
	FILE* pr = fopen("test.txt", "rb");
	if (pr == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fread(&s, sizeof(s), 1, pr);  // ���ļ�

	fclose(pr);
	pr = NULL;
	return 0;
}