#include<stdio.h>

int main(void) {
	char word[1001]; // ���ڿ��ϰ�� �ڸ����� �����Ұ�! 
	
	scanf("%s", word);
	for(int x = 0; word[x] != \0; x++) {
		printf("\'%c\'\n");
		
	}
	
	return 0;
}
