//
// Created by 신원준 on 2019.09.13..
//

#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int T, i, j;
	char input[51];
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++) {
		scanf("%s", input);
		
		int cnt_left = 0, len = strlen(input);
		for(j=0; j<len; j++) {
			if(input[j] == '(') {
				cnt_left++;
				continue;
			}
			
			if(input[j] == ')') {
				if(cnt_left > 0) {
					cnt_left--;
				} else {
					break;
				}
			}
		}
		
		if(j==len && cnt_left == 0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	
    return 0;
}