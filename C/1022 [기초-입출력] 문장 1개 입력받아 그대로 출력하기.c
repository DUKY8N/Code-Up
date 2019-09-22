#include<stdio.h>

int main(void) {
	char sentence[2001] = ""; // 2,000문자까지 입력
	
	fgets(sentence, 2000, stdin); // stdin = 키보드로 입력받기
	printf("%s", sentence);	
	
	return 0;
}
