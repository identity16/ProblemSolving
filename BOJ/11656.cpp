//
// Created by 신원준 on 2019.09.14.
//

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
char S[1001];

bool cmp(const int &a, const int &b) {
	if(strcmp(S+a, S+b) < 0) {
		return true;
	} else {
		return false;
	}
}

int main() {
	
	int len, i, j, idx[1001];
	
	scanf("%s", S);
	len = strlen(S);
	
	for(i=0; i<len; i++) {
		idx[i] = i;
	}
	
	sort(idx, idx + len, cmp);
	
	for(i=0; i<len; i++) {
		printf("%s\n", S + idx[i]);
	}
	
    return 0;
}