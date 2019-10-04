#include<stdio.h>

int main(void) {
	int x, sum = 0;
	int count = 1;
	
	scanf("%d", &x);
	
	for(; x > sum; count++) {
		sum += count;
		
	}
	
	printf("%d", count - 1);
	
	
	return 0;
}
