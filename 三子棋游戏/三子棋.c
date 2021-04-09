#define _CRT_SECURE_NO_WARNINGS 1
#include "游戏头文件.h"
void menu()
{
	printf("*********************************************\n");
	printf("**************1.开始    0.退出***************\n");
	printf("*********************************************\n");
}
void szq_w()
{
	int ret = 0;
	// 创建数组，存放走出的棋盘信息
	char qipan[hang][lie] = { 0 };
	// 初始化棋盘
	cshqp(qipan, hang, lie);
	// 打印棋盘
	dyqp(qipan,hang,lie);
	// 下棋
	while (1)
	{
		// 玩家下棋
		wjxq(qipan,hang,lie);
		dyqp(qipan, hang, lie);
		// 判断玩家是否赢
		ret=ying(qipan,hang,lie);
		if (ret != 'c')
		{
			break;
		}
		// 电脑下棋
		dnxq(qipan, hang, lie);
		dyqp(qipan, hang, lie);
		// 判断电脑是否赢
		ret=ying(qipan,hang,lie);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("恭喜你赢了！\n");
	}
	else if (ret == '+')
	{
		printf("很遗憾你输了\n");
	}
	else
		printf("平局\n");
}

void szq_kj()
{
	int shuru = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择（只能输入数字）：");
		scanf("%d", &shuru);
		switch (shuru)
		{
		case 1:
			printf("三子棋开始！\n");
			szq_w();
			break;
		case 0:
			printf("退出三子棋！\n");
			break;
		default:
			printf("输入错误！重新选择。\n");
			break;
		}
	} while (shuru);
}
int main()
{
	szq_kj();
	return 0;
}