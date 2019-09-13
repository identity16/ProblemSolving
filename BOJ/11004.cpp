//
// Created by 신원준 on 2019.09.13..
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, K, i;
	
	scanf("%d %d", &N, &K);
	
	int numbers[N];
	
	for(i=0; i<N; i++) {
		scanf("%d", &numbers[i]);
	}
	
	sort(numbers, numbers + N);
	
	printf("%d\n", numbers[K-1]);
	
    return 0;
}