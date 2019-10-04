#include<stdio.h>

int main(void) {
	int num;
	
	
	while(1) {
		scanf("%d", &num);
		
		switch(num) {
			case 0:
				break;
				
			default:
				printf("%d\n", num);
				continue;
			
		}
		
		break;
		
	}
	
	
	return 0;
}
