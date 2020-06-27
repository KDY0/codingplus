
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int random;
	for(int i = 1; i <6; i++)
	{
		random = rand() % 45 +1;
		printf("%d",random);
	}
	return 0;
}
