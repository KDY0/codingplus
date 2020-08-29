#include<stdio.h>
#define TERM 2
#define SUBJ 3
int main()
{
	int i,j,Total;
	int scores[TERM][SUBJ + 1] = {0};
	char Subj[SUBJ][20] = {"영어", "수학", "컴퓨터"};
	char Term[TERM][20] = {"중간고사","기말고사"};
	double avg;
	for(i=0; i<TERM; i++){
		avg = 0.0;
		printf("# %s 각 과목의 점수를 입력하시오.\n", Term[i]);
		for(i=0; i<TERM; i++){
		printf("%s : ", Subj[j]);
		scanf("%d",&scores[i][j]);
		scores[i][SUBJ]+= scores[i][j];
	}
	i = 1;	
	printf("[%d][%d]\n", i, SUBJ);

	avg = (double)scores[i][SUBJ]/(double)SUBJ;
	printf("%s 총합= %d, 평균 = %.2f\n", Term[i], scores[i][SUBJ], avg);
	}
	Total = scores[0][SUBJ] + scores[1][SUBJ];
	printf("학기 총평균:%.2f \n", (double)(Total) / (double)(TERM*SUBJ));
	return 0;
}
