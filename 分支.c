#define _CRT_SECURE_NO_WARNINGS 1

// ��䣺c��������һ�� ; �Ÿ����ľ���һ�����
// ��֧��䣺if �� switch
// ѭ����䣺while �� for �� do while

// ����֧
// if����ʽ��
//	if(���ʽ)
//		���;

// ˫��֧
//	if(���ʽ)
//		���;
//	else
//		���;

// ���֧
//	if(���ʽ)
//		���;
//	else if(���ʽ)   else if ���޸���
//		���;
//	else
//		���;


//#include <stdio.h>

//int main()
//{
//	//; // ֻ�� ; �ţ� Ϊ�����
//	int age = 0;
//	printf("������������䣺");
//	scanf("%d", &age);
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else if (age >= 18 && age < 28)    // ����д��  18<=age<28
//	//	printf("����\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("׳��\n");
//	//else if (age >= 50 && age < 90)
//	//	printf("����\n");
//	//else
//	//	printf("������\n");
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//	if (age >= 18 && age < 28)    // ����д��  18<=age<28
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	else
//		printf("������\n");
//	}
//	return 0;
//}

// if �����Ҫ�� �Ǵ���飬Ҫ��{}������

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else  // ����else�͵�һ��if���룬��elseƥ����ǵڶ���if  ��������Ϊ�ա�else��ƥ�����Լ������δƥ���if��
//		printf("haha\n");
//	return 0;
//}


//  ����Ĵ�����if������������x����������������y����Ϊһ����������ֻ��һ������ֵ��return������������������ִ���ˡ�
//if (����) {
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
//	printf("����");
//}

// if����������д������ if(5 == num)  ���ⷸ���Ƚϳ����ͱ����Ƿ���ȣ��ѳ���д����ߣ�����д���ұߡ�

// �ж�һ�����Ƿ�Ϊ������ʹ��100�е�����

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



//              switch ��֧���
// ר������ʵ�ֶ��֧�����

//switch��ʽ
//switch (���ͱ��ʽ)   һ��ҪΪ���͵ı��ʽ
//{
//	�����;
//}
// ������һЩcase���
//case ���ͳ������ʽ��
//	���;

//#include <stdio.h>
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//switch (day)   // ͨ��day�Ĳ�ͬ�������ĸ�case���롣һ��ҪΪ���ͱ��ʽ
//	//{
//	//case 1:   //case�����������ͳ������ʽ������  ����
//	//	printf("����1\n");
//	//	break;       // ��break�˳���
//	//case 2:
//	//	printf("����2\n");
//	//	break;
//	//case 3:
//	//	printf("����3\n");
//	//	break;
//	//case 4:
//	//	printf("����4\n");
//	//	break;
//	//case 5:
//	//	printf("����5\n");
//	//	break;
//	//case 6:
//	//	printf("����6\n");
//	//	break;
//	//case 7:
//	//	printf("����7\n");
//	//	break;
//	//}
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:   // default Ĭ��ѡ��
//		printf("�������������1��7֮�������");
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
//		switch (n)  // switch ����Ƕ��
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



//                                  ��ӡ�žų˷���
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


