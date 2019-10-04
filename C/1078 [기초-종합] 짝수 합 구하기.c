#include<stdio.h>

int main(void) {
	int num, sum = 0;
	
	
	scanf("%d", &num);
	
	for(; num >= 0; num--) {
		if (num % 2 == 0) {
			sum += num;
			
		}
		
	}
	
	printf("%d\n", sum);
	
	return 0;
} 
