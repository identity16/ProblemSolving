//
// Created by 신원준 on 2018. 12. 28..
//

#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int N;

    scanf("%d", &N);

    long dp[N][2];

    dp[0][0] = 1;
    dp[0][1] = 1;
    dp[1][0] = 2;
    dp[1][1] = 1;

    for(int i=2; i<N; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1];
        dp[i][1] = dp[i-1][0];
    }

    printf("%ld\n", dp[N-1][1]);

    return 0;
}