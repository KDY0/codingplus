#include<stdio.h>
int main ()
{
	int i;
	int j;
	int k=0; 

	scanf("%d", &j);
	for(i=1; i <= j; i++){
		k+=i;
		if(i == 1000)
		break;
		}
		printf("%d \n",k);
	return 0;
}
