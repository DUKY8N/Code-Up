#include<stdio.h>

int main(void) {
	int n, studentId[23] = {}, attendance[] = {}; 
	
	
	scanf("%d", &n); // 출석을 몇번하는지 n에 저장  
	
	for(int i = 0; i <= n - 1; i++) { // 부른 번호들을 attendance에 저장
		scanf("%d ", &attendance[i]);
	}
	
	for(int j = 0; j <= 22; j++) {
		for(int i = 0; i <= n - 1; i++) { // attendance횟수를 각각의 학번(studentId)에 기록 
			if(j + 1 == attendance[i]) {
				studentId[j] += 1;
			} 
		}
	}
	
	for(int j = 0; j <= 22; j++) { // 부른 번호들을 attendance에 저장
		printf("%d ", studentId[j]);
	}
	
	
	return 0;
}
