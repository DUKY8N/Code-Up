#include<stdio.h>

int main(void) {
	int num1, num2;
	
	scanf("%d %d", &num1, &num2);
	printf("%d", num1 & num2); // 모범답안: !(a||b)
	
	return 0;
}
