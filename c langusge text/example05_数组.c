//对数组中的十个整数按由大到小的顺序排序
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
	//形参是数组时
	//sort(p, 10);实参指针有用
	//sort(a, 10);实参数组有用
	//形参时指针时
	//sort(p, 10);实参指针可以用
	//sort(a, 10);实参数组可以用
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