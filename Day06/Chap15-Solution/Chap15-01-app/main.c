// 이중 포인터

#include <stdio.h>

int main()
{
	int a = 10;		// 실제 값
	int* pi;		// 포인터
	int** ppi;		// 이중포인터

	pi = &a;
	ppi = &pi;  // 이중포인터의 단일포인터의 주소할당

	printf("---------------------------------------------------\n");
	printf("변수	변수값		&연산		*연산		**연산\n");
	printf("---------------------------------------------------\n");
	printf("a\t%d\t\t%u\n", a, &a);	//변수 a의 값, 주소만 출력
	printf("pi%16u%16u%9d\n", pi, &pi, *pi);  // pi(포인터 변수)
	printf("ppi%15u%16u%17u%9d\n", ppi, &ppi, *ppi, **ppi);  // ppi(이중포인터)

	return 0;
}