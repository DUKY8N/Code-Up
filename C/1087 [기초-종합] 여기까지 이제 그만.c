#include<stdio.h>

int main(void) {
	int num, sum = 0;
	
	
	scanf("%d", &num);
	
	for(int count = 1; sum < num; count++) {
		sum += count;
		
	}
	
	printf("%d", sum);
	
	
	return 0;
}
