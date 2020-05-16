#include <stdio.h>
int main()
{
	double height, weight, bmi;
	for(;;){
	printf("키와 몸무게를 입력(m)(kg) : ");
	scanf("%lf%lf", &height, &weight);
	if (height >= 3.0){
		printf("거짓말~ 키가 3미터가 넘는다구요?\n");
			continue;
	}
	if(weight > 10.0){
		bmi = weight / (height * height);
		if (bmi >= 25.0)
			printf("당신의 BMI는 %.2f 이고 비만 입니다.\n", bmi);
		else if (bmi > 23.0)
			printf("당신의 BMI는 %.2f 이고 과체중 입니다.\n",bmi);
		else if (bmi > 18.5)
			printf("당신의 BMI는 %.2f 이고 정상 입니다.\n",bmi);
		else
			printf("당신의 BMI는 %.2f이고 저체중 입니다\n.",bmi);
		break;
		}
		printf("몸무게가 너무 작습니다. 다시 입력하세요.\n",bmi);
}
return 0;
}
