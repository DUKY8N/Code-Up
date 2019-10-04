#include<stdio.h>

int main(void) {
	char leter, leterCount;
	
	
	scanf("%c", &leter);
	leterCount = 'a';
	
	do {
		printf("%c ", leterCount);
		
	} while(leterCount++ <= leter);
	
	
	return 0;
}
