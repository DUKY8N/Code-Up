#include<stdio.h>

int main(void) {
	int num = 0;
	
	
	scanf("%d", &num);
	
	for(int count = 1; count <= num; count++) {
		if(count % 3 == 0) {
			continue;
			
		}
		printf("%d ", count);
		
	}
	
	
	return 0;
}
