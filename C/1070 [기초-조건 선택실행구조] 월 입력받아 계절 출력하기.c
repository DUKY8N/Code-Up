#include<stdio.h>

int main(void) {
	int num;
	
	
	scanf("%d", &num);
	
	switch(num) { // ("")½Öµû¿ÈÇ¥°¡ ¾Æ´Ï¶ó ('')µû¿ÈÇ¥ÀÏ°Í 
		case 12:
		case 1:
		case 2:
			printf("winter");
			break;
		
		case 3:
		case 4:
		case 5:
			printf("spring");
			break;
		
		case 6:
		case 7:
		case 8:
			printf("summer");
			break;
		
		case 9:
		case 10:
		case 11:
			printf("fall");
			break;
			
		default:
			printf("what?");
			
	}
	
	
	return 0;
}
