#include<stdio.h>
int main(void)
{
	int a=0;
	int b=1;
	int t;
	t=a;
	a=b;
	b=t;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	return 0;
}

