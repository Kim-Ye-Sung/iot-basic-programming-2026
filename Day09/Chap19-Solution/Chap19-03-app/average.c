// 평균 계산 소스코드

extern int count;   // main.c에 있는 count 전역변수를 공유
extern int total;   // input.c에 있는 total 전역변수를 공유

double average(void)
{
	return total / (double)count;
}