#include<stdio.h>
int main()
{
	int a=0, b=1, c=2;
	printf("%d %d\n", a>b, a<b);
	printf("%d %d\n", a>=b, a<=b);
	printf("%d\n", c>0 && c<3);
	printf("%d\n", c==1||c==2);
	printf("%d\n", (5%3) == 2);
	printf("%d\n", a != (b+2));
	return 0;
}
