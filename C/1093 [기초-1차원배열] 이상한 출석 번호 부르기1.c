#include<stdio.h>

int main(void) {
	int n, studentId[23] = {}, attendance[] = {}; 
	
	
	scanf("%d", &n); // �⼮�� ����ϴ��� n�� ����  
	
	for(int i = 0; i <= n - 1; i++) { // �θ� ��ȣ���� attendance�� ����
		scanf("%d ", &attendance[i]);
	}
	
	for(int j = 0; j <= 22; j++) {
		for(int i = 0; i <= n - 1; i++) { // attendanceȽ���� ������ �й�(studentId)�� ��� 
			if(j + 1 == attendance[i]) {
				studentId[j] += 1;
			} 
		}
	}
	
	for(int j = 0; j <= 22; j++) { // �θ� ��ȣ���� attendance�� ����
		printf("%d ", studentId[j]);
	}
	
	
	return 0;
}
