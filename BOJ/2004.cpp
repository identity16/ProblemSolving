//
// Created by 신원준 on 2019. 09. 21..
//

#include <iostream>

using namespace std;

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	long long N, K, i, result, fives = 0, twos = 0;
	
	cin >> N >> K;
	
	for(i=5; i<=N; i*=5) {
		fives += N / i;
	}
	
	for(i=5; i<=N-K; i*=5) {
		fives -= (N-K) / i;
	}
	
	for(i=5; i<=K; i*=5) {
		fives -= K / i;
	}
	
	
	for(i=2; i<=N; i*=2) {
		twos += N / i;
	}
	
	for(i=2; i<=N-K; i*=2) {
		twos -= (N-K) / i;
	}
	
	for(i=2; i<=K; i*=2) {
		twos -= K / i;
	}
	
	result = fives < twos ? fives : twos;
	
	cout << result << endl;
	
	return 0;
}