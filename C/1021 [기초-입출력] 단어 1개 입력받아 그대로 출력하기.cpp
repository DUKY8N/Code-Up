#include<stdio.h>

int main(void) {
	char word[51]; //문자를 50개 저장하기 위해서는 char data[51] 로 선언하면 된다.
	
	scanf("%c", &word);
	printf("%c", word);
	
	return 0;
}
