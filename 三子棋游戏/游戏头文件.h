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



// ���Ӯ(*)������Ӯ(#)��ƽ��(q)�����(c)
char ying(char x[hang][lie],int a,int b);

//�ж������Ƿ�����
int man(char x[hang][lie], int a, int b);