#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int o, p;
	scanf("%d %d", &o, &p);
	srand(time(NULL));
	int random;
	random = (rand()%p + o);
	printf("%d",random);
	return 0;
}
