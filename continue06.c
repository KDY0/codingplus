#include<stdio.h>
int main()
{
	int sum=0;
	for(int i = 1; i<=8; i++)
	{
		if(i % 4 !=0)
		continue;
		sum = sum +i;
	}
	printf("%d \n" , sum);
	return 0;
}
