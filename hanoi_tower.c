#include <stdio.h>

int main(){
	
	int peg1[] = {3,4,5};
	int peg2[] = {0,0,0};
	int peg3[] = {0,0,0};
	printf("PEG1: [%d,%d,%d]\n", peg1[0], peg1[1], peg1[2]);
	printf("PEG2: [%d,%d,%d]\n", peg2[0], peg2[1], peg2[2]);
	printf("PEG3: [%d,%d,%d]\n", peg3[0], peg3[1], peg3[2]);
	
	printf("Switch 1:\n");
	peg2[0] = peg1[1];
	peg1[1] = 0;
	peg3[0] = peg1[0];
	peg1[0] = 0;	
	printf("PEG1: [%d,%d,%d]\n", peg1[0], peg1[1], peg1[2]);
	printf("PEG2: [%d,%d,%d]\n", peg2[0], peg2[1], peg2[2]);
	printf("PEG3: [%d,%d,%d]\n", peg3[0], peg3[1], peg3[2]);
	
	printf("Switch 2:\n");
	peg2[1] = peg2[0];
	peg2[0] = peg3[0];
	peg3[0] = 0;	
	printf("PEG1: [%d,%d,%d]\n", peg1[0], peg1[1], peg1[2]);
	printf("PEG2: [%d,%d,%d]\n", peg2[0], peg2[1], peg2[2]);
	printf("PEG3: [%d,%d,%d]\n", peg3[0], peg3[1], peg3[2]);
	
	printf("Switch 3:\n");
	peg3[0] = peg1[2];
	peg1[2] = 0;	
	printf("PEG1: [%d,%d,%d]\n", peg1[0], peg1[1], peg1[2]);
	printf("PEG2: [%d,%d,%d]\n", peg2[0], peg2[1], peg2[2]);
	printf("PEG3: [%d,%d,%d]\n", peg3[0], peg3[1], peg3[2]);

	printf("Switch 4:\n");
	peg3[1] = peg3[0];
	//peg3[0] = peg2[1];	
	peg1[0] = peg2[0];
	peg2[0] = 0;
	//peg2[1] = 0;
	printf("PEG1: [%d,%d,%d]\n", peg1[0], peg1[1], peg1[2]);
	printf("PEG2: [%d,%d,%d]\n", peg2[0], peg2[1], peg2[2]);
	printf("PEG3: [%d,%d,%d]\n", peg3[0], peg3[1], peg3[2]);

	printf("Switch 5:\n");
	peg3[2] = peg3[1];
	peg3[1] = peg3[0];	
	peg3[0] = peg1[0];
	peg1[0] = 0;
	printf("PEG1: [%d,%d,%d]\n", peg1[0], peg1[1], peg1[2]);
	printf("PEG2: [%d,%d,%d]\n", peg2[0], peg2[1], peg2[2]);
	printf("PEG3: [%d,%d,%d]\n", peg3[0], peg3[1], peg3[2]);


	return 0;
	
		}
		
