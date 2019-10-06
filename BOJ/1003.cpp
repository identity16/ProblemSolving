//
// Created by 신원준 on 2019. 10 .06..
//

#include <iostream>

using namespace std;

int c0, c1;
int count0[41] = {0}, count1[41] = {0};
int fibo[41] = {0};

int fibonacci(int n) {

    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        if(fibo[n] > 0) return fibo[n];
        fibo[n] = fibonacci(n-1) + fibonacci(n-2);
        count0[n] = count0[n-1] + count0[n-2];
        count1[n] = count1[n-1] + count1[n-2];
        c0 += count0[n];
        c1 += count1[n];
        return fibo[n];
    }
}

int main() {
    // stdandard i/o -> file i/o
// 	freopen("in.txt","r",stdin);
// 	freopen("out.txt","w",stdout);

	// cin optimization
	ios_base::sync_with_stdio(false);
	cin.tie(0);

    int i, T, N;

    cin >> T;

    count0[0] = 1;
    count1[1] = 1;

    for(i=0; i<T; i++) {
        c0 = 0;
        c1 = 0;

        cin >> N;

        fibonacci(N);

        cout << count0[N] << " " << count1[N] << endl;
    }

    return 0;
}