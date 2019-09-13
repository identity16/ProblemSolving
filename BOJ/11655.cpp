//
// Created by 신원준 on 2019.09.13..
//

#include <iostream>

using namespace std;

char caesar(char c) {
	if(('a' <= c && c < 'a' + 13) || ('A' <= c && c < 'A' + 13)) {
		c += 13;
	} else if(('z' >= c && c > 'z' - 13) || ('Z' >= c && c > 'Z' - 13)) {
		c -= 13;
	}
	
	return c;
}

int main() {
	string S;
	int i;
	
	getline(cin, S);
	
	int len = S.length();
	
	for(i=0; i<len; i++) {
		printf("%c", caesar(S[i]));
	}
	printf("\n");
    return 0;
}