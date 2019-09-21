#include<stdio.h>

int main(void) {
	// ~ scanf로 문자형 입력을 받을 때 ~
	//
	// %c로 입력받으면 "제일 앞의 문자"를 입력 받을 수 있게 되고, 
	// %s로 받으면 "하나의 단어"를 입력 받을 수 있다.
	// 예를들어 apple의 경우 %c는 'a'가 %s의 경우 'apple'을 전달인자로 받게 된다.
	
	char word[51] = ""; 
	// 문자를 50개 저장하기 위해서는 char data[51] 로 선언하면 된다.
	// scanf로 문자를 입력을 받을 땐 일반 int형 변수와는 달리 앞에 &를 붙이지 않는다.

	scanf("%s", word);
	printf("%s", word);
	
	return 0;
}
