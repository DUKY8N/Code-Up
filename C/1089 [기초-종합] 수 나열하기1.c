#include<stdio.h>

int main(void) {
	int a, d, n;
	
	
	scanf("%d %d %d", &a, &d, &n);
	
	for(; n > 1; n--) {
		a += d;
		
	}
	
	printf("%d", a);
	
	
	return 0;
}
