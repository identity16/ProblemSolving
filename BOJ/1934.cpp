//
// Created by 신원준 on 2019.09.14..
//

#include <iostream>
#include <list>

using namespace std;

int GCD(int a, int b) {
	return b ? GCD(b, a%b) : a;
}

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int T, i, A, B, gcd;
	cin >> T;
	for(i=0; i<T; i++) {
		cin >> A >> B;

		gcd = GCD(A, B);

		cout << gcd * (A/gcd) * (B/gcd) << endl;
	}
    return 0;
}
