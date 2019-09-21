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
	
	int N, i;
	long long result = 1;
	
	cin >> N;
	
	for(i=1; i<=N; i++) {
		result *= i;
	}
	
	cout << result << endl;
	
	return 0;
}