#include<stdio.h>

int main(void) {
	char sentence[2001] = ""; // 2,000���ڱ��� �Է�
	
	fgets(sentence, 2000, stdin); // stdin = Ű����� �Է¹ޱ�
	printf("%s", sentence);	
	
	return 0;
}
