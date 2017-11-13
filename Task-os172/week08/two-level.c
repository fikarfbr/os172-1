#include<stdio.h> 

int main()
{
	int noOfProcess, time, flag = 0, quantumA = 3, quantumB = 4, remain;

	printf("Enter Total Process:\t "); 
	scanf("%d", &noOfProcess);

	int waitTime[noOfProcess], arrivalTime[noOfProcess], burstTime[noOfProcess];
	remain = noOfProcess;

	int i;
	for(i = 0; i < noOfProcess; i++) {
		printf("Enter Arrival Time for Process Number %d :\t", i+1);
		scanf("%d", &arrivalTime[i]);
		printf("Enter Burst Time for Process Number %d :\t\t", i+1);
		scanf("%d", &burstTime[i]);
	}

	//First Come First Serve algorithm
	time = 0;
	for(i = 0; i < noOfProcess; i++) {
		if(burstTime[i] <= quantumA && burstTime[i] > 0) {
			remain--;
			time += burstTime[i];
			burstTime[i] = 0;
			waitTime[i] = time - arrivalTime[i];
		} else if(burstTime[i] > quantumA) {
			time += quantumA;
			burstTime[i] -= quantumA;
		}
	}

	//Implement Round Robin algorithm here
	

	//Print wait time of each process
	for(i = 0; i < noOfProcess; i++) {
		printf("P[%d] : %d\n", i+1, waitTime[i]);
	}

	return 0;
}