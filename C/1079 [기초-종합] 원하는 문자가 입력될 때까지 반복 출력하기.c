#include<stdio.h>

int main(void) {
	char letter;
	
	
	while(1) {
		scanf("%c ", &letter);
		
		if(letter == 'q') {
			printf("%c", letter);
			break;
			
		}
		
		printf("%c\n", letter);
		
	}
	
	
	return 0;
} 
