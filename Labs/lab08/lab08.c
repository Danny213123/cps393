#include <stdio.h>
#include <string.h>

void reverse(char string[]){
	int length = strlen(string);
	int temp;

	for (int i = 0; i < length/2; i++){
		temp = string[i];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
	}

	printf("Reversed: %s\n", string);
}

void replace(char c, char string[]){
	int length = strlen(string);
	int curIndex = 0;

	for (int i = 0; i <= length; i++){
		if (string[i] == c){
			continue;
		} else {
			string[curIndex++] = string[i];
		}
	}
	curIndex = 0;

	printf("String: %s\n", string);
	reverse(string);
}

int main(){
	char test[99];
	char character;

	scanf("%c", &character);
	fgets(test, 99, stdin);
	
	printf("String: %s\n", test);

	replace(character, test);
	
	return 0;
}

