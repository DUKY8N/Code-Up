#include<stdio.h>

int main(void) {
	int num;
	
	
	scanf("%d", &num);
	while(1) {
		switch(num) {
			case 0:
				break;
				
			default:
				printf("%d\n", num--);
				continue;
			
		}
		
		break;
		
	}
	
	
	return 0;
}
