#include<stdio.h>

int main(void) {
	int userAccessCycle1, userAccessCycle2, userAccessCycle3, day = 1;
	
	
	scanf("%d %d %d", &userAccessCycle1, &userAccessCycle2, &userAccessCycle3);
	
	while(day % userAccessCycle1 != 0 || day % userAccessCycle2 != 0 || day % userAccessCycle3 != 0) {
		day++;
	}
	
	printf("%d", day);
	
	
	return 0;
}
