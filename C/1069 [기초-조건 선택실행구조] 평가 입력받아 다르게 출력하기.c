#include<stdio.h>

int main(void) {
	char letter;
	
	
	scanf("%c", &letter);
	
	switch(letter) { // ("")½Öµû¿ÈÇ¥°¡ ¾Æ´Ï¶ó ('')µû¿ÈÇ¥ÀÏ°Í 
		case 'A':
			printf("best!!!");
			break;
		
		case 'B':
			printf("good!!");
			break;
		
		case 'C':
			printf("run!");
			break;
		
		case 'D':
			printf("slowly~");
			break;
			
		default:
			printf("what?");
			
	}
	
	
	return 0;
}
