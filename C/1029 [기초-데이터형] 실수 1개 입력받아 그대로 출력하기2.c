#include<stdio.h>

int main(void) {
	double num;
	
	scanf("%lf", &num); // %d�� �ް����� ����! 
	printf("%.11lf", num); 
	// "%d"�� �Ҽ��� 7�ڸ����� �ݿø� �ǰ�,
	// "%11d"�� �Ҽ��� 12�ڸ����� �ݿø� �ȴ�. 
	
	return 0;
}
