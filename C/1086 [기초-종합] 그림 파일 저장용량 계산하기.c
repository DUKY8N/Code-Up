#include<stdio.h>

int main(void) {
	int width, hight, bit;
	
	
	scanf("%d %d %d", &width, &hight, &bit);
	
	double size = ((double)width * (double)hight * (double)bit);
	size /= (1024 * 1024 * 8);
	
	printf("%.2lf MB", size);
	
	
	return 0;
}
