#define _CRT_SECURE_NO_WARNINGS 1

// #include <stdio.h>

// ָ����ף�
// 1.�ַ�ָ�롣2.����ָ�롣3.ָ�����顣4.���鴫�κ�ָ�봫�Ρ�5.����ָ�롣6.����ָ�����顣7.ָ����ָ�������ָ��
//  8.�ص�������9.ָ������������������


// 1.�ַ�ָ��
//int main()
//{
	/*char a = 'a';
	char* p = &a;*/

	//char arr[] = "abcdef";
	//char* p = arr;
	//// ���ִ�ӡ��ʽһ������Ϊ������������Ԫ�ص�ַ
	//printf("%s\n", p);
	//printf("%s\n", arr);

	//char* pc = "abcdefg";  // "abcdefg" ��һ�������ַ�����������ʽ����˼�ǣ�����Ԫ�أ�a���ĵ�ַ����pc
	//printf("%s\n", pc);  // ��ӡ�����ַ���
	//printf("%c\n", *pc);  // ��ӡa��
	// *pc = 'w';  ���������Ϊ"abcdefg" ��һ�������ַ��������Բ����޸ġ�
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	//if (arr1 == arr2)  // arr1��arr2��������������Ԫ�ص�ַ����������洢�ĵ�ַ����Ȼ��ͬ���ʴ�ӡ haha
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//
//	if (p1 == p2)    
// ��Ϊ"abcdef"�ǳ����ַ��������ܱ��޸ġ�p1����p2��ָ��һ�����ַ������ڴ��о�û�б�Ҫ��������һ�����ַ���������p1��p2ָ��ͬһ�������ַ���
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


// 2.ָ�����顣ָ��������һ�����ָ�������

//int main()
//{
//	//int arr[10] = {0}; // ��������
//	//char arr2[5] = { 0 }; // �ַ�����
//	//int* parr[5];  // �������ָ�������
//	//char* pch[5];  // ����ַ�ָ�������
//
//
//	int a = 10, b = 20, c = 30, d = 40;
//	int* p[4] = { &a,&b,&c,&d };  // ��ָ�������ŵ�ַ��
//	// printf("%p\n", p[1]);
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		//printf("%p\n", p[i]);  // ���δ�ӡָ�������еĵ�ַ
//		//printf("%d\n", *(p[i]));  // ���δ�ӡabcd
//		printf("%d�ĵ�ַ��%p\n", *(p[i]), p[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 5,6,7,8 };
//	int arr3[] = { 9,10,11,12 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//			//parr[i]++;
//		}
//		printf("\n");
//	}
//	return 0;
//}



//  3.����ָ�롣�ܹ�ָ�������ָ�롣

//int main()
//{
//	//int* p = NULL;  // p����ָ�룬ָ�����͵�ָ�룬������͵ĵ�ַ
//	//char* pc = NULL; // pc�ַ�ָ�룬ָ���ַ���ָ�룬����ַ��ĵ�ַ
//	// ����ָ�룬ָ�������ָ�룬�������ĵ�ַ
//
//	//int arr[10] = { 0 };
//	// arr����������Ԫ�ص�ַ
//	// &arr[0] ��Ԫ�ص�ַ
//	// &arr ����ĵ�ַ
//
//	//int arr[5] = { 1,2,3,4,5 };
//	//int(*p)[5] = &arr;  // �������arr�ĵ�ַ����Ϊ����ָ�롣int [5]��ʾ�������飬��ԱΪ5����(*p)��ʾ��ŵ�ַ
//	// p��������ָ�롣
//
//	char arr[7] = "abcdef";
//	char(*p)[7] = &arr; // ������arr�ĵ�ַ����������ָ�����p��
//	return 0;
//}

//int* p1[10];  //���ʾָ�����飬��Ϊ[]�Ľ���Դ���*������p1��ϣ���ʾΪһ�����飬���ָ�������
//int(*p2)[10]; // ���ʾ����ָ�룬������(*p2)��ʹ*��p2��ϣ���ʾһ��ָ�룬����[10]��ʾ��� �����ԱΪ10 ��ָ��



//int main()
//{
	//char* arr[5]; // �ַ�ָ������
	// ����ַ�ָ������� ����ָ��
	//char* (*pa)[5] = &arr;
	//(*pa)��pa��ָ���������*�Ǳ���pa��ָ�롣char* ��ʾָ��ָ���������char* ��[5]��ʾָ��ָ��������飬������5��Ԫ��
	//printf("%p", pa);

	/*int* arr[10] = {NULL};
	int* (*p)[10] = &arr;
	printf("%p ", p);*/

	//int arr1[5] = { 0 };
	//int arr2[5] = { 0 };
	//int* p1[2] = { &arr1, &arr2 };  // ָ������,���ָ�������
	//int(*parr1)[5] = &arr1; // ����ָ�룬��������ַ��ָ��
	//int* (*p2)[2] = &p1;  // ����ָ�룬��� ָ������ĵ�ַ��ָ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	//for (i = 0; i < 10; i++)  // ��ӡ�������ݣ�������ָ��
