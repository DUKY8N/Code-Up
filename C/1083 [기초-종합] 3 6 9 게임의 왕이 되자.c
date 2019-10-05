#include<stdio.h>

int main(void) {
	int num;
	
	
	scanf("%d", &num);
	
	for(int count = 1; count <= num; count++) {
		if(count % 3 == 0) {
			printf("X ");
			
			continue;
			
		}
		
		printf("%d ", count);
		
	}
	
	
	return 0;
}
