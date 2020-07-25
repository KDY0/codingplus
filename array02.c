#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Limit 4
int main()
{
	int i, cnt, hit;
	char ch, cary[Limit];
	srand(time(NULL));
	for (hit=0, cnt=1; ; cnt++){
		printf("알파벳 대문자 1개 입력 :  ");
		scanf("%c", &ch);
		scanf("%*c");
		for (i = 0; i< Limit; i++){
			cary[i] = (rand()%26) + 65;
			if (cary[i] == ch){
				printf("Hit!");
				hit++;
			}
			else
				printf("Miss!");
			printf("cary[%d]=%c, %c \n", i, cary[i], cary[i] + 32);
			}
			printf("도전횟수 = %d, 성공 = %d, 성공률 = %f\n"
					, cnt, hit,(double)hit/ (double)cnt);
		}
		return 0;
}
			
