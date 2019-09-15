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
	int i, j, num;
	
	cin >> N;
	
	
	j = N.length() % 3;
	
	for(i=0; i<N.length(); i++) {
		num = N[i] - '0';
		switch(num) {
			case 0:
				if(i > 0) cout << "000";
				else if(N.length() == 1) cout << "0";
				break;
			case 1:
				if(i > 0) cout << "001";
				else cout << "1";
				break;
			case 2:
				if(i > 0) cout << "010";
				else cout << "10";
				break;
			case 3:
				if(i > 0) cout << "011";
				else cout << "11";
				break;
			case 4:
				cout << "100";
				break;
			case 5:
				cout << "101";
				break;
			case 6:
				cout << "110";
				break;
			case 7:
				cout << "111";
				break;
		}
	}
	
	cout << endl;
	
    return 0;
}
