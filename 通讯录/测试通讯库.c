#define _CRT_SECURE_NO_WARNINGS 1

// 这文件用于测试通讯录
// 通讯库功能：1.存放1000个好友信息（包括名字，年龄，电话，性别，地址）
//             2.增加或删除好友信息。
//             3.查找好友信息。
//             4.修改还有信息。
//             5.打印好友信息
#include "通讯录.h"

void menu()
{
	printf("*****************************************************\n");
	printf("********1.增加                2.删除*****************\n");
	printf("********3.查找                4.修改*****************\n");
	printf("********5.显示好友信息        6.排序好友信息*********\n");
	printf("********           0.退出            ****************\n");
	printf("*****************************************************\n");
}

int main()
{
	int a = 0;
	// 创建通讯录
	struct Contact con;  // con为通讯录。包含1000个元素的数组和size
	// 初始化通讯录
	Initpeople(&con);
	// 
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &a);
		switch (a)
		{
		case 增加:
			ADDpeople(&con);  // 增加成员
			break;
		case 删除:
			Delpeople(&con);  // 删除成员
			break;
		case 查找:
			Searchpeople(&con);
			break;
		case 修改:
			Modifipeople(&con);
			break;
		case 展示通讯录:
			ShowConcat(&con); // 显示好友信息
			break;
		case 排序通讯录:
			Sortpeople(&con);
			break;
		case 退出程序:
			printf("退出\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (a);
	return 0;
}