#define _CRT_SECURE_NO_WARNINGS 1

// �ṹ�壺�ṹ����һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ���ÿ����Ա�����ǲ�ͬ���͵ı���

// ����һ��ѧ���Ľṹ�����͡�struct�ṹ��ؼ��֣�student�ṹ���ǩ(�ṹ��������)��struct stduent�ṹ������
//struct student
//{
//	// ��Ա����
//	char name[10];
//	int age;
//	char phone[12];
//	char sex[5];
//}s1,s2,s3;  // s1,s2,s3������ȫ�ֽṹ�����
//typedef struct student  // typedef �������������struct student������λstu
//{
//	// ��Ա����
//	char name[10];
//	int age;
//	char phone[12];
//	char sex[5];
//}stu;    // stu�������������
//int main()
//{
//	//struct student xiaoming; // �����ṹ�����xiaoming���ֲ�����
//	//stu zhanghua;  // �������󣬸��Ӽ��Ĵ�������
//	stu xiaoming = { "С��",12,"12345678945","��" };  // ��ʼ���ṹ�����
//	return 0;
//}


// �ṹ���Ա�����Ǳ��������顢ָ�롢�����������ṹ�塣

//�ṹ������Ķ���ͳ�ʼ��

//struct cheshi
//{
//	int x;
//	int y;
//}p1;   // �������͵�ͬʱ�������p1
//struct cheshi p2; // ����ṹ�����p2
//struct cheshi p3 = {5,6}; // ��ʼ�������������ͬʱ��ֵ

//#include <stdio.h>
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct t
//{
//	char ch[10];
//	struct s s1;  // �ṹ���а����ṹ�����
//	char* pc;
//};
//int main()
//{
//	char a = 'a';
//	struct t t1 = { "hello",{4,'h',"���ͣ�����",5.241},&a };  // ��ʼ���ṹ�����t1
//	printf("%s\n", t1.ch);  // ��ӡ�ṹ������г�Ա
//	printf("%d\n", t1.s1.a);   // ��ӡ�ṹ����Ƕ�׵Ľṹ���Ա
//	printf("%p\n", t1.pc);   
//	return 0;
//}



// �ṹ��������ʳ�Ա����ͨ�����������.�����ʡ�
// ���ṹ��ָ�����ָ������ĳ�Ա����ʱ�����ǵõ��Ĳ���һ���ṹ�����������ָ��һ���ṹ���ָ�롣ͨ��->��ͷ����

//#include <stdio.h>
//typedef struct stu
//{
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;
//void print1(stu s)  // ����������ӡ�ṹ��������ݡ�
//{
//	printf("name:%s\n", s.name);
//	printf("age:%d\n", s.age);
//	printf("tele:%s\n", s.tele);
//	printf("sex:%s\n", s.sex);
//}
//void print2(stu* p)
//{
//	printf("name:%s\n", p->name);  // �����ַ�Ļ������ü�ͷ->ֱ��ָ��Ҫ���ʵĳ�Ա
//	printf("age:%d\n", p->age);
//	printf("tele:%s\n", p->tele);
//	printf("sex:%s\n", p->sex);
//}
//int main()
//{
//	stu s = { "С��",18,"13345784267","��" };  // ��ʼ���ṹ�����
//	print1(s);
//	print2(&s);  // ����s�ĵ�ַ�������Ӹ��ã�ռ���ڴ�ռ����
//	return 0;
//}
// �ṹ���ڴ��ε�ʱ�򣬴���ṹ���ַ���á���Ϊ��������ʱ����������Ҫѹջ�ģ�
// ���һ���ṹ�������󣬲���ѹջ��ϵͳ�����Ƚϴ󣬵��������½�

// ջ��һ�����ݽṹ����ջ�ϲ������ݽ�ѹջ����ջ��ɾ�����ݽг�ջ����Ϊ��ջ�ϴ����ݣ�ֻ�ܴ�ջ��һ��һ��Ĵ档
// �ͷ����ݵ�ʱ��Ҳ�Ǵ�ջ��һ��һ���ͷš����ջ���ص����Ƚ�ȥ���������ȳ���

// �ڴ��Ϊ��ջ������������̬��
// ջ�����ڴ�žֲ���������������ʽ��������������
// �������ڶ�̬�ڴ���䣬����malloc��free��realloc��calloc��Щ����
// ��̬�����ڴ�� ȫ�ֱ�������̬�����ȡ