//���밡a,b,c�����������մ�С��ӡ����
#include<stdio.h>
void swap(int *p1, int *p2);
void main()
{
	int *p1, *p2,*p3, a, b,c;
	scanf("%d %d %d", &a, &b,&c);//scanf�������ܻᵼ������������������1:�ڽ�����Ŀʱ�Ѱ�ȫ������������ǰ��ĶԺ�ȥ����2:�Ѿ������õ���Ŀ����Ŀ������ر�SDLҲ�У�3:��scanf��Ϊscanf_s
						   //a = 0;
						   //b = 1;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	if (a <b)
	{
		swap(p1, p2);//swapʵ�ֵ��ǽ���
	}
	if (a <c)
	{
		swap(p1, p3);//swapʵ�ֵ��ǽ���
	}
	if (b<c)
	{
		swap(p2, p3);//swapʵ�ֵ��ǽ���
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