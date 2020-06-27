#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define RK 0
#define PR 1
#define SC 2
int main(){
	int myRPS, comRPS;
	srand(time(NULL));
	printf("바위(0), 보(1), 가위(2) 입력:");
	while(scanf("%d", &myRPS)==1){
		comRPS = rand()%3;
	if(comRPS==myRPS)printf("T\n");
	else{
		switch(myRPS){
		case RK:
		(comRPS == SC)?printf("W\n") : printf("L\n");
		break;
		case PR:
		(comRPS == RK)?printf("W\n") : printf("L\n");
		break;
		case SC:
		(comRPS == PR)?printf("W\n") : printf("L\n");
		break;
		default:
		printf("0,1,2 중 하나를 선택하세요!\n");
			}
		}
		printf("바위(0), 보(1), 가위(2) 입력: ");
	}
	return 0;
}
