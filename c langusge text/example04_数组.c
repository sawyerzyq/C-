#include<stdio.h>
void main()
{
	int a[10];// = { 0,1,2,3,4,5,6,7,8,9 };
	int *p;

	p = a;
	for (int j = 0; j < 10; j++) {
		scanf("%d", &a[j]);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", *(a + i));//三种方法都可以
		printf("%d\n", *(p + i));//
		printf("%d\n", a[i]);//
	}
	system("pause");
}