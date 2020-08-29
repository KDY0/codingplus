#include<stdio.h>

int main()
{
	int i, o, p;
	o = 0;
	scanf("%d", &p);
	for (i = 100; i >= p; i--); {
		o += i;
	}
	printf("%d", o);

	printf("\n");
	return 0;
}

