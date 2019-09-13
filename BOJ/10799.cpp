//
// Created by 신원준 on 2019.09.13..
//

#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int main() {
	char input[100001];
	stack<int> s;
	int i, cnt = 0;
	
	scanf("%s", input);
	
	int len = strlen(input);
	
	char prev = '\0';
	for(i=0; i<len; i++) {
		if(input[i] == '(') {
			s.push(input[i]);
		} else if(input[i] == ')') {
			s.pop();
			if(prev == ')') {
				cnt += 1;
			} else {
				cnt += s.size();
			}
		}
		
		prev = input[i];
	}
	
	printf("%d\n", cnt);
	
    return 0;
}