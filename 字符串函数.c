#define _CRT_SECURE_NO_WARNINGS 1

//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
// c�����ж��ַ����ַ����Ĵ����Ƶ�����ַ���ͨ������ �����ַ��� ���� �ַ������С�
// �����ַ��� ��������Щ���������޸ĵ��ַ���������

// strlen ���������ַ������ȡ�
// unsigned int strlen (const char* str);
// �ַ����� '\0' Ϊ������־��strlen�������ص����� '\0' ǰ����ֵ��ַ������������� '\0'��
// ����ָ����ַ��������� '\0' ����
// ע�⺯���ķ���ֵΪ unsigned int ���޷��ŵģ��״�

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

// ģ��ʵ��strlen����
//unsigned int my_strlen(const char* str)  // ��������
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

//int my_strlen(const char* str) // �ݹ鷨����������ʱ����
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



// strcpy ���� ���ַ�������
// char* strcpy(char* destination,const char* source);  ��source���ַ���������destination��
// Դ�ַ�source ������ '\0' ��β����Ȼѭ����ֹͣ�����������
// �ὫԴ�ַ��� '\0' Ҳ������Ŀ��ռ��С�
// Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
// Ŀ��ռ����ɱ䡣


//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* p = str1;
//	// ����str2ָ����ַ����ݵ�str1ָ����ַ������У�����'\0'
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return p;  // ����Ŀ�Ŀռ����ʼ��ַ��
//}
//int main()
//{
//	char zf1[] = "hello world";
//	char zf2[] = "I love you";
//	/*strcpy(zf1, zf2);
//	printf("%s\n", zf1);*/
//
//	printf("����ǰ��%s\n", zf1);
//	my_strcpy(zf1, zf2);
//	printf("������%s\n", zf1);
//	return 0;
//}




// strcat�������ַ���׷�ӡ���һ���ַ������棬׷��һ��������
// char* strcat(char* destination,const char* source);
// Դ�ַ������� '\0'����
// Ŀ��ռ�����㹻����������Դ�ַ��������ݡ�Ŀ���ַ���Ҳ������'\0'��β
// Ŀ��ռ����ɸı䡣
// �ַ����������Լ����Լ�׷�ӡ���Ϊ '\0'�������ˡ�

//char* my_strcat(char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* ret = p1;
//	while (*p1)  // �ҳ� '\0'λ��
//	{
//		p1++;
//	}
//	while (*p1++ = *p2++)  
//	{
//		// ��p2��ָ���ַ������ݣ���p1��'\0'��ʼ��׷�ӵ�p1��ָ����ַ���p1��'\0'�ᱻp2����Ԫ�ظ��ǡ���Ȼp2��'\0'Ҳ��׷�ӵ�p1��
//		;
//	}
//	return ret;  // ����p1��ָ���ַ�����Ԫ�ص�ַ
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




// strcmp �������ַ����Ƚϡ������ַ�������Ӧ�ַ���ASCII��ֵ��
// int strcmp(const char* str1,const char* str2);
// ��һ���ַ������ڵڶ����ַ������򷵻ش���0����
// ��һ���ַ������ڵڶ����ַ������򷵻�0
// ��һ���ַ���С�ڵڶ����ַ������򷵻�С��0����

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
//	int ret = my_strcmp(arr1, arr2); // ģ��ʵ���Լ��� �ַ����ȽϺ���
//
//	if (ret > 0)
//		printf("��һ���ַ��� ���� �ڶ����ַ���\n");
//	else if(ret == 0)
//		printf("��һ���ַ��� ���� �ڶ����ַ���\n");
//	else
//		printf("��һ���ַ��� С�� �ڶ����ַ���\n");
//	return 0;
//}




// strcpy,strcat,strcmp�����������������ַ����������ơ�ֻ��������'\0'��ֹͣ��
// strncpy,strncat,strncmp�����������������ַ����������ơ�
// strncpy���������ÿ��������ַ���strncat��������׷�Ӽ����ַ���strncmp�������ñȽϼ����ַ�

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>

// strncpy
// char* strncpy(char* dest,char* src,unsigned int count);  count ��ʾҪ�������ٸ��ֽ�
// ���count����Դ�ַ��г��ȣ��򿽱���Դ�ַ����󣬻���Ŀ�����׷��'\0' ֱ��count��

