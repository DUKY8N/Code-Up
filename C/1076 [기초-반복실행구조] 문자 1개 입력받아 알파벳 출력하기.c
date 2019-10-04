include<stdio.h>

int main(void) {
	char leter, leterCount;
	
	
	scanf("%c", &leter);
	leterCount = 'a'; // C언어에서 문자는 ''(작은따옴표)로 묶어서 표현함. 
	
	do {
		printf("%c ", leterCount);
		
	} while(++leterCount <= leter);
	
	
	return 0;
}
