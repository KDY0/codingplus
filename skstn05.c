#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Odd 1
#define Even 2
int main(){
	int myOE, comOE;
	srand(time(NULL));
	printf("홀수(1), 짝수(2) 입력 : ");
	while(scanf("%d",&myOE)==1){
		comOE = (rand()%2) + 1;
		//if(comOE==myOE) printf("다시\n");
		//else{
			switch(myOE){
				case Odd:
					(comOE==Odd)?printf("T\n"):printf("F\n");
					break;
				case Even:
					(comOE==Even)?printf("T\n"):printf("F\n");
					break;
				default:
					printf("1,2 중 하나를 선택하세요!\n");
			}
		//}
		printf("홀수(1),짝수(2) 입력 : ");
	}
	return 0;
}
