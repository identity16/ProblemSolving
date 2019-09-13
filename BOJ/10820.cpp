//
// Created by 신원준 on 2019.09.13..
//

#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;

int main() {
	int N, i, j;
	int cnt_lower, cnt_upper, cnt_num, cnt_space;
	string S;
	
	while (getline(cin, S)) {
		if(S.length() == 0) break;
		
		cnt_lower = cnt_upper = cnt_num = cnt_space = 0;

		for(j=0; j<S.length(); j++) {
			if('a' <= S[j] && S[j] <= 'z') {
				cnt_lower++;
				continue;
			}
			
			if('A' <= S[j] && S[j] <= 'Z') {
				cnt_upper++;
				continue;
			}
			
			if('0' <= S[j] && S[j] <= '9') {
				cnt_num++;
				continue;
			}
			
			if(S[j] == ' ' || S[j] == '\t') {
				cnt_space++;
				continue;
			}
		}

		printf("%d %d %d %d\n", cnt_lower, cnt_upper, cnt_num, cnt_space);
	}
	
    return 0;
}