//	//{
//	//	printf("%d ", (*pa)[i]);
//	//}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa + i));  // *pa���൱��arr
//	}
//	return 0;
//}


//       ����ָ���÷�,һ�����ڶ�ά��������
//void dy_sz1(int arr[3][5], int hang, int lie) //��ӡ��ά����,����һ ��������������ʽ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void dy_sz2(int(*arr)[5], int hang, int lie)  // ����������ָ����ʽ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < hang; i++)
//	{
//		for (j = 0; j < lie; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//			// printf("%d ", (*(arr + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	dy_sz1(arr,3,5);  // ��ӡ��ά���顣
//	// arr��Ԫ�ص�ַ����Ԫ��Ϊ {1,2,3,4,5} �ڶ���Ԫ��Ϊ{2,3,4,5,6} ������Ԫ��Ϊ{3,4,5,6,7}��
//	// Ҳ����˵arrΪ{1,2,3,4,5}�ĵ�ַ
//	
//	// ����һ�ְ汾
//	dy_sz2(arr, 3, 5);
//	return 0;
//}


// int(*parr[10])[5]; // parr��һ�����飬�����Ա��10����ÿһ����Ա��һ������ָ�룬��ָ�������Ϊ������5����Ա�����顣
// int(*parr[9])[4]; ����һ������parr����Ա9����ÿ����ԱΪ����ָ�룬ÿ����Աָ��һ����ԱΪ4����������
// char(*parr[5])[14];



//    4.���鴫�Ρ�ָ�����

//   һά���鴫��
//void test1(int arr[])
//{
//	//  �����Ӵ��ο���
//}
//void test1(int arr[10])
//{
//	//  �����Ӵ��ο���
//}
//void test1(int* arr)
//{
//	//  �����Ӵ��ο���
//}
//void test2(int* arr[10])
//{
//	//  �����Ӵ��ο���
//}
//void test2(int** arr)
//{
//	//  �����Ӵ��ο���
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* parr[10] = { 0 };
//	test1(arr);
//	test2(parr);
//	return 0;
//}


// ��ά���鴫��

//void test(int arr[3][5])
//{
//	// �����Ӵ��ο���
//}
//void test(int arr[][5])
//{
//	// �����Ӵ��ο��ԡ�ʡ���У�������ʡ����
//}
//void test(int(*arr)[5])  // �����������Ԫ�ص�ַ���Ǳ�ʾ��һ�е����顣�������ĵ�ַ��������ָ�롣
//{
//	// �����Ӵ��ο���
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr); //��ά���鴫��
//	return 0;
//}
// ��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡���Ϊ��һ����ά���飬���Բ�֪���ж����У�������֪��һ�ж���Ԫ�ء������ӷ�������



//  1��ָ�봫��
//#include <stdio.h>
//void dayin(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* parr = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	dayin(parr, sz);
//	return 0;
//}

// 2��ָ�봫��

//void test(int** p)
//{
//	printf("%d ", **p);
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	int** p2 = &p1;
//	test(p2);
//	test(&p1);
//	int* arr[10];
//	test(arr); // Ҳ ok
//	return 0;
//}


//   ����ָ�롣ָ������ָ�롣Ҳ���Ǵ�ź�����ַ��ָ��

//#include <stdio.h>
//void test()
//{
//	printf("�Ǻ�\n");
//}
//int sum(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", test);   // ��ӡ�����ĵ�ַ
//	printf("%p\n", &test);  // ��ӡ�����ĵ�ַ
//	return 0;
//}
// ����������ǿ�����&������ �� ������ ���������ĵ�ַ

// ��δ�ź����ĵ�ַ�أ�
//int main()
//{
//	void (*p)() = test;    // �ú���ָ���������ź����ĵ�ַ
//	int(*psum)(int, int) = sum;   // �ú���ָ���������ź����ĵ�ַ
//
//	// �ú���ָ�룬ʹ�ú���
//	(*p)();
//	printf("%d ", (*psum)(5, 3));  // *�Ӻ���ָ�������������������ڴ����������
//	return 0;
//}


