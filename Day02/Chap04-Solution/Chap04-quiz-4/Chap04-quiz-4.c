#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double killogram;
	double height;

	double BMI;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%lf%lf", &killogram, &height);

	BMI = killogram / ((height / 100.0f) * (height / 100.0f));

	printf("%s", ((BMI >= 20.0f) && (BMI < 25.0f)) ? "표준입니다" : "체중관리가 필요합니다");

	return 0;
}