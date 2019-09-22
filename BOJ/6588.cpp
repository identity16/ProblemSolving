//
// Created by 신원준 on 2019. 09. 22..
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
	
	int i, j, n, maxN = 0;
	bool nums[1000001];
	
	do {
		cin >> n;
		if(maxN < n) {
			
			for (i = maxN + 1; i <= n; i+=2) 
	    		nums[i] = true;
			
			for (i = 3; i * i <= n; i+=2)
			{
				if (nums[i])
					for (j = maxN + i - (maxN % i); j <= n; j += i)
						nums[j] = false;
			}
			
			maxN = n;
		}
		
		for(i=3; i <= n / 2; i+=2) {
			if(nums[i] && nums[n-i]) {
				printf("%d = %d + %d\n", n, i, n-i);
				break;
			}
			
			if(i == n/2) {
				printf("Goldbach's conjecture is wrong.\n");
			}
		}
	} while(n != 0);
	
    return 0;
}