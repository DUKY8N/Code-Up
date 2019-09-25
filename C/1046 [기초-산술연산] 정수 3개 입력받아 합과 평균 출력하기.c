#include<stdio.h>

int main(void) {
	int num1, num2, num3;
	long long int sum;
	
	scanf("%d %d %d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	printf("%lld\n%.1f", sum, (float)sum / 3); 
	
	return 0;
}
