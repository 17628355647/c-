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
	//// *a��ʾ��Ԫ�أ�Ҳ���Ǵ�����Ԫ�ص�ASCII��ֵ��strlen��Ҫ����Ԫ�ص�ַ������Ԫ�ص�ASCII��ֵ ������ַ���Ƿ����ʡ�������ֹ
	//printf("%d\n", strlen(a[1])); // a[1]Ҳ��һ��Ԫ�ء�������ֹ
	//printf("%d\n", strlen(&a)); // 5
	//printf("%d\n", strlen(&a+1)); // ����Խ�磬���ֵ 
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
//	printf("%d\n", sizeof(a[0]));   // 16  a[0]��ʾ��һ����������������������������Ԫ�ص�ַ
//	printf("%d\n", sizeof(a[0]+1));// 4   a[0]+1 ��ʾ��һ�У��ڶ���Ԫ�صĵ�ַ��
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 
//	printf("%d\n", sizeof(a+1));  // 4
//	printf("%d\n", sizeof(*(a + 1))); // 16
//	printf("%d\n", sizeof(&a[0] + 1)); // 4
//	printf("%d\n", sizeof(*(&a[0] + 1))); // 16
//	printf("%d\n", sizeof(*a));  // 16
//	printf("%d\n", sizeof(a[3])); // 16 
//	// sizeof�ڲ����ʽ���������ʵ���㡣sizeofֻ�Ǹ������ͼ����С��a[3]�����У�Ҳ����16������ȥ����a[3]
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* p = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(p - 1));  // ���2��5
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
//// �ṹ��test�����ͱ�����СΪ20�ֽ�
//// ����p��ֵΪ0x100000��
//int main()
//{
//	p = (struct test*)0x100000;  // ��ʼ��
//	printf("%p\n", p + 0x1);// �ṹ��ָ���1������һ���ṹ�壬��ַҲ������20�ֽ�
//	printf("%p\n", (unsigned long)p + 0x1); // ǿ������ת���ɳ����ͣ�Ȼ���1��
//	printf("%p\n", (unsigned int*)p + 0x1); // ǿ������ת��������ָ�룬��һҲ������4�ֽڡ�
//	return 0;
//}



//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };  // ���������Ƕ��ű��ʽ��Ҳ����{1,3,5}����˼������3��2�У����γ�ʼ������һ����1��3����Ԫ��
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);  //��ӡ1
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	// д������Ԫ�����ڴ��д洢�����С�˴洢
//	// 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);  // ��������Ԫ�ص�ַǿ������ת����������Ȼ���1����ת����int*����ָ�롣�õ���ԭ����ַ��1�ĵ�ַ
//	printf("%x,%x", p1[-1], *p2);  // %x ��16���ƽ��д�ӡ�� ��ӡ4��2000000
//	//��һ����ӡ4���ڶ�����ӡ2000000����Ϊint*����ָ�������������4�ֽ����ݣ�Ϊ00 00 00 02����Ϊ��С�˴洢���ԣ����Ϊ02 00 00 00
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];  // ����ָ�롣��ֻ�ܴ�����Ԫ��Ϊ4������ĵ�ַ
//	p = a; // aΪ��Ԫ�ص�ַҲ����a[0]�������һ�С�ǿ�а�a�ĵ�ַ����p
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);  
//	// p[4][2] �ȼ��� *(*(p+4)+2)����ΪpΪ����ָ�룬p+4�����4�����飨�����Ԫ�ظ���Ϊ4���ĵ�ַ��
//	// ��Ϊpָ��һ�����飬���Խ����ú�Ϊ��ǰλ��������Ԫ�ص�ַ��Ȼ��+2���ٽ����ã��õ���λ�õ�����
//	// &p[4][2] ȡ����λ�õĵ�ַ��
//	// &p[4][2] - &a[4][2] ��ַ���������ַ֮���Ԫ�ظ�������Ϊ&p[4][2] С�� &a[4][2]�����Եõ����������Ϊ-4
//	// ��%d����ʽ��ӡ���õ�-4��
//	// %p�Ǵ�ӡ��ַ��������������16���ơ�Ҳ���ǰ�-4�Ĳ��룬����һ��������Ȼ��ת����16�����������д�ӡ
//	return 0;
//}



//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&aa + 1);  //&aa + 1��ȡ����������ĵ�ַ��Ȼ���ַ��1����ַ�����������Ȼ��ǿ������ת��������ָ��
//	int* p2 = (int*)(*(aa)+1); 
//	// aaΪ��Ԫ�ص�ַ��Ҳ���ǵ�һ������ĵ�ַ�������ñ�ʾ��һ�����飬Ȼ���1��ʾ��һ��������Ԫ�ص�ַ��1�����ǿ������ת��������ָ��
//	printf("%d,%d", *(p1 - 1), *(p2 - 1));  // 10��1
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
	// �ؼ�����++cpp���������ı���cpp��ĵ�ַ
	return 0;
}


