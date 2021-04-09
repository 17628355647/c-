#pragma once
#define hang 3
#define lie 3
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void cshqp(char x[hang][lie], int a, int b);
void dyqp(char x[hang][lie],int a,int b);
void wjxq(char x[hang][lie], int a, int b);
void dnxq(char x[hang][lie], int a, int b);



// 玩家赢(*)、电脑赢(#)、平局(q)或继续(c)
char ying(char x[hang][lie],int a,int b);

//判断棋盘是否下满
int man(char x[hang][lie], int a, int b);