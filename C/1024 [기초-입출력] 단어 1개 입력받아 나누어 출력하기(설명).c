#include<stdio.h>

int main(void) {
	char word[1001]; // ���ڿ��ϰ�� �ڸ����� �����Ұ�! 
	
	scanf("%s", word);
	for(int x = 0; word[x] != '\0'; x++) { // \0(null)�� ����(�� ����)�̴� ����ǥ�� �Բ�����(ū ����ǥ�� �ȵ�). 
		printf("\'%c\'\n", word[x]);
		
	}
	
	return 0;
}
