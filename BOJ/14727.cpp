//
// Created by 신원준 on 2019. 09. 19..
//

#include <iostream>

using namespace std;

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	long long N, i, j;
	long long h[100000];
	
	cin >> N;
	
	for(i=0; i<N; i++) {
		cin >> h[i];
	}
	
	long long max = 0;
	for(i=0; i<N; i++) {
		int cnt = 1;
		if(i > 0 && h[i-1] == h[i]) continue;
		
		// L
		for(j=i-1; j>=0; j--) {
			if(h[j] < h[i]) break;
			
			cnt++;
		}
		// R
		for(j=i+1; j<N; j++) {
			if(h[j] < h[i]) break;
			
			cnt++;
		}
		
		if(max < h[i] * cnt) max = h[i] * cnt;
	}
	
	cout << max << endl;
	
    return 0;
}