// (*(void(*)())0)();
// void(*)()��һ������ָ�����ͣ����������� (void(*)()) ��ʾǿ������ת����
// (void(*)())0 ������0������ǿ��ת���ɺ���ָ�����͡���0���ɺ�����ַ��
//  Ȼ��*�����õ���0��ַ���ĺ�����(*(void(*)())0)()��
//  �ܵ���˵��������˼�ǣ���0ǿ��ת����һ��������ֵΪ�� �޲����ĺ��� ָ�����͡�
//    Ȼ��*�����ã����ʵ�ַΪ0���ķ���ֵΪ�� �޲����ĺ�����
// 
// 
// void (*signal(int, void(*)(int)))(int);
//  ������Ϊsignal��������������һ��������int����һ���Ǻ���ָ������void(*)(int),
//  �Ѻ������Ͳ���ȥ����ʣ�µı�ʾ�����ķ������͡�void (*) (int)��ʾ����ָ�����ͣ����Ժ���signal�ķ��������Ǻ���ָ�롣
// �ܵ���˵����������һ��������������signal����������Ϊint���ͺ�void(*)(int)����ָ�����͡����������Ǻ���ָ��void (*) (int)
// void (*signal(int x, void(*p)(int a)))(int z)
// ��������д̫�����ˣ���һ��
//typedef void(*pfun_t)(int);  // ��void (*) (int)����ָ�����ͣ�������Ϊpfun_t
//pfun_t signal(int, pfun_t);  // �����


//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int, int) = add;
//	printf("%d \n", (p)(5, 9));  // ֱ��ͨ����ַ����
//	printf("%d \n", (*p)(5, 9));  // �����ú����
//	printf("%d \n", (**p)(5, 9)); // ���*Ҳû������
//	printf("%d \n", (***p)(5, 9));
//	// ������뿴������ӡ�ĴεĽ����һ����
//	return 0;
//}



//  ����ָ�����顣��ź���ָ������顣Ҳ����������������Ķ��Ǻ����ĵ�ַ

//#include <stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int(*padd)(int, int) = add;   // ��ź����ĵ�ַ������ָ��
//	int(*p[4])(int, int) = { add,sub,mul,div };  // ��������ָ�����飬���4��������ַ
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%p ", p[i]);  // ��ӡ��������
//		printf("%d\n", p[i](10, 5));  // ���ε��������к���
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//// дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*) = my_strcpy;
//// дһ������ָ�����飬���4��my_strcpy������ַ
//char* (*pfarr[4])(char*, const char*) = {my_strcpy};




// ����ָ��������;��ת�Ʊ�
// ���ӣ�������
//#include <stdio.h>
//void menu()
//{
//	printf("***************************************\n");
//	printf("**********-��ӭʹ�ü�����**************\n");
//	printf("*********-1.�ӷ�    2.����*************\n");
//	printf("**********3.�˷�    4.����*************\n");
//	printf("**********     0.�˳�     *************\n");
//	printf("***************************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������Ҫ�������������");
//	scanf("%d%d", &x, &y);
//	return p(x, y);
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = calc(add);  //  �ص�����
//			printf("���Ϊ��%d\n", ret);
//			break;
//		case 2:
//			ret = calc(sub);
//			printf("���Ϊ��%d\n", ret);
//			break;
//		case 3:
//			ret = calc(mul);
//			printf("���Ϊ��%d\n", ret);
//			break;
//		case 4:
//			ret=calc(div);
//			printf("���Ϊ��%d\n", ret);
//			break;
//		case 0:
//			printf("�����˳���\n");
//			break;
//		default:
//			printf("��������ȷ��ֵ\n");
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[5])(int, int) = { 0,add,sub,mul,div };  // �ú���ָ������
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("������Ҫ��������֣�");
//			scanf("%d%d", &x, &y);
//			printf("���Ϊ��%d\n", pfarr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("�������\n");
//		}
//		else
//			printf("ѡ�����\n");
//	} while (input);
//	return 0;
//}


// ָ����ָ������� ָ�롣
// һ��ָ��ָ��һ�����飬��������Ԫ�ض��Ǻ���ָ��

//#include <stdio.h>

//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*parr[])(int, int) = { add,sub };  // ����ָ������
//	int(*(*p)[])(int, int) = &parr; // ָ����ָ�������ָ��
//	// p��һ������ָ�룬ָ��һ�����飬��������ĳ�ԱΪ ����ָ�����͡�
//	return 0;
//}




// �ص�����
// �ص���������ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ��
// ���Ǿ�˵���ǻص��������ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���
// ������������Ӧ��

//  ˵���˾��ǰ� ������ַ ��Ϊһ�������Ĳ�����ͨ��������ַȥ������һ�������������õĺ�������Ϊ�ص�������

