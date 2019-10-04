#include<stdio.h>

int main(void) {
	int num;
	
	startPoint:
	scanf("%d", &num);
	
	switch(num) {
		case 0:
			break;
			
		default:
			printf("%d\n", num);
			goto startPoint;
			
	}
	
	
	return 0;
}
