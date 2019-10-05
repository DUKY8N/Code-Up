#include<stdio.h>

int main(void) {
	int diceNum1, diceNum2;
	
	
	scanf("%d %d", &diceNum1, &diceNum2);
	
	for(int diceCount1 = 1; diceCount1 <= diceNum1; diceCount1++) {
		for(int diceCount2 = 1; diceCount2 <= diceNum2; diceCount2++) {
			printf("%d %d\n", diceCount1, diceCount2);
			
		}
		
	}
	
	
	return 0;
}
