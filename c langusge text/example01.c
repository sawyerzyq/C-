#include<stdio.h>
void main()
{
	int *p, *p1, *p2, a, b;
	scanf("%d %d", &a, &b);//scanf函数可能会导致溢出崩溃，解决方法1:在建立项目时把安全开发生命周期前面的对号去掉：2:已经建立好的项目在项目属性里关闭SDL也行：3:将scanf改为scanf_s
	//a = 0;
	//b = 1;
	p1 = &a;
	p2 = &b;
	if (a < b)
	{
		p = p1;
		p1= p2;
		p2 = p;
	}
	printf("%d,%d\n", *p1, *p2);
	printf("%d,%d", a, b);
	system("pause");
}