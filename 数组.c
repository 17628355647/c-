#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
// ������һ����ͬ����Ԫ�صļ��ϡ�
//int main()
//{
//	// ����һ�����飬�������10����
//	int arr[10];
//	char zf[5];  // []��Ҫ���볣�������������
//	// �����ʼ����ָ���ڴ��������ͬʱ�������������һЩ����ĳ�ʼֵ��
//	int arr1[10] = { 1,2,3 }; // ����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�����0
//	char zd1[5] = "adc";
//	char zfc[] = "wadsfawfxc"; // ��[]��û�г���ָ�������Сʱ������Ҫ��ʼ�������ݳ�ʼ��ȷ�������С��
//	printf("%d\n", sizeof(zfc)); // 
//	printf("%d\n", strlen(zfc)); // 
//	//sizeof������������顢������ռ�ռ��С��strlenֻ�ܼ����ַ������ȡ�����û��ʲô������
//	//strlen�ǿ⺯����ʹ��Ҫ��ͷ�ļ���sizeof�ǲ�������
//	return 0;
//}

//char arr1[] = "abc";
//char arr2[] = { 'a','b','c' };
//printf("%d\n", sizeof(arr1));  ��������4
//printf("%d\n", sizeof(arr2));            3
//printf("%d\n", strlen(arr1));            3
//printf("%d\n", strlen(arr2));            ���ֵ����Ϊarr2û��'\0'��û���ַ���������־��


//     һά�����ʹ��
// ��[]������������±꣬����������ĳ��Ԫ�ء�

//#include <stdio.h>
//
//int main()
//{
//	//char zf[] = "abcdefg";
//	////printf("%c\n", zf[2]);
//	//for (int i = 0; i < (int)strlen(zf); i++)  // strlen ���ص���һ���޷��ŵ�����ǿ������ת��һ��
//	//	printf("%c\n", zf[i]);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//		printf("%d\n", arr[i]);
//	return 0;
//}


// һά�������ڴ��еĴ洢
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);  // ��ӡ��ַ��%p
//		//������������Ԫ��֮��ĵ�ַ���4����Ϊÿ��Ԫ��Ϊ���ͣ���ռ4���ֽڡ�������Ԫ����������š�
//	}
//	return 0;
//}



//  ��ά����Ĵ����ͳ�ʼ����

//#include <stdio.h>

//int main()
//{
	//int arr[3][4];  // ������ά���飬3��4�С�
	//int sw[2][2][2]; // ��ά���顣
	//int arr1[3][5] = { {0,1,2,78,95},{0,4,8,7,3},{45,57,65,41,74} };  // ��λ����ĳ�ʼ����
	//int sw[2][2][2] = { {{24,54},{54,74}},{{4,5},{7,9}} };

	//��ά���鴴����ʱ��[]�����֣��п���ʡ�ԣ��в���ʡ�ԡ�

	//printf("%d ", arr1[2][3]); // ����Ԫ�أ�ͨ���±������ʡ�
	/*for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d  ", arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

// ��ά���� ���ڴ��еĴ洢��

//#include <stdio.h>
//int main()
//{
//	int arr[2][5] = { {5,4,7},{1,2,3,4} };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%p ", &arr[i][j]);   // ��λ������Ԫ�أ����ڴ��д洢һ����������
//		}
//		printf("\n");
//	}
//	return 0;
// }



//   ������Ϊ��������
#include <stdio.h>


//void paixu(int* x,int a)  // ð������
//{
//	
//	for (int i = 0; i < a - 1; i++)
//	{
//		int tmp = 0;
//		if (*x > *(x + 1))
//		{
//			tmp = *(x + 1);
//			*(x + 1) = *x;
//			*x = tmp;
//		}
//		x++;
//	}
//}
//void paixu(int x[], int a)
//{
//	for (int i = 0; i < a - 1; i++)
//	{
//		int flag = 1; // ���豾����������
//		int tmp = 0;
//		for (int j = 0; j < a - 1 - i; j++)
//		{
//			if (x[j] > x[j + 1])
//			{
//				tmp = x[j+1];
//				x[j + 1] = x[j];
//				x[j] = tmp;
//				flag = 0; // ������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,9,8,71,6,55,47,3,2 };
//	// ��������������ų�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (int i = 0; i < sz - 1; i++)
//	//{
//	//	paixu(&arr, sz);         // �����ڽ��к������ε�ʱ�򣬴�������Ԫ�ص�ַ��
//	//}
//	paixu(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5 };
//	// ������������Ԫ�صĵ�ַ��  
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);  // �õ����������ַ�������￪ʼ��
//	printf("%p\n", &arr+1);
//	// �����������⣺
//	//1.��sizeof�ڲ���sizeof(arr)�����ӣ��������������ʾ�������顣
//	//2.ȡ��ַʱ��&arr �����ӡ������������������顣
//	return 0;
//}

