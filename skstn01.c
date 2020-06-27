#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#define ab 4
#define cd 2

int main()
{
        int i, j, num;
        srand(time(NULL));
        for (i = 0; i < ab; i++){
                printf("Time = %d, ", time(NULL));
                printf("난수 = %d\n", rand());
        }
        for(i = 0; i < cd; i++){
		srand(time(NULL));
		for (j = 0; j < cd; j++){
                num = rand();
                printf("Time = %lld, 난수= %d", time(NULL), num);
                printf("1 ~ 100 중 하나 출력 = %d\n", num % 100 + 1);
                }
                sleep(1000);
        }
        return 0;
}
