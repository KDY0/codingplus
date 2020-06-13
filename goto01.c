#include<stdio.h>
int main()
{
	int num, diff;
	printf("-128 ~ 127사이의 정수 한개를 입력 : ");
	while(scanf("%d", &num)==1){
	if(num < -128 ||num >127){
	diff = (num<0) ? num +128 : num -127;
	goto OutOfRange;
	}
		else{
			if(num == 0){
			printf("0은 부호가 없습니다. \n");
			goto Reinput;
			}
			(num<0) ? printf("음수입니다. \n")
					:printf("양수입니다. \n");
		}
	Reinput : printf("-128 ~ 127 사이의 정수 1개를 입력 : ");
	}
	OutOfRange: printf("%d만큼 영역을 벗어났습니다. \n", diff);
	return 0;
}
