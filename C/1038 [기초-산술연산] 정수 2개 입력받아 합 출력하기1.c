#include<stdio.h>

int main(void) {
	long long int num1, num2;
	
	scanf("%lld %lld", &num1, &num2); // %d�� %lld�� �ޱ����ʱ� 
	printf("%lld", num1 + num2);
	
	return 0;
}
