#include<stdio.h>

int main(void) {
	int r, g, b, count = 0;
	
	
	scanf("%d %d %d", &r, &g, &b);
	
	for(int countR = 0; countR <= r - 1; countR++) {
		for(int countG = 0; countG <= g - 1; countG++) {
			for(int countB = 0; countB <= b - 1; countB++) {
				printf("%d %d %d\n", countR, countG, countB);
				count++;
				
			}
		
		}
		
	}
	
	printf("%d", count);
	
	
	return 0;
}
