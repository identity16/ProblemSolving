//
// Created by 신원준 on 2019. 09. 19..
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	// stdandard i/o -> file i/o
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
    char words[100][11];
	int alpha[100][26] = {0};
	int N, i, j, result = 0, len0;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf("%s", words[i]);
		int len = strlen(words[i]);
		for(j=0; j<len; j++) {
			alpha[i][words[i][j] - 'A']++;
		}
		
		if(i == 0) {
			continue;
		}
		
		int cnt=0, diff=0, flag=0;
		for(j=0; j<26; j++) {
			if(alpha[i][j] != alpha[0][j]) {
				if(abs(alpha[i][j] - alpha[0][j]) >= 2) {
					flag=1;
					break;
				}
				
				diff += alpha[i][j] - alpha[0][j];
				cnt++;
			}
		}
		
		if(!flag && ((diff == 0 && cnt > 2) 
		   || abs(diff) > 1 
		   || (abs(diff) == 1 && cnt > 1))) flag = 1;
		
		if(flag == 0) {
			result++;
		}
	}
	printf("%d\n", result);
	
	
	
	
    return 0;
}