//输入啊a,b,c三个数，按照大小打印出来
#include<stdio.h>
void swap(int *p1, int *p2);
void main()
{
	int *p1, *p2,*p3, a, b,c;
	scanf("%d %d %d", &a, &b,&c);//scanf函数可能会导致溢出崩溃，解决方法1:在建立项目时把安全开发生命周期前面的对号去掉：2:已经建立好的项目在项目属性里关闭SDL也行：3:将scanf改为scanf_s
						   //a = 0;
						   //b = 1;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	if (a <b)
	{
		swap(p1, p2);//swap实现的是交换
	}
	if (a <c)
	{
		swap(p1, p3);//swap实现的是交换
	}
	if (b<c)
	{
		swap(p2, p3);//swap实现的是交换
	}
	
	//printf("%d,%d\n", *p1, *p2);
	printf("%d>%d", a, b);
	system("pause");
}
void swap(int *p1, int *p2)
{
	int temp;
	printf("I am swapping...");
	printf("please waiting..");
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}