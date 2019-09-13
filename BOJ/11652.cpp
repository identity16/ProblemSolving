//
// Created by 신원준 on 2019.09.13..
//

#include <iostream>
#include <algorithm>

using namespace std;

typedef struct {
	long long num;
	int cnt=1;
	unsigned operator==(const long long n) {
		return (n==num);
    }
} Card;

bool cmp(const Card &s1, const Card &s2) {
	// 카운트 내림차순
	if(s1.cnt > s2.cnt) {
		return true;
	} else {
		if(s1.cnt == s2.cnt && s1.num < s2.num) {
			return true;
		}
		
		return false;
	}
}

int main() {
    int N, i, j;
	
	scanf("%d", &N);
	
	Card cards[N];
	
	int len=0;
	long long input;
	for(i=0; i<N; i++) {
		scanf("%lld", &input);
		
		Card *pos = find(cards, cards + len, input);
		
		if(pos == cards + len) {
			cards[len].num = input;
			len++;
		} else {
			pos->cnt++;
		}
	}
	
	sort(cards, cards+len, cmp);
	
	printf("%lld\n", cards[0].num);
	
    return 0;
}