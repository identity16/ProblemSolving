//
// Created by 신원준 on 2019.09.13..
//

#include <cstdio>
#include <cstring>
#include <deque>

using namespace std;

int main() {
	int N, i, param;
	char command[15];
	
	deque<int> d;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++) {
		scanf("%s", command);
		
		// printf("command: %s\n", command);
		if(strcmp("size", command) == 0) {
			param = (int) d.size();
			printf("%d\n", param <= 0 ? 0 : param);
		} else if(strcmp("empty", command) == 0) {
			printf("%d\n", d.empty() ? 1 : 0);
		} else if(strcmp("front", command) == 0) {
			printf("%d\n", d.empty() ? -1 : d.front());
		} else if(strcmp("back", command) == 0) {
			printf("%d\n", d.empty() ? -1 : d.back());
		} else if(strcmp("push_front", command) == 0) {
			scanf("%d", &param);
			d.push_front(param);
		} else if(strcmp("push_back", command) == 0) {
			scanf("%d", &param);
			d.push_back(param);
		} else if(strcmp("pop_front", command) == 0) {
			param = d.empty() ? -1 : d.front();
			if(param != -1) d.pop_front();
			printf("%d\n", param);
		} else if(strcmp("pop_back", command) == 0) {
			param = d.empty() ? -1 : d.back();
			if(param != -1) d.pop_back();
			printf("%d\n", param);
		}
	}
	
    return 0;
}