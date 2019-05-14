//通过输入指定行数与列数打印出二维数组对应的任一行任一列元素的值
#include<stdio.h>
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int(*p)[4];
	p = a;
	int i, j;
	printf("please input a[3][4]");
	/*for (int first = 0; first < 3; first++)
	{
	for (int scond = 0; scond < 4; scond++)
	{
	printf("请输入a[%d][%d]:", first, scond);
	scanf("%d", &a[first][scond]);
	}
	}*/
	printf("\n");
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			//printf("%#X\x20", &a[i][j]);//输出地址
			printf("%-2d\x20", *(*(p + i) + j));  /*%-2d中, '-'表示左对齐, 如果不写'-'则默认表示右对齐；2表示这个元素输出时占两个空格的空间*/
		}
		printf("\n");
	}
	for (int k = 0; k <100; k++)
	{
		printf("请输入要打印元素的行：");
		scanf("%d", &i);
		if (i > 3 || i<1)
		{
			printf("格式不对，重新输入\n");
			continue;
		}
		printf("请输入要打印元素的列：");
		scanf("%d", &j);
		if (j>4 || j<1)
		{
			printf("格式不对，重新输入\n");
			continue;
		}
		printf("第%d行%d列的值为:", i, j);
		printf("%d", *(*(p + i - 1) + j - 1));//这里出了很多错
											  //printf("%d", a[i - 1][j - 1]);
		getchar();
		break;
	}
	getchar();
}