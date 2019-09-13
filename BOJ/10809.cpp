//
// Created by 신원준 on 2019.09.13..
//

#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int i, j, idx[26];
	char S[101];
	
	scanf("%s", S);
	
	for(i=0; i<26; i++) {
		idx[i] = -1;
	}
	
	for(i=0; i<strlen(S); i++) {
		if(idx[S[i] - 'a'] == -1) {
			idx[S[i] - 'a'] = i;
		}
	}
	
	for(i=0; i<26; i++) {
		printf("%d ", idx[i]);
	}
	
	printf("\n");
	
    return 0;
}