#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	unsigned long arr[] = { 6,7,8,9,10 };
//	unsigned long* pa = arr;
//	*(pa + 3) += 3;
//	printf("%d,%d\n", *pa, *(pa + 3));  // 6,12
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	printf("������������");
//	scanf("%d", &line);
//	line++;
//	int i = 0;
//	for (i = 1; i < line; i++)
//	{
//		int j = 0;
//		int k = 0;
//		for (j = 1; j < line-i; j++)
//		{
//			printf("  ");
//		}
//		for (k = 1;k<i*2; k++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (i = line-2; i >= 1; i--)
//	{
//		int j = 0;
//		int k = 0;
//		for (j = 1; j < line - i; j++)
//		{
//			printf("  ");
//		}
//		for (k = 1; k < i * 2; k++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <assert.h>
//void nixv(char* p)
//{
//	assert(p);
//	int x = strlen(p);
//	char* p1 = p;
//	char* p2 = p + x-1;
//	while (p1 < p2)
//	{
//		char tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2--;
//	}
//}
//
//int main()
//{
//	char a[256] = {0};
//	printf("�������ַ�����");
//	//scanf("%s", a);
//	gets(a);  // gets ��ȡһ��
//	nixv(a);
//	printf("%s", a);
//	return 0;
//}


//int sum(int a, int i)
//{
//	if (i == 1)
//		return a;
//	else
//	{
//		return a +sum(a * 10,i-1);
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int Sn = 0;
//	printf("������a��ֵ��b��ֵ��");
//	scanf("%d%d", &a,&b);
//	for (int i = 1; i <= b; i++)
//	{
//		Sn += sum(a, i);
//		printf("%d\n", sum(a, i));
//	}
//	printf("Sn=%d\n", Sn);
//	return 0;
//}


//int ws(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		count++;
//		a = a / 10;
//	}
//	return count;
//}
//int cf(int a, int wei)
//{
//	if (wei == 1)
//		return a;
//	return a * cf(a, wei - 1);
//}
//int mwh(int a)
//{
//	int tmp = 0;
//	int wei = ws(a);
//	for (int i = 0; i < wei; i++)
//	{
//		tmp += cf(a % 10, wei);
//		a = a / 10;
//	}
//	return tmp;
//}
//int main()
//{
//	for (int i = 1; i <= 100000; i++)
//	{
//		if (i == mwh(i))
//			printf("%dΪ������\n",i);
//	}
//	return 0;
//}


//struct s
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct s a, * p = &a;
//	a.a = 99;
//	printf("%d\n", (*p).a);
//}


// ����ˮ���⡣1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ի�������ˮ��

//#include <stdio.h>
//int hqs(int x)
//{
//	int kp = x;
//	int count = x;
//	while (kp >= 2)
//	{
//		/*kp = kp -2;
//		count++;
//		kp++;*/
//		count += kp / 2;
//		kp = kp / 2 + kp % 2;
//	}
//	return count;
//}
//int main()
//{
//	int yuan = 0;
//	int ret = 0;
//	printf("���������Ǯ��");
//	scanf("%d", &yuan);
//	ret = hqs(yuan);
//	printf("%d\n", ret);
//	return 0;
//}


