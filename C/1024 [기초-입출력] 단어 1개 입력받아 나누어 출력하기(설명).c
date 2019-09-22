#include<stdio.h>

int main(void) {
	char word[1001]; // 문자열일경우 자릿수를 지정할것! 
	
	scanf("%s", word);
	for(int x = 0; word[x] != \0; x++) {
		printf("\'%c\'\n");
		
	}
	
	return 0;
}
