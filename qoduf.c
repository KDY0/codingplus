#include<stdio.h>
int main()
{
	int arr[4][5];
	int row, col ,cnt=1;
	for (row=0;row<4;row++){
		for(col=0;col<5;col++){
			arr[row][col]=cnt;
			cnt++;
		}
	}

	for (row=0;row<4;row++){
		for(col=0;col<5;col++){
			printf("[%d] ", arr[row][col]);
		}
		printf("\n");
	}


/*
	printf("%d \n",arr);
	printf("%d \n",arr[0]);
	printf("%d \n",&arr[0][0]);

	printf("%d \n",arr+1);
	printf("%d \n",arr[1]);
	printf("%d \n",&arr[1][0]);

	printf("%d \n",(*(arr+1)+1));
	printf("%d \n",arr[1]+1);
	printf("%d \n",&arr[1][1]);
*/
	return 0;
}