//char* my_strncpy(char* dest, const char* src, unsigned int count)
//{
//	assert(dest && src);
//	unsigned int i = 0;
//	for (i = 0; i < count; i++)  // ���ÿ�������
//	{
//		if (*src == '\0')  // Դ�ַ���С��Ҫ�����ĸ�������'\0'����
//		{
//			*(dest + i) = '\0';
//		}
//		else
//			*(dest+i) = *src++; 
//	}
//	return dest;  // ����Ŀ���ַ
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


// strncat������������Ŀ���ַ������棬׷�Ӷ��ٸ�Դ�ַ��������ݡ�
// char* strncat(char* dest,const char* src,unsigned int num);

//char* my_strncat(char* dest, const char* src, unsigned int num)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//		dest++;
//	while (num && (*dest++ = *src++))
//		num--;
//	if (num == 0)  // ׷�������num��Ҫ��Ŀ���ַ������� '\0'
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


// strncmp�������趨�Ƚϼ����ַ��ģ��ַ����ȽϺ�����
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


// strstr�������ַ�������
// char* strstr(const char* p1,const char* p2);  ��p1�����޲���p2�����ҵ��˷��ظô���ַ���Ҳ������ؿ�ָ��NULL

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

//char* my_strstr(const char* p1, const char* p2) // �����������
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
//		printf("û���ҵ�\n");
//	else
//		printf("�ҵ��ˣ���ַΪ:%s\n",ret);*/
//
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("û���ҵ�\n");
//	else
//	{
//		printf("�ҵ���\n");
//		printf("%s\n", ret);
//	}
//	return 0;
//}




// strtok���ַ����и������ĳ���ַ�����һ���ַ������ָ�ɶ��С���ַ���
// ���磺"192.168.31.121" �������ַ��������ַ�'.' ���Ѹ��ַ����ָ�� "192" "168" "31" "121" �����Ķ���ַ���
// 
// char* strtok(char* str,const char* sep);
// 
// sep�����Ǹ��ַ����������������ָ������ַ����ϡ�
// ��һ������ָ��һ���ַ�����������0�����߶��sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
// strtok�������ҵ� str����һ����ǣ��������� '\0' ���棬����һ��ָ�������ǵ�ָ�롣
// strtok������һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�� 
// strtok������һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
// ����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ�롣
// ʹ��strtok������ı䱻�������ַ���������ʹ�øú���������ȥ�з���ʱ�������ַ�����

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
//	strcpy(lins, arr);  // �����ַ���
//	char* ret = NULL;
//
//	for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL,p))  // �и��ַ���
//	{
//		printf("%s\n", ret);
//	}

	//for (ret = my_strtok(arr, p); ret != NULL; ret = my_strtok(NULL, p))  // �и��ַ���
	//{
	//	printf("%s\n", ret);
	//}
//	return 0;
//}




// strerror���������󱨸溯��
// char* strerror(int errnum);
// ���ش���������Ӧ�Ĵ�����Ϣ��
// �������ͷ�ļ� <errno.h>

#include <stdio.h>
#include <string.h>
#include <errno.h>


int main()
{
	printf("%s\n", strerror(0));  //  No error
	printf("%s\n", strerror(1));  //  Operation not permitted �������ܾ�
	printf("%s\n", strerror(2));  // No such file or directory  û������ļ����ļ���
	printf("%s\n", strerror(3));  // No such process
 //strerror�еĲ���0��1��2��3...��Щ�����Ǵ����롣��ӡ������Щ��Ϣ������������ġ�
 //strerror�⺯�����ǰѴ��������Ϣ��ת���ɶ�Ӧ�Ĵ�����Ϣ���������ַ��

	printf("%s\n", strerror(errno));  // errno ��һ��ȫ�ֵĴ�����ı�����
//��c���ԵĿ⺯������ִ�й����з����˴��󡣾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��������С�
 //ֻҪȥ���errno��������еĴ������ֵ����֪�����������ԭ��


	 //fopen�����������Ǵ��ļ�������ֵ��һ��ָ�롣������FILE*��
	FILE* pf = fopen("C:\\Users\\86176\\Desktop\\test.txt","r");  // ��ʧ�ܻ᷵��һ����ָ��
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno)); 
// ��ʧ�ܡ�errno�����ʹ��д������ֵ��ͨ��strerror�������ҵ�������ֵ��Ӧ�Ĵ�����Ϣ�����ش�����Ϣ�ַ�������Ԫ�ص�ַ��Ȼ���ӡ������
	}
	else
	{
		printf("�򿪳ɹ�\n");
	}
	return 0;
}




