//
// Created by 신원준 on 2019. 09. 21..
//

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	// stdandard i/o -> file i/o
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	
	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int i, j, N, M;
	
	cin >> M >> N;
	bool nums[N+1];

	for (int i = 2; i <= N; i++) 
	    nums[i] = true;

	
	for (i = 2; i * i <= N; i++)
	{
		if (nums[i])
			for (j = i * i; j <= N; j += i)
			    nums[j] = false;
	}
	
	for(i=M; i<=N; i++) {
		if(i == 1 || !nums[i]) continue;
		
		printf("%d\n", i);
	}
	
    return 0;
}