#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
// 数组是一组相同类型元素的集合。
//int main()
//{
//	// 创建一个数组，存放整型10个。
//	int arr[10];
//	char zf[5];  // []中要输入常量。不能输变量
//	// 数组初始化是指，在创建数组的同时，给数组的内容一些合理的初始值。
//	int arr1[10] = { 1,2,3 }; // 不完全初始化。剩下的元素默认添加0
//	char zd1[5] = "adc";
//	char zfc[] = "wadsfawfxc"; // 当[]中没有常量指定数组大小时。必须要初始化，根据初始化确定数组大小。
//	printf("%d\n", sizeof(zfc)); // 
//	printf("%d\n", strlen(zfc)); // 
//	//sizeof计算变量、数组、类型所占空间大小。strlen只能计算字符串长度。两个没有什么关联。
//	//strlen是库函数，使用要引头文件。sizeof是操作符。
//	return 0;
//}

//char arr1[] = "abc";
//char arr2[] = { 'a','b','c' };
//printf("%d\n", sizeof(arr1));  输出结果是4
//printf("%d\n", sizeof(arr2));            3
//printf("%d\n", strlen(arr1));            3
//printf("%d\n", strlen(arr2));            随机值，因为arr2没有'\0'，没有字符串结束标志。


//     一维数组的使用
// 在[]中输入数组的下标，引用数组中某个元素。

//#include <stdio.h>
//
//int main()
//{
//	//char zf[] = "abcdefg";
//	////printf("%c\n", zf[2]);
//	//for (int i = 0; i < (int)strlen(zf); i++)  // strlen 返回的是一个无符号的数。强制类型转换一下
//	//	printf("%c\n", zf[i]);
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//		printf("%d\n", arr[i]);
//	return 0;
//}


// 一维数组在内存中的存储
//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);  // 打印地址用%p
//		//数组中相邻两元素之间的地址相差4。因为每个元素为整型，所占4个字节。数组中元素是连续存放。
//	}
//	return 0;
//}



//  二维数组的创建和初始化。

//#include <stdio.h>

//int main()
//{
	//int arr[3][4];  // 创建二维数组，3行4列。
	//int sw[2][2][2]; // 三维数组。
	//int arr1[3][5] = { {0,1,2,78,95},{0,4,8,7,3},{45,57,65,41,74} };  // 二位数组的初始化。
	//int sw[2][2][2] = { {{24,54},{54,74}},{{4,5},{7,9}} };

	//二维数组创建的时候，[]中数字，行可以省略，列不能省略。

	//printf("%d ", arr1[2][3]); // 访问元素，通过下标来访问。
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

// 二维数组 在内存中的存储。

//#include <stdio.h>
//int main()
//{
//	int arr[2][5] = { {5,4,7},{1,2,3,4} };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%p ", &arr[i][j]);   // 二位数组中元素，在内存中存储一样是连续的
//		}
//		printf("\n");
//	}
//	return 0;
// }



//   数组作为函数参数
#include <stdio.h>


//void paixu(int* x,int a)  // 冒泡排序
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
//		int flag = 1; // 假设本次排序有序。
//		int tmp = 0;
//		for (int j = 0; j < a - 1 - i; j++)
//		{
//			if (x[j] > x[j + 1])
//			{
//				tmp = x[j+1];
//				x[j + 1] = x[j];
//				x[j] = tmp;
//				flag = 0; // 本次排序的数据不完全有序
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
//	// 对数组进行排序，排成升序。
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (int i = 0; i < sz - 1; i++)
//	//{
//	//	paixu(&arr, sz);         // 数组在进行函数传参的时候，传的是首元素地址。
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
//	// 数组名就是首元素的地址。  
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);  // 得到的是数组地址，从哪里开始。
//	printf("%p\n", &arr+1);
//	// 但有两个例外：
//	//1.在sizeof内部。sizeof(arr)这样子，里面的数组名表示整个数组。
//	//2.取地址时。&arr 这样子。数组名代表整个数组。
//	return 0;
//}

