//
// Created by 신원준 on 2019. 09. 21..
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j, N, cnt=0, num;
	
	cin >> N;
	
	for(i=0; i<N; i++) {
		cin >> num;
		if(num == 2) cnt++;
		if(num % 2 == 0 || num == 1) continue;
		
		bool isPrime = true;
		for(j=3; j<=sqrt(num); j++) {
			if(num % j == 0) {
				isPrime = false;
				break;
			}
		}
		
		if(isPrime) cnt++;
	}
	
	cout << cnt << endl;
	
    return 0;
}