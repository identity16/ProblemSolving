//
// Created by 신원준 on 2019.09.13..
//

#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int i, j, cnt[26] = {0};
	char S[101];
	
	scanf("%s", S);
	
	for(i=0; i<strlen(S); i++) {
		cnt[S[i] - 'a']++;
	}
	
	for(i=0; i<26; i++) {
		printf("%d ", cnt[i]);
	}
	
	printf("\n");
	
    return 0;
}