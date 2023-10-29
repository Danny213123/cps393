#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

	while (true){
	int vari;
	int val;

	printf("Enter a number: ");

	scanf("%d", &vari);
	
	int arg1 = atoi(argv[1]);
	val = arg1 + vari;

	printf("%d", val);
	printf("\n");
	
	}
	return 0;
}
