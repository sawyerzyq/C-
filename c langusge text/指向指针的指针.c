#include<stdio.h>
int main()
{
	int num = 520;
	int *p = &num;//*可以理解为一次解析，&可以理解为它的地址，p和&num的值是一样的，都是表示num的地址
	int **pp = &p;//说明pp是p的地址，*pp就是num的地址（p的值）,**pp是num的值
	printf("num:%d\n", num);
	printf("*p:%d\n", *p);
	printf("**p:%d\n", **pp);
	printf("&p:%p,pp:%p\n", &p, pp);
	printf("&num:%p,p:%p,*pp:%p\n", &num, p, *pp);
	getchar();
	return 0;

}