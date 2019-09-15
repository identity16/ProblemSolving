//
// Created by 신원준 on 2019.09.14..
//

#include <iostream>
#include <list>

using namespace std;

unsigned long long GCD(unsigned long long a, unsigned long long b) {
	return b ? GCD(b, a%b) : a;
}

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	unsigned long long A, B, gcd;
	cin >> A >> B;
	
	if(A > B) {
		long long tmp;
		tmp = A;
		A = B;
		B = tmp;
	}

	gcd = GCD(B, A);

	unsigned long long i;
	
	for(i=0; i<gcd; i++) {
		cout << 1;
	}
	cout << endl;
	
    return 0;
}
