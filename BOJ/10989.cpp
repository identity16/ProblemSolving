//
// Created by 신원준 on 2019.09.12..
//

#include <cstdio>

using namespace std;

int main() {
    int N, i, j, num;
	
	scanf("%d", &N);
	
	int numbers[10001] = {0};
	for(i=0; i<N; i++) {
		scanf("%d", &num);
		numbers[num]++;
	}
	
	for(i=1; i<=10000; i++) {
		for(j=0; j<numbers[i]; j++) {
			printf("%d\n", i);
		}
	}
    return 0;
}