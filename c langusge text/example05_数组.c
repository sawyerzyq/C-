//�������е�ʮ���������ɴ�С��˳������
#include<stdio.h>
void sort(int *a, int n);

void main()
{
	int *p, i, a[10] = { 0,5,6,3,2,8,7,11,4,1 };

	printf("The original arrsy:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	p = a;
	//�β�������ʱ
	//sort(p, 10);ʵ��ָ������
	//sort(a, 10);ʵ����������
	//�β�ʱָ��ʱ
	//sort(p, 10);ʵ��ָ�������
	//sort(a, 10);ʵ�����������
	sort(a, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d   ", a[i]);
	}
	getchar();
	//system("")
}
void sort(int *a, int n)
{
	int k;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (*(a + i) < *(a + j))
			{
				k = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = k;
			}

		}
	}
}