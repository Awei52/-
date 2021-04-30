#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int number()   //确定题目数量
{
	int num;
	printf("请确定题目数量:");
	scanf_s("%d", &num);
	return num;
}

int max()   //确定最大值
{
	int num;
	printf("\n100代表100以内     10代表10以内\n");
	printf("请确定最大值:");
	scanf_s("%d", &num);
	return num;
}

int Y()   //确定是否为小数
{
	int num;
	printf("\n整数为 0    小数为1\n");
	printf("请确定整数或小数:");
	scanf_s("%d", &num);
	return num;
}

int Z()   //是否有括号
{
	int num;
	printf("\n不加括号为 0    加括号为 1 \n");
	printf("请确定是否加括号:");
	scanf_s("%d", &num);
	return num;
}

int main()
{
	int n;   //题目数量
	int symbol;
	int Max; //最大值
	int a,b,c;//整数
	float f,e, d;//小数
	int y, z,i;
	FILE *fp;
	n = number();
	fp = fopen("./1.txt", "w");
	for (i = 0; i < n; i++)
	{
		Max = max();
		y = Y();//小数判断
		z = Z();//括号判断
		printf("1代表+    2代表-    3代表*    4代表/\n");
		printf("选择运算符号：");
		scanf_s("%d", &symbol);
		switch (symbol)
		{
		case 1:
		{
			if (y == 0 && z == 0)
			{
				a = rand() % Max + 1;
				b = rand() % Max + 1;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
					exit(0);
				}
				fprintf(fp,"%d+%d=\n", a, b);
				break;
			}
			if (y == 1 && z == 0)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
					exit(0);
				}
				fprintf(fp,"%d-%d=\n", a, b);
				break;
			}
			if (y == 1 && z == 0)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
					exit(0);
				}
				fprintf(fp,"%d*%d=\n", a, b);
				break;
			}
			if (y == 1 && z == 0)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
					exit(0);
				}
				fprintf(fp,"%d/%d=\n", a, b);
				break;
			}
			if (y == 1 && z == 0)
			{
				d = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				e = rand() % Max + 1 + (rand() % 10 + 1) / 10.0 + (rand() % 10 + 1) / 100.0;
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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
				if ((fp = fopen("./1.txt", "a")) == NULL)    //将表达式写入到文件
				{
					printf("不能打开文件！\n");
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



