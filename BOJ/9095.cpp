//
// Created by 신원준 on 2018. 12. 27..
//

#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    int T, n, calc_n=3;
    vector<int> dp(12);

    fill(dp.begin(), dp.end(), -1);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    scanf("%d", &T);

    for(int i=0; i<T; i++) {
        scanf("%d", &n);

        if(n > calc_n) {
            for(calc_n += 1; calc_n<=n; calc_n++) {
                dp[calc_n] = dp[calc_n-1] + dp[calc_n-2] + dp[calc_n-3];
            }
            calc_n--;
        }

        printf("%d\n", dp[n]);
    }

    return 0;
}