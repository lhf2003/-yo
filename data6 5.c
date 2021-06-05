//交换两个整数
#include<stdio.h>

int swapA(int a, int b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;

	return a, b;
}

int swapB(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;

	return *pa, * pb;
}

int main()
{
	int a = 3, b = 4;

	swapA(a, b);
	printf("a=%d,b=%d\n", a, b);

	swapB(&a, &b);
	printf("a=%d,b=%d", a, b);

	return 0;
}
