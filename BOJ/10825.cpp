//
// Created by 신원준 on 2019.09.12..
//

#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct {
	char name[11];
	int score[3];
} Student;

bool cmp(const Student &s1, const Student &s2){
	// 국어 내림차순
	if(s1.score[0] > s2.score[0]) {
		return true;
	}
	
	if(s1.score[0] < s2.score[0]) {
		return false;
	}
	
	// 영어 오름차순
	if(s1.score[1] < s2.score[1]) {
		return true;
	}
	
	if(s1.score[1] > s2.score[1]) {
		return false;
	}
	
	// 수학 내림차순
	if(s1.score[2] > s2.score[2]) {
		return true;
	}
	
	if(s1.score[2] < s2.score[2]) {
		return false;
	}
	
	// 이름 사전순
    if(strcmp(s1.name, s2.name) < 0) {
		return true;
	} else {
		return false;
	}
}

int main() {
    int N, i, j;
	
	scanf("%d", &N);
	
	Student students[N];
	
	for(i=0; i<N; i++) {
		scanf("%s %d %d %d", students[i].name, &students[i].score[0], &students[i].score[1], &students[i].score[2]);
	}
	
	sort(students, students+N, cmp);
	
	for(i=0; i<N; i++) {
		printf("%s\n", students[i].name);
	}
    return 0;
}