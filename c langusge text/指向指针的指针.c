#include<stdio.h>
int main()
{
	int num = 520;
	int *p = &num;//*�������Ϊһ�ν�����&�������Ϊ���ĵ�ַ��p��&num��ֵ��һ���ģ����Ǳ�ʾnum�ĵ�ַ
	int **pp = &p;//˵��pp��p�ĵ�ַ��*pp����num�ĵ�ַ��p��ֵ��,**pp��num��ֵ
	printf("num:%d\n", num);
	printf("*p:%d\n", *p);
	printf("**p:%d\n", **pp);
	printf("&p:%p,pp:%p\n", &p, pp);
	printf("&num:%p,p:%p,*pp:%p\n", &num, p, *pp);
	getchar();
	return 0;

}