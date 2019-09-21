//
// Created by 신원준 on 2019. 09. 21..
//

#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

// N / -2
long long division_m2(long long N) {
	// 홀수인 음수
	if(N % 2 && N < 0) {
		N -= 1;
	}
	
	long long absN = abs(N), ret;
	
	ret = absN / 2;
	if(N > 0) {
		ret = -ret;
	}
	
	return ret;
}

// N % -2
int remainder_m2(long long N) {
	if(N % 2) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	stack<long long> result;
	long long N;
	
	cin >> N;
	
	if(N == 0) {
		cout << 0 << endl;
		return 0;
	}
	
	while(N != 0) {
		result.push(remainder_m2(N));
		N = division_m2(N);
	}
	
	while(!result.empty()) {
		cout << result.top();
		result.pop();
	}
	
    return 0;
}