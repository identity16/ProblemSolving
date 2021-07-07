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
	
	int i, K, num, result = 0;
	
	stack<int> s;
	
	cin >> K;
	
	for(i=0; i<K; i++) {
		cin >> num;
		
        if(num == 0) {
            result -= s.top();
            s.pop();
        } else {
            s.push(num);
            result += num;
        }
	}
	
	cout << result;

    return 0;
}