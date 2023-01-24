#include <stdio.h>
int main()
{
	int principle;
	float rate;
	int time;
	double Interest;
	
	// Input of Principle should be in between 100 rs to 1,000,000
	printf("Principle should be in between 100rs to 1,000,000 rs");
	scanf("%d", &principle);
	printf("Rate should be between 5%% till 10%%");
	scanf("%f", &rate);
	printf("Time should be in between 1 to 10 years");
	scanf("%d", &time);
	
	Interest= principle*rate*time/100;
	
	printf("Your Interest is %1f", Interest);
	
	
}
