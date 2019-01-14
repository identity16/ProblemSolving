//
// Created by 신원준 on 2018. 12. 27..
//

#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    vector<int> dp(1001);

    fill(dp.begin(), dp.end(), 0);

    dp[1] = 1;
    dp[2] = 3;

    scanf("%d", &n);

    for(int i=3; i<=n; i++) {
        dp[i] = dp[i-1] + (2 * dp[i-2]);
        dp[i] %= 10007;
    }

    printf("%d\n", dp[n]);

    return 0;
}