// ����������������ǰ��ż�����ں�
//#include <stdio.h>
//
//void jiaohuan(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left <right) && arr[left] % 2 != 0)  // ��ż��
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0) // ������
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,22,31,45,62,75,71,90,80,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	jiaohuan(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	// char����������ֻ�ܴ�-128��127�����֡����Ը�a[i] ��ֵʱ���ȸ�-1Ȼ�󸳵�-128����ֵ127��Ȼ�󸳵�0���ڸ�-1��ѭ����ֵ
//	printf("%d\n", strlen(a)); // strlen���ַ������ȣ���'\0'��ֹͣ�����Ե���ȡ��0ʱ����ֹͣ�ˣ��������255��
//	return 0;
//}



//  ��ӡ�������
//#include <stdio.h>
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer �� %c", killer);
//			break;
//		}
//	}
//	return 0;
//}



// ��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ����ǰ������
// �������ٱ������Σ� 8��
// 36ƥ����6�飬������ÿһ������Ρ�������6�Ρ�Ȼ��Ѹ���ĵ�һ��6ƥ���ٱ���һ�Σ�����ǰ������������7�Ρ�
// ������ѵ�һ���������ǰ�������ڶ����������ǰ������������������ĵ�һ��������һ�Ρ�����֪��36ƥ����ǰ�������ܱ���8�Ρ�

// ��25ƥ��5���ܵ���û�м�ʱ����������ȷ����25ƥ����ǰ������
// �������ٱ������Σ�  7��


// ��һ���㣬���ʲ����ȣ�����ÿһ���������� ȼ����պ���1Сʱ
// ���������㣬����ȷ��һ��15���ӵ�ʱ��Ρ�
//���ȣ�ͬʱ��1ֻ���ȼ��ͷ������1ֻ���ȼһͷ��
// �����ӵ�ȼ��ͷ����ȼ���꣬����30���ӣ��ٰ�����һֻ���ȼ��һͷ������������һ֧������Ҳ����15���ӡ�



//#include <stdio.h>
//int main()
//{
//	int A = 0, B=0, C=0, D=0, E=0;
//	int i = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		A = i;
//		int j = 0;
//		for (j = 1; j <= 5; j++)
//		{
//			B = j;
//			int k = 0;
//			for (k = 1; k <= 5; k++)
//			{
//				C = k;
//				int x = 0;
//				for (x = 1; x <= 5; x++)
//				{
//					D = x;
//					int y = 0;
//					for (y = 1; y <= 5; y++)
//					{
//						E = y;
//						if (((B == 2) + (A == 3) == 1) && ((B == 2) + (E == 4) == 1) && ((C == 1) + (D == 2) == 1) && ((C == 5) + (D == 3) == 1) && ((E == 4) + (A == 1) == 1))
//						{
//							if (((A + B + C + D + E) == 15) && ((A*B*C*D*E) ==120))
//							{
//								printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));  // malloc���ڴ�����40�ֽڴ�С�Ŀռ�
//	free(p);  // �ͷſռ�
//	return 0;
//}


//int (*(*p)(int, int))(int);rt


//int(*(*p)[10])(int*);

//void(*p)(int, char*);

//#include <stdio.h>

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* p1 = (int*)(&aa + 1);
//	int* p2 = (int*)(*(aa + 1));
//	printf("%d,%d\n", *(p1 - 1), *(p2 - 1));  // ��ӡ 1,6
//	return 0;
//}


// ʵ��һ�����������������ַ�����k���ַ���
//#include <string.h>
//#include <assert.h>
//void zuoxuan(char* a,int len, int k)  // ʵ���ַ�������
//{
//	char* x = a;
//	printf("%s", a + k);
//	for (; a < x + k; a++)
//	{
//		printf("%c", *a);
//	}
//}
//void zuoxuan(char* a, int k)  // ������ⷨ��
//{
//	assert(a != NULL);
//	char* p = a;
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = *a;
//		while (*(a+1))
//		{
//			*a = *(a + 1);
//			a++;
//		}
//		*a = tmp;
//		a = p;
//	}
//}

// ������ת������ǰ����Է�ת��Ȼ�����巭ת��
// ab cdef -> ba fedc -> cdefab
//void nixv(char* x, char* y)  // �����ַ���
//{
//	assert(x);
//	assert(y);
//	char tmp = 0;
//	while (x < y)
//	{
//		tmp = *x;
//		*x = *y;
//		*y = tmp;
//		x++;
//		y--;
//	}
//}
//void zuoxuan(char* a,int k)
//{
//	assert(a);
//	assert(k <= 7);
//	char* zhong = a + k-1;  // �м�ĵ�ַ
//	char* hou = a + strlen(a) - 1; // �ַ�����˵ĵ�ַ
//	nixv(a, zhong);
//	nixv(zhong + 1, hou);
//	nixv(a, hou);
//}
//
//int main()
//{
//	char zf[] = "ABCDEFG";
//	int k = 0;
//	printf("�ַ���Ϊ��%s\n", zf);
//	printf("����������������");
//	scanf("%d", &k);
//	zuoxuan(zf,k);
//	printf("%s\n", zf);
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int check_zf(char* arr1, char* arr2)
//{
//	int len = strlen(arr1)/2;
//	while (*arr1)
//	{
//		if (*arr1 == *arr2)
//		{
//			int i = 0;
//			while (*arr1 == *arr2)
//			{
//				i++;
//				arr1++;
//				arr2++;
//			}
//			if (i == len)
//				return 1;
//		}
//		arr1++;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "cdefab";
//	int ret = check_zf(arr1, arr2); // ����ַ����Ƿ�Ϊ�����Ƿ���1���񷵻�0
//	if (ret == 1)
//	{
//		printf("��\n");
//	}
//	else
//		printf("����\n");
//	return 0;
//}

// strcat�����������ַ���׷�ӡ�strcat(str1,str2)���ַ���str2������׷�ӵ�str1�С�ʵ�ַ�ʽ���ǰ�str12����Ԫ�أ�����str1�� '\0'��
// Ȼ�����θ���str1��ֱ����str2��'\0'����str1��ֹͣ����ˣ�strcat�������������Լ����Լ�׷�ӣ���Ϊ'\0'����Ԫ������ˣ��ͻ�һֱ׷�ӣ�
// ����ͣ�¡�
// srtncat(str1,str2,n)��str2��n��Ԫ��׷�Ӹ�str1���������޶���׷�Ӹ���������Ͳ��������Ҳ�������Լ����Լ�׷�ӡ�
// strstr(str1,str2) ���Ӵ��������ҳ�str1���Ƿ����str2���ҵ��˷���str2����Ԫ�ص�ַ���Ҳ������ؿ�ָ�롣



#include <stdio.h>

// ���Ͼ�����һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
// ʱ�临�Ӷ�С��o(N)��

//int chazhao(int arr[3][3], int n,int a,int b)
//{
//	int i = 0;
//	int j = b-1;
//	while ((i < a) && (j >= 0))
//	{
//		if (arr[i][j] > n)
//		{
//			j--;
//		}
//		else if (arr[i][j] < n)
//		{
//			i++;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}

//int chazhao(int arr[3][3], int n, int* x, int* y)
//{
//	int tmp = *x;
//	int hang = 0;
//	int lie = *y - 1;
//	*x = 0;
//	*y = lie;
//	while ((hang < tmp) && (lie >= 0))
//	{
//		if (arr[hang][lie] > n)
//		{
//			lie--;
//			(*y)--;
//		}
//		else if (arr[hang][lie] < n)
//		{
//			hang++;
//			(*x)++;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int n = 0;
//	int x = 3;
//	int y = 3;
//	printf("��������ҵ�����");
//	scanf("%d", &n);
//	/*int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			if (n == arr[i][j])
//			{
//				printf("�ҵ���\n");
//				return 0;
//			}
//		}
//	}
//	printf("û���ҵ�\n");*/
//
//// ͨ���Ƚ����Ͻǵ�Ԫ�ء������Ͻ�Ԫ�ش���Ҫ�ҵ����������Ͻ���һ�У��Ϳ����ų��������Ͻ�Ԫ��С��Ҫ�ҵ����������Ͻ���һ�оͿ����ų���
//	int ret = chazhao(arr, n,&x,&y);  // �ҵ�����1��û���ҵ�����0
//	if (ret == 1)
//	{
//		printf("�ҵ���,��ַΪ%d�� %d��\n",x+1,y+1);
//	}
//	else
//		printf("û���ҵ�\n");
//	return 0;
//}

// ��Ҫͨ�������ı���ֵ�������ַ�������޸ġ�


