#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int Num;		//学号
	char Name[20];	//姓名
	int Age;		//年龄
	char Sex[20];	//性别
}Student;


//录入学生信息
void insert()
{
	void main();
	FILE* fp;
	Student st;
	int count, i, n;
	if ((fp = fopen("st.txt", "a+")) == NULL)
		printf("can't open this file!\n");
	printf("请输入要录入的学生的数量： \n");
	scanf("%d", &count);
	printf("分别输入学生的学号，姓名，年龄，性别：\n");
	for (i = 0; i < count; i++) {
		scanf("%d %s %d %s", &st.Num, &st.Name, &st.Age, &st.Sex);
		fprintf(fp, "%d %s %d %s\n", st.Num, st.Name, st.Age, st.Sex);
	}
	fclose(fp);
	printf("\n返回菜单请按1\t退出系统请按任意键");
	scanf("%d", &n);
	if (n == 1) {
		main();
	}
	else {
		exit(0);
	}


}

//学生信息浏览
void Browser()
{
	void main();
	int n, flag = -1;
	FILE* fp;
	Student st;
	if ((fp = fopen("st.txt", "r")) == NULL)
		printf("can't open this file!\n");
	printf("学号\t姓名\t年龄\t性别\n");
	for (; !feof(fp);)
	{
		fscanf(fp, "%d %s %d %s", &st.Num, &st.Name, &st.Age, &st.Sex);
		if (flag != st.Num) {
			flag = st.Num;
		}
		else {
			break;
		}
		printf("%d\t%s\t%d\t%s\n", st.Num, st.Name, st.Age, st.Sex);
		//printf("--------\n");
	}
	printf("\n返回菜单请按1\t退出系统请按任意键");
	scanf("%d", &n);
	if (n == 1) {
		main();
	}
	else {
		exit(0);
	}

	main();
}

//学生查询(按学号查询)
void Search()
{
	int n, flag = 0;
	FILE* fp;
	Student st;
	int num;
	printf("请输入你想查找的学生的学号：");
	scanf("%d", &num);
	if ((fp = fopen("st.txt", "r")) == NULL)
		printf("can't open this file!");
	for (; !feof(fp);) {
		fscanf(fp, "%d %s %d %s", &st.Num, &st.Name, &st.Age, &st.Sex);
		if (num == st.Num) {
			flag = 1;
			printf("你要找的学生的信息为：\n");
			printf("学号: %d\t姓名: %s\t年龄: %d\t性别: %s\n", st.Num, st.Name, st.Age, st.Sex);
			break;
		}
	}
	if (flag == 0)
		printf("没有找到你要找的学生！\n");


	printf("\n返回菜单请按1\t退出系统请按任意键");
	scanf("%d", &n);
	if (n == 1) {
		main();
	}
	else {
		exit(0);
	}
}

void main()
{
	int n, w = 0;
	printf("***********************************************************************************************************************\n\n");
	printf("                                                   学生管理系统                                                        \n\n");
	printf("***********************************************************************************************************************\n\n");
	printf("                                                 1 - 录入学生信息                                                       \n\n");
	printf("                                                 2 - 学生信息浏览                                                       \n\n");
	printf("                                                 3 - 按学号查询学生                                                       \n\n");
	printf("                                                 0 - 退出学生系统                                                       \n\n");
	printf("***********************************************************************************************************************\n\n");

	scanf("%d", &n);
	do
	{
		if (n > 3 || n < 0)
		{
			printf("你输入的数字有误，请重新输入！\n");
			scanf("%d", &n);
		}
		else w = 1;
	}while (w == 0);

	switch (n)
	{
		case 1: system("cls");
			printf("***********************************************************************************************************************\n\n");
			printf("                                                 录入学生信息                                                           \n\n");
			insert(); break;
		case 2: system("cls");
			printf("***********************************************************************************************************************\n\n");
			printf("                                                 浏览学生信息                                                           \n\n");
			Browser(); break;
		case 3: system("cls");
			printf("***********************************************************************************************************************\n\n");
			printf("                                                 按学号查找学生                                                           \n\n");
			Search(); break;
		case 0:printf("退出学生管理系统"); exit(0); break;
	}
		
		


}
