#include <stdio.h>
#include "lab07F.h"

int main () {
	int testInteger;
	printf("Enter an integer: ");
	scanf("%d", &testInteger);

	int test[testInteger];

	int maximum = -999;
	int minimum = 9999;

	for (int i = 0; i < testInteger; i++){
		scanf("%d", &test[i]);
		if (test[i] > maximum){
			maximum = test[i];
		}
		if (test[i] < minimum){
			minimum = test[i];
		}
	}

	double sum = 0;
	int total = 0;
	for (int i = 0 ; i < testInteger; i++){
		sum = sum + test[i];
		total = total + test[i];
	}

	double average = sum / testInteger;
	
	printTable(testInteger, total, average, maximum, minimum);

	return 0;
}
