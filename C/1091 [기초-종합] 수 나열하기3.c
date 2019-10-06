#include<stdio.h>

int main(void) {
	int  m, d, n;
	long long int a;
	
	scanf("%lld %d %d %d", &a, &m, &d, &n);
	
	
	for(n -= 1; n >= 1; n--) {
		a = (a * m) + d;
		
	}
	
	printf("%lld", a);
	
	
	return 0;
}
