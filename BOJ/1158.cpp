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
	
	int N, K, i, idx, step;
	list<int> L;
	list<int>::iterator it;
	
	cin >> N >> K;
	
	for(i=1; i<=N; i++) {
		L.push_back(i);
	}
	
	idx=0;
	step = K-1;
	cout << "<";
	while(1) {
		it = L.begin();
		
		idx += step;

		while(idx >= N) {
			idx -= N;
		}
		
		advance(it, idx);
		
		cout << *it;
		it = L.erase(it);
		
		N--;
		
		if(L.empty()) break;
		
		cout << ", ";
	}
	
	cout << ">" << endl;
	
    return 0;
}