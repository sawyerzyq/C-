#include<stdio.h>
int a, b = 520;//��δ��ʼ����aĬ��Ϊ0
void func();
void func() {
	int b = 880;
	a = 880;//�޸ĵ�ʱȫ�ֱ���a��ֵ
	printf("a��ֵΪ��%d,b��ֵΪ:%d\n", a, b);//��ӡ���Ǿֲ�����b��ֵ
}
void main()
{
	printf("a��ֵΪ��%d,b��ֵΪ:%d\n", a, b);
	func();
	printf("a��ֵΪ��%d,b��ֵΪ:%d\n", a, b);//��ӡ����ȫ�ֱ���b
	getchar();
}