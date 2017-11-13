#include<stdio.h> 

int main()
{
	int noOfProcess, time;

	printf("Enter Total Process:\t "); 
	scanf("%d", &noOfProcess);

	int waitTime[noOfProcess], burstTime[noOfProcess];

	int i;
	for(i = 0; i < noOfProcess; i++) {
		printf("Enter Burst Time for Process Number %d :\t\t", i+1);
		scanf("%d", &burstTime[i]);
	}

	time = 0;
	for(i = 0; i < noOfProcess; i++) {
		time += burstTime[i];
		waitTime[i] = time;
	}

	for(i = 0; i < noOfProcess; i++) {
		printf("P[%d] : %d\n", i+1, waitTime[i]);
	}

	return 0;
}n