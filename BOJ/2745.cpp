//
// Created by 신원준 on 2019.09.15..
//

#include <iostream>
#include <string>

using namespace std;

int ch2int(char c) {
	if('0' <= c && c <= '9') return c - '0';
	
	if('A' <= c && c <= 'Z') return c - 'A' + 10;
	return -1;
}

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	string N;
	unsigned long result = 0;
	int B, i, num;
	
	cin >> N >> B;
	
	for(i=0; i<N.length(); i++) {
		result *= B;
		num = ch2int(N[i]);
		result += num;
	}
	
	cout << result << endl;
	
    return 0;
}
