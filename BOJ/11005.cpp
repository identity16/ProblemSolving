//
// Created by 신원준 on 2019.09.15..
//

#include <iostream>
#include <list>

using namespace std;



int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	char c[36] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	
	unsigned long N;
	int B;
	list<int> l;
	list<int>::reverse_iterator it;
	
	cin >> N >> B;
	while(N > 0) {
		l.push_back(N % B);
		N /= B;
	}
	
	it = l.rbegin();
	while(it != l.rend()) {
		cout << c[*it];
		it++;
	}
	cout << endl;
	
    return 0;
}
