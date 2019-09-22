#include<stdio.h>

int main(void) {
	char word[1001]; // 문자열일경우 자릿수를 지정할것! 
	
	scanf("%s", word);
	for(int x = 0; word[x] != '\0'; x++) { // \0(null)은 문자(널 문자)이다 따옴표랑 함께쓰자(큰 따옴표는 안됨). 
		printf("\'%c\'\n", word[x]);
		
	}
	
	return 0;
}
