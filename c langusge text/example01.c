#include<stdio.h>
void main()
{
	int *p, *p1, *p2, a, b;
	scanf("%d %d", &a, &b);//scanf�������ܻᵼ������������������1:�ڽ�����Ŀʱ�Ѱ�ȫ������������ǰ��ĶԺ�ȥ����2:�Ѿ������õ���Ŀ����Ŀ������ر�SDLҲ�У�3:��scanf��Ϊscanf_s
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