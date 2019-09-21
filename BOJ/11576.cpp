//
// Created by 신원준 on 2019. 09. 21..
//

#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int A, B, m, num, i, j;
	long long N = 0;
	
	stack<int> s;
	
	cin >> A >> B;
	cin >> m;
	
	for(i=m-1; i>=0; i--) {
		cin >> num;
		N += pow(A, i) * num;
	}
	
	// convert base to B
	while(N > 0) {
		s.push(N % B);
		N /= B;
	}
	
	while(!s.empty()) {
		cout << s.top();
		s.pop();
		if(!s.empty()) cout << ' ';
	}
	
    return 0;
}