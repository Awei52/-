#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int number()   //ȷ����Ŀ����
{
	int num;
	printf("��ȷ����Ŀ����:");
	scanf_s("%d", &num);
	return num;
}

int max()   //ȷ�����ֵ
{
	int num;
	printf("\n100����100����     10����10����\n");
	printf("��ȷ�����ֵ:");
	scanf_s("%d", &num);
	return num;
}

int Y()   //ȷ���Ƿ�ΪС��
{
	int num;
	printf("\n����Ϊ 0    С��Ϊ1\n");
	printf("��ȷ��������С��:");
	scanf_s("%d", &num);
	return num;
}

int Z()   //�Ƿ�������
{
	int num;
	printf("\n��������Ϊ 0    ������Ϊ 1 \n");
	printf("��ȷ���Ƿ������:");
	scanf_s("%d", &num);
	return num;
}

int main()
{
	int n;   //��Ŀ����
	int symbol;
	int Max; //���ֵ
	int a,b,c;//����
	float f,e, d;//С��
	int y, z,i;
	FILE *fp;
	n = number();
	fp = fopen("./1.txt", "w");
	for (i = 0; i < n; i++)
	{
		Max = max();
		y = Y();//С���ж�
		z = Z();//�����ж�
		printf("1����+    2����-    3����*    4����/\n");
		printf("ѡ��������ţ�");
		scanf_s("%d", &symbol);
		switch (symbol)
		{
		case 1:
		{
			if (y == 0 && z == 0)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%d+%d=\n", a, b);
				break;
			}
			if (y == 1 && z == 0)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%.2f+%.2f=\n", d, e);
				break;
			}
			if (y == 0 && z == 1)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				c = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%d+(%d+%d)=\n", a, b,c);
				break;
			}
			if (y == 1 && z == 1)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				f = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%.2f+(%.2f+%.2f)=\n", d, e,f);
				break;
			}
		}
		case 2:
		{
			if (y == 0 && z == 0)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%d-%d=\n", a, b);
				break;
			}
			if (y == 1 && z == 0)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%.2f-%.2f=\n", d, e);
				break;
			}
			if (y == 0 && z == 1)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				c = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%d-(%d-%d)=\n", a, b, c);
				break;
			}
			if (y == 1 && z == 1)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				f = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%.2f-(%.2f-%.2f)=\n", d, e, f);
				break;
			}
		}
		case 3:
		{
			if (y == 0 && z == 0)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%d*%d=\n", a, b);
				break;
			}
			if (y == 1 && z == 0)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%.2f*%.2f=\n", d, e);
				break;
			}
			if (y == 0 && z == 1)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				c = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%d*(%d*%d)=\n", a, b, c);
				break;
			}
			if (y == 1 && z == 1)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				f = rand() % Max + 1 + (rand() % 10 + 1) / 10.00+ (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%.2f*(%.2f*%.2f)=\n", d, e, f);
				break;
			}
		}
		case 4:
		{
			if (y == 0 && z == 0)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%d/%d=\n", a, b);
				break;
			}
			if (y == 1 && z == 0)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%.2f/%.2f=\n", d, e);
				break;
			}
			if (y == 0 && z == 1)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				c = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%d/(%d/%d)=\n", a, b, c);
				break;
			}
			if (y == 1 && z == 1)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				f = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //�����ʽд�뵽�ļ�
				{
					printf("���ܴ��ļ���\n");
					exit(0);
				}
				fprintf(fp,"%.2f/(%.2f/%.2f)=\n", d, e, f);
				break;
			}
		}
		}
	}
	return 0;
}



