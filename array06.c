#include<stdio.h>
int main()
{
	 char arr[10] = {'A','B','C','D','E','F','G','H','I','J'};
	for(i=0; i<10; i++){
		if (i == 0) {
                        printf("%c ",arr[i]);
                }
 		if (i == 4) {
                        printf("%c ",arr[i]);
                }
 		if (i == 9) {
                        printf("%c ",arr[i]);
                }
 
       }

	return 0;
}
