//
// Created by 신원준 on 2019.09.14..
//

#include <iostream>
#include <vector>

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
	
	int T, i, j, k, N, A, B, gcd;
	
	cin >> T;
	
	for(i=0; i<T; i++) {
		cin >> N;
		int tmp;
		long sum = 0;
		vector<int> v;
		
		for(j=0; j<N; j++) {
			cin >> tmp;
			v.push_back(tmp);
		}
		
		for(j=0; j<N; j++) {
			for(k=j+1; k<N; k++) {
				A = v[j] > v[k] ? v[k] : v[j];
				B = v[j] < v[k] ? v[k] : v[j];
				gcd = GCD(B, A);
				sum += gcd;
			}
		}
		
		cout << sum << endl;
	}
	
	
    return 0;
}
