#include<stdio.h>
int main()
{
	for(int i = 0; i <= 100; i++)
	{

		if ((i % 2) == 0) {
			printf("%d \n" ,i);
		}
		if(i ==100)
			break;
	}
	return 0;
}
