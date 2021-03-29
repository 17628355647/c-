#define _CRT_SECURE_NO_WARNINGS 1

// 语句：c语言中由一个 ; 号隔开的就是一条语句
// 分支语句：if 、 switch
// 循环语句：while 、 for 、 do while

// 单分支
// if语句格式：
//	if(表达式)
//		语句;

// 双分支
//	if(表达式)
//		语句;
//	else
//		语句;

// 多分支
//	if(表达式)
//		语句;
//	else if(表达式)   else if 不限个数
//		语句;
//	else
//		语句;


//#include <stdio.h>

//int main()
//{
//	//; // 只有 ; 号， 为空语句
//	int age = 0;
//	printf("请输入你的年龄：");
//	scanf("%d", &age);
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (age >= 18 && age < 28)    // 不能写成  18<=age<28
//	//	printf("青年\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("壮年\n");
//	//else if (age >= 50 && age < 90)
//	//	printf("老年\n");
//	//else
//	//	printf("老老年\n");
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//	if (age >= 18 && age < 28)    // 不能写成  18<=age<28
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	else
//		printf("老老年\n");
//	}
//	return 0;
//}

// if 中语句要是 是代码块，要用{}括起来

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else  // 就算else和第一个if对齐，但else匹配的是第二个if  。输出结果为空。else是匹配离自己最近的未匹配的if。
//		printf("haha\n");
//	return 0;
//}


//  下面的代码是if条件成立返回x，条件不成立返回y。因为一个程序里面只有一个返回值。return代表程序结束，不会在执行了。
//if (条件) {
//	return x;
//}
//return y;

//#include <stdio.h>
//
//int main()
//{
//	int a = 9;
//	if (a == 2) {
//		return 2;
//	}
//	printf("哈哈");
//}

// if中条件尽量写成这样 if(5 == num)  避免犯错。比较常量和变量是否相等，把常量写在左边，变量写在右边。

// 判断一个数是否为奇数，使出100中的奇数

//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	/*while (a <= 100) {
//		if (a % 2 == 1) {
//			printf("%d\n", a);
//		}
//		a += 1;
//	}*/
//	while (a <= 100)
//	{
//		printf("%d\n", a);
//		a += 2;
//	}
//	return 0;
//}



//              switch 分支语句
// 专门用来实现多分支的语句

//switch格式
//switch (整型表达式)   一定要为整型的表达式
//{
//	语句项;
//}
// 语句项，是一些case语句
//case 整型常量表达式：
//	语句;

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//switch (day)   // 通过day的不同决定从哪个case进入。一定要为整型表达式
//	//{
//	//case 1:   //case后面必须接整型常量表达式。整型  常量
//	//	printf("星期1\n");
//	//	break;       // 用break退出。
//	//case 2:
//	//	printf("星期2\n");
//	//	break;
//	//case 3:
//	//	printf("星期3\n");
//	//	break;
//	//case 4:
//	//	printf("星期4\n");
//	//	break;
//	//case 5:
//	//	printf("星期5\n");
//	//	break;
//	//case 6:
//	//	printf("星期6\n");
//	//	break;
//	//case 7:
//	//	printf("星期7\n");
//	//	break;
//	//}
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:   // default 默认选项
//		printf("输入错误！请输入1到7之间的数字");
//		break;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n) {
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)  // switch 允许嵌套
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}



//                                  打印九九乘法表
//#include <stdio.h>
// 
//void hang(int a,int b)
//{
//	while (b <= 9)
//	{
//		if (a * b < 10) {
//			printf("%d X %d = %d", a, b, a * b);
//			b++;
//			printf("       ");
//		}
//		else {
//			printf("%d X %d = %d", a, b, a * b);
//			b++;
//			printf("      ");
//		}
//
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	while (a <= 9)
//	{
//		hang(a, b);
//		a++;
//		b = a;
//	}
//	return 0;
//}


