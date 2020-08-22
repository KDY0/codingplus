#include<stdio.h>
int main()
{
	int arr[10];
	for (int i=1; i <= 10; i++)
	{
		arr[i] = i * 3;
	}
	for (int i=1; i <= 10; i++)
	{
		printf("%d \n",arr[i]);
	}
	return 0;
}
