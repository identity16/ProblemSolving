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
	
	int N, i, result = 0;
	
	cin >> N;
	
	for(i=5; i<=N; i*=5) {
		result += N / i;
	}
	
	cout << result << endl;
	
	return 0;
}