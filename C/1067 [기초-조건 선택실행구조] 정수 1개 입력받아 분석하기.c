#include<stdio.h>

int main(void) {
	int num;
	
	
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		if(num > 0) {
			printf("plus\neven");
		
		} else {
			printf("minus\neven");
		
		}
		
	} else {
		if(num > 0) {
			printf("plus\nodd");
		
		} else {
			printf("minus\nodd");
		
		}
		
	}
	
	return 0;
}