//void dayin(char* str)
//{
//	printf("������%s", str);
//}
//void test(void(*p)(char*))
//{
//	p("��Һ�");  // ͨ��������ַ�����ú���
//}
//int main()
//{
//	test(dayin);
//	return 0;
//}



// ð������
#include <stdio.h>

//void paixv(int arr[], int sz)  // ð�����򣬵�ֻ���������͡�
//{
//	for (int j = 0; j < sz-1; j++)
//	{
//		int i = 0;
//		for (i = 0; i < sz -1-j; i++)
//		{
//			int tmp = 0;
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[10];
//	int age;
//};
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,54,6,4,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	paixv(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	struct stu s[3] = { {"����",12},{"�Ż�",18},{"��ǿ",9} };  // �ṹ������
//	return 0;
//}




//   ����  void*ָ��
//int main()
//{
//	int a = 10;
//	//int* pa = &a;  // aΪ���ͣ����Խ���a��ָ��Ϊint*����
//	//char* pc = &a; // ��char* ����ָ�� ���Խ���a�ĵ�ַ������ָ��ֻ�ܷ���1�ֽ�����
//
//	// void* ���͵�ָ�룬���Խ����������͵ĵ�ַ��void ��Ϊ�ޣ��գ�û���������ơ�void* ���Խ����������͵�ָ��
//	void* pv = &a;
//	// *pv = 8;    //  void* ���͵�ָ�벻�ܽ��н����á���Ϊ��֪�����ͣ�Ҳ�Ͳ�֪�����ʶ����ڴ�ռ䡣
//	// ��ȻҲ����pv++��void*���͵�ָ��Ҳ���ܽ��мӼ�����
//	return 0;
//}





//   qsort�������������������飬�ṹ�����飬����������ȵȸ�������
// #include <stdlib.h>
//struct stu
//{
//	char name[10];
//	int age;
//};
//int zsbj(const void* e1, const void* e2) // �Ƚ�������С
//{
//	// void* ����ָ�벻�ܽ����á�������ǿ������ת����Ȼ������� *(int*)e1���Ͼ�����֪����������ǱȽ������ġ�
//	return (*(int*)e1 - *(int*)e2);  // e1����e2���ش���0������e1С��e2����С��0������e1����e2����0��
//}
//int fdsbj(const void* e1, const void* e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//}
//int jgtbj(const void* e1, const void* e2)
//{
//	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
//}
//int main()
//{
//	/*int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), zsbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//
//	// �Ÿ�������С
//	/*float f[] = {6.2,4.2,9.4,7.1,1.2,4.1,5.4,1.9,3.7};
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), fdsbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f   ", f[i]);
//	}*/
//
//
//	// ����ṹ���ڲ���Ա��С
//	struct stu s[3] = { {"����",12},{"�Ż�",18},{"��ǿ",9} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]),jgtbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//		printf("%d ", s[i].age);
//		printf("\n");
//	}
//	return 0;
//}


//  дһ���Լ���qsort������
//void jiaohuan(char* c1,char* c2,int szd)
//{
//	for (int i = 0; i < szd; i++)
//	{
//		char tmp = 0;
//		tmp = *(c1+i);
//		*(c1+i) = *(c2+i);
//		*(c2+i) = tmp;
//	}
//}
//void my_qsort(void* base, int sz, int szd, int(*p)(const void*, const void*))
//{
//	// base������Ԫ�ص�ַ��sz�����С��szd����һ��Ԫ�ش�С��int(*p)(const void* e1, const void* e2)������ñȽϺ����ĵ�ַ
//	for (int i = 0; i < sz - 1; i++) // �Ƚϵ�����
//	{
//		for (int j = 0; j < sz - 1 - i; j++) // ÿ�ˣ���Ԫ�صıȽ�
//		{
//			// base ��û�����͵ĵ�ַ�����ܽ����á�ǿ������ת��Ϊ����һ���ֽڵ�char*��Ȼ�����szdÿ��Ԫ�صĴ�С��
//			// �ʹ���������������Ԫ�صĵ�ַ�ˡ�
//			if (p((char*)base + j*szd,(char*)base + (j+1) * szd) > 0)  
//			{
//				jiaohuan((char*)base + j * szd, (char*)base + (j + 1) * szd,szd);  // ����
//			}
//		}
//	}
//}
//int main()
//{
//	/*float f[] = { 1.2,5.2,7.1,3.1,2.4,6.3,9.2,8.4 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	my_qsort(f, sz, sizeof(f[0]), fdsbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}*/
//
//	struct stu s[3] = { {"����",12},{"�Ż�",18},{"��ǿ",9} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(s[0]),jgtbj);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s ", s[i].name);
//		printf("%d ", s[i].age);
//		printf("\n");
//	}
//	return 0;
//}


