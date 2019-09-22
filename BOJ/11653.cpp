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
	bool nums[10000001];
	
	cin >> n;

	int tmp = n;
	
	for (i = 2; i <= n; i++) 
		nums[i] = true;

	for (i = 2; i * i <= n; i++)
	{
		if (nums[i]) {
			while(1) {
				if(tmp % i == 0) {
					printf("%d\n", i);
					tmp /= i;
				} else {
					break;
				}
			}
			
			for (j = i * i; j <= n; j += i)
				nums[j] = false;
		}
	}
	
	if(tmp != 1) printf("%d\n", tmp);
	
    return 0;
}