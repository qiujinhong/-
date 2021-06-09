#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int Num;		//ѧ��
	char Name[20];	//����
	int Age;		//����
	char Sex[20];	//�Ա�
}Student;


//¼��ѧ����Ϣ
void insert()
{
	void main();
	FILE* fp;
	Student st;
	int count, i, n;
	if ((fp = fopen("st.txt", "a+")) == NULL)
		printf("can't open this file!\n");
	printf("������Ҫ¼���ѧ���������� \n");
	scanf("%d", &count);
	printf("�ֱ�����ѧ����ѧ�ţ����������䣬�Ա�\n");
	for (i = 0; i < count; i++) {
		scanf("%d %s %d %s", &st.Num, &st.Name, &st.Age, &st.Sex);
		fprintf(fp, "%d %s %d %s\n", st.Num, st.Name, st.Age, st.Sex);
	}
	fclose(fp);
	printf("\n���ز˵��밴1\t�˳�ϵͳ�밴�����");
	scanf("%d", &n);
	if (n == 1) {
		main();
	}
	else {
		exit(0);
	}


}

//ѧ����Ϣ���
void Browser()
{
	void main();
	int n, flag = -1;
	FILE* fp;
	Student st;
	if ((fp = fopen("st.txt", "r")) == NULL)
		printf("can't open this file!\n");
	printf("ѧ��\t����\t����\t�Ա�\n");
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
	printf("\n���ز˵��밴1\t�˳�ϵͳ�밴�����");
	scanf("%d", &n);
	if (n == 1) {
		main();
	}
	else {
		exit(0);
	}

	main();
}

//ѧ����ѯ(��ѧ�Ų�ѯ)
void Search()
{
	int n, flag = 0;
	FILE* fp;
	Student st;
	int num;
	printf("������������ҵ�ѧ����ѧ�ţ�");
	scanf("%d", &num);
	if ((fp = fopen("st.txt", "r")) == NULL)
		printf("can't open this file!");
	for (; !feof(fp);) {
		fscanf(fp, "%d %s %d %s", &st.Num, &st.Name, &st.Age, &st.Sex);
		if (num == st.Num) {
			flag = 1;
			printf("��Ҫ�ҵ�ѧ������ϢΪ��\n");
			printf("ѧ��: %d\t����: %s\t����: %d\t�Ա�: %s\n", st.Num, st.Name, st.Age, st.Sex);
			break;
		}
	}
	if (flag == 0)
		printf("û���ҵ���Ҫ�ҵ�ѧ����\n");


	printf("\n���ز˵��밴1\t�˳�ϵͳ�밴�����");
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
	printf("                                                   ѧ������ϵͳ                                                        \n\n");
	printf("***********************************************************************************************************************\n\n");
	printf("                                                 1 - ¼��ѧ����Ϣ                                                       \n\n");
	printf("                                                 2 - ѧ����Ϣ���                                                       \n\n");
	printf("                                                 3 - ��ѧ�Ų�ѯѧ��                                                       \n\n");
	printf("                                                 0 - �˳�ѧ��ϵͳ                                                       \n\n");
	printf("***********************************************************************************************************************\n\n");

	scanf("%d", &n);
	do
	{
		if (n > 3 || n < 0)
		{
			printf("������������������������룡\n");
			scanf("%d", &n);
		}
		else w = 1;
	}while (w == 0);

	switch (n)
	{
		case 1: system("cls");
			printf("***********************************************************************************************************************\n\n");
			printf("                                                 ¼��ѧ����Ϣ                                                           \n\n");
			insert(); break;
		case 2: system("cls");
			printf("***********************************************************************************************************************\n\n");
			printf("                                                 ���ѧ����Ϣ                                                           \n\n");
			Browser(); break;
		case 3: system("cls");
			printf("***********************************************************************************************************************\n\n");
			printf("                                                 ��ѧ�Ų���ѧ��                                                           \n\n");
			Search(); break;
		case 0:printf("�˳�ѧ������ϵͳ"); exit(0); break;
	}
		
		


}
