#define _CRT_SECURE_NO_WARNINGS 1

// �ַ����ຯ����
// ����           ������Ĳ����������������ͷ�����
// iscntrl        �ж��Ƿ�Ϊ�����ַ�
// isspace        �ж��Ƿ�Ϊ�հ��ַ�
// isdigit        �ж��Ƿ�Ϊʮ���������ַ�
// isxdigit       �ж��Ƿ�Ϊ16���������ַ�
// islower        �ж��Ƿ�ΪСд��ĸ
// issupper       �ж��Ƿ�Ϊ��д��ĸ
// isalpha        �ж��Ƿ�Ϊ��ĸ
// isalnum        �ж��Ƿ�Ϊ��ĸ�������ַ�
// ispunct        �ж��Ƿ�Ϊ������
// isgraph        �ж��Ƿ�Ϊͼ���ַ�
// isprint        �ж��Ƿ�Ϊ�ɴ�ӡ�ַ�

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


// �ַ�ת��������tolower������תСд��toupper������ת��д��

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




// memcpy�������ڴ濽��
// void* memcpy(void* des,const void* src,unsigned int num);
// ����memcpy��src��λ�ÿ�ʼ�����num���ֽڵ����ݵ�des���ڴ�λ�á�
// ������������� '\0' ��ʱ�򲢲���ͣ������
// ���src��des���κε��ص������ƵĽ������δ����ġ�

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
//	//struct s stu[] = { { "�",14 },{"����",20} };
//	//struct s st[3] = { 0 };
//
//	//memcpy(st, stu, sizeof(stu));  // �����ṹ��
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(st, stu, sizeof(stu));
//	return 0;
//}



// memmove�����������ڴ��ص����������һ���������棬[1,2,3,4,5,6]���Ѻ��������ǰ��������ڴ��ص��Ŀ���
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


// memcmp �ڴ�Ƚ�
// int memcmp(const void* p1,const void* p2,size_t num);
// �Ƚϴ�p1��p2ָ�뿪ʼ��num���ֽ�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,6,7 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}



// memset�ڴ����ú�����
// void* memset(void* dest, int c, size_t count);
// ��dest��ָ��Ŀռ䣬���ó�count�ֽڸ��ַ�c
int main()
{
	char arr[10] = { 0 };
	memset(arr, '*', 10);
	return 0;
}