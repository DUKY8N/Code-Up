#include<stdio.h>

int main(void) {
	int num1, num2;
	
	
	scanf("%x", &num1);
	
	for(num2 = 1; num2 <= 15; num2++) {
		printf("%X*%X=%X\n", num1, num2, num1*num2);
		
	}
	
	
	return 0;
}
