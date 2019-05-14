#include<stdio.h>
int a, b = 520;//还未初始化的a默认为0
void func();
void func() {
	int b = 880;
	a = 880;//修改的时全局变量a的值
	printf("a的值为：%d,b的值为:%d\n", a, b);//打印的是局部变量b的值
}
void main()
{
	printf("a的值为：%d,b的值为:%d\n", a, b);
	func();
	printf("a的值为：%d,b的值为:%d\n", a, b);//打印的是全局变量b
	getchar();
}