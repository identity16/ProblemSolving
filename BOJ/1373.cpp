//
// Created by 신원준 on 2019.09.15..
//

#include <iostream>
#include <string>

using namespace std;

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	string N;
	int B, i, j, num, tmp;
	
	cin >> N;
	
	B = 2;
	tmp = 0;
	
	j = N.length() % 3;
	
	for(i=0; i<N.length(); i++) {
		if(j == 0) {
			j = 3;
			tmp = 0;
		}
		
		tmp *= B;
		num = N[i] - '0';
		tmp += num;
		
		j--;
		
		if(j == 0) {
			cout << tmp;
		}
	}
	
	cout << endl;
	
    return 0;
}
