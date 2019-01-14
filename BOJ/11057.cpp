//
// Created by 신원준 on 2018. 12. 28..
//

#include <stdio.h>
#include <vector>

using namespace std;

int main() {
    int N, result = 10;

    scanf("%d", &N);

    int dp[N][10];

    for(int i=0; i<10; i++) {
        dp[0][i] = 1;
    }

    for(int i=1; i<N; i++) {
        dp[i][9] = dp[i-1][9];

        if(i == N-1) result = dp[i][9];

        for(int j=8; j>=0; j--) {
            dp[i][j] = dp[i-1][j] + dp[i][j+1];
            dp[i][j] %= 10007;
            if(i == N-1) {
                result += dp[i][j];
            }
        }
    }

    printf("%d\n", result % 10007);

    return 0;
}