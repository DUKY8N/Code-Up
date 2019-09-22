#include<stdio.h>

int main(void) {
	double num;
	
	scanf("%lf", &num); // %d로 햇갈리지 말자! 
	printf("%.11lf", num); 
	// "%d"는 소수점 7자리에서 반올림 되고,
	// "%11d"는 소수점 12자리에서 반올림 된다. 
	
	return 0;
}
