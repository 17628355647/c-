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
//	printf("请输入行数：");
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
//	printf("请输入字符串：");
//	//scanf("%s", a);
//	gets(a);  // gets 读取一行
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
//	printf("请输入a的值和b的值：");
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
//			printf("%d为自幂数\n",i);
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


// 喝汽水问题。1瓶汽水1元，2个空瓶可以换一瓶汽水。给20元，可以换多少汽水。

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
//	printf("请输入多少钱：");
//	scanf("%d", &yuan);
//	ret = hqs(yuan);
//	printf("%d\n", ret);
//	return 0;
//}


// 把数组中奇数放在前，偶数放在后
//#include <stdio.h>
//
//void jiaohuan(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right)
//	{
//		while ((left <right) && arr[left] % 2 != 0)  // 找偶数
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0) // 找奇数
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
//	// char类型整数，只能存-128到127的数字。所以给a[i] 赋值时。先赋-1然后赋到-128，后赋值127，然后赋到0，在赋-1这循环赋值
//	printf("%d\n", strlen(a)); // strlen求字符串长度，到'\0'就停止，所以当读取到0时，就停止了，长度输出255。
//	return 0;
//}



//  打印杨辉三角
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
//			printf("killer 是 %c", killer);
//			break;
//		}
//	}
//	return 0;
//}



// 有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中前三名。
// 请问最少比赛几次？ 8次
// 36匹马，分6组，比赛出每一组的名次。比赛了6次。然后把各组的第一名6匹马，再比赛一次，决出前三名。比赛了7次。
// 最后最后把第一名所属组的前三名，第二名所属组的前二名，第三名所属组的第一名，比赛一次。即可知道36匹马中前三名。总比赛8次。

// 有25匹马，5个跑道，没有计时器，请赛马确定，25匹马中前三名。
// 请问最少比赛几次？  7次


// 有一种香，材质不均匀，但是每一根这样的香 燃烧完刚好是1小时
// 给你两根香，帮我确定一个15分钟的时间段。
//首先，同时把1只香点燃两头，另外1只香点燃一头。
// 这样子点燃两头的香燃烧完，就是30分钟，再把另外一只香点燃另一头，这样子另外一支香烧完也就是15分钟。



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
//	int* p = (int*)malloc(10 * sizeof(int));  // malloc向内存申请40字节大小的空间
//	free(p);  // 释放空间
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
//	printf("%d,%d\n", *(p1 - 1), *(p2 - 1));  // 打印 1,6
//	return 0;
//}


// 实现一个函数，可以左旋字符串中k个字符。
//#include <string.h>
//#include <assert.h>
//void zuoxuan(char* a,int len, int k)  // 实现字符串左旋
//{
//	char* x = a;
//	printf("%s", a + k);
//	for (; a < x + k; a++)
//	{
//		printf("%c", *a);
//	}
//}
//void zuoxuan(char* a, int k)  // 暴力求解法。
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

// 三步翻转法。先前后各自翻转，然后整体翻转。
// ab cdef -> ba fedc -> cdefab
//void nixv(char* x, char* y)  // 逆序字符串
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
//	char* zhong = a + k-1;  // 中间的地址
//	char* hou = a + strlen(a) - 1; // 字符串后端的地址
//	nixv(a, zhong);
//	nixv(zhong + 1, hou);
//	nixv(a, hou);
//}
//
//int main()
//{
//	char zf[] = "ABCDEFG";
//	int k = 0;
//	printf("字符串为：%s\n", zf);
//	printf("请输入左旋个数：");
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
//	int ret = check_zf(arr1, arr2); // 检查字符串是否为逆序，是返回1，否返回0
//	if (ret == 1)
//	{
//		printf("是\n");
//	}
//	else
//		printf("不是\n");
//	return 0;
//}

// strcat函数。用于字符串追加。strcat(str1,str2)把字符串str2中内容追加到str1中。实现方式就是把str12中首元素，赋给str1的 '\0'，
// 然后依次赋给str1，直到把str2中'\0'赋给str1就停止。因此，strcat函数不能用于自己给自己追加，因为'\0'被首元素替代了，就会一直追加，
// 不会停下。
// srtncat(str1,str2,n)把str2中n个元素追加给str1。这样子限定了追加个数，程序就不会崩溃。也可用于自己给自己追加。
// strstr(str1,str2) 找子串函数。找出str1中是否包含str2。找到了返回str2的首元素地址。找不到返回空指针。



#include <stdio.h>

// 杨氏矩阵。有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
// 时间复杂度小于o(N)。

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
//	printf("请输入查找的数：");
//	scanf("%d", &n);
//	/*int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			if (n == arr[i][j])
//			{
//				printf("找到了\n");
//				return 0;
//			}
//		}
//	}
//	printf("没有找到\n");*/
//
//// 通过比较右上角的元素。若右上角元素大于要找到数，那右上角那一列，就可以排除。若右上角元素小于要找的数，那右上角那一行就可以排除。
//	int ret = chazhao(arr, n,&x,&y);  // 找到返回1，没有找到返回0
//	if (ret == 1)
//	{
//		printf("找到了,地址为%d行 %d列\n",x+1,y+1);
//	}
//	else
//		printf("没有找到\n");
//	return 0;
//}

// 想要通过函数改变多个值，传入地址，进行修改。


