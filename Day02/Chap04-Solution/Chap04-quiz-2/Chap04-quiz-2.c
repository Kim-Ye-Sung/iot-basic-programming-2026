#include <stdio.h>

int main(void)
{
	int seats = 70;					
	int audience = 65;				
	double rate;					

	rate = ((double)audience / seats) * 100.0f;
	
	printf("입장률 : %.1f%c\n", rate, 37);

	return 0;
}