#include<stdio.h>

int main(void) {
	int a, r, n;
	
	
	scanf("%d %d %d", &a, &r, &n);
	
	for(; n > 1; n--) {
		a *= r;
		
	}
	
	printf("%d", a);
	
	
	return 0;
}
