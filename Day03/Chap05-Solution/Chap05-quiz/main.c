// 별찍기 예제
/*
	*****
	*****
	*****
	*****
	*****
	
	*
	**
	***
    ****
	등등

*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i, j, k;

	// 5x5 * 찍기
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n");

	// 행마다 별 갯수 하나씩 늘려서 찍기
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}


	printf("\n");

	// 행마다 별 갯수 하나씩 늘리는데, 오른쪽으로 정렬하기
	for (i = 1; i <= 5; i++)
	{
		for (k = 1; k <= 5 - i; k++)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}
	
	printf("\n");

	// 피라미드 형태로 별 찍기
	int Line;

	printf("별을 피라미드 형태로 몇째 줄까지 나타내시겠습니까?\n");
	printf("입력 : ");

	scanf("%d", &Line);

	for (i = 0; i < Line; i++)
	{
		for (k = 0; k < Line - i - 1; k++)
		{
			printf(" ");
		}

		for (j = 0; j < 2 * (i + 1) - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n");
	
	// 모래시계 형태로 별 찍기
	printf("별을 모래시계 형태로 몇째 줄까지 나타내겠습니까? 홀수로만 입력해주세요!\n");
	printf("입력 : ");
	scanf("%d", &Line);
	while (Line % 2 == 0)
	{
		printf("제발 홀수로만 입력해주세요!\n");
		printf("입력 : ");
		scanf("%d", &Line);
	}

	for (i = 0; i < Line; i++)
	{
		if (Line - (2 * i) > 0)
		{
			for (j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (k = 0; k < Line - (2 * i); k++)
			{
				printf("*");
			}
		}
		else
		{
			for (int p = 0; p < Line - i - 1; p++)
			{
				printf(" ");
			}

			for (int l = 0; l < 2 - (Line - (2 * i)); l++)
			{
				printf("*");
			}

		}
		printf("\n");
	}


	return 0;
}