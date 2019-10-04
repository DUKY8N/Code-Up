#include<stdio.h>

int main(void) {
	int num, numCount;
	
	
	scanf("%d", &numCount);
	
	cycle:
	scanf("%d", &num);
	printf("%d\n", num);
	
	if(numCount-- != 1){
		goto cycle;
		
	}
	
	return 0;
}
