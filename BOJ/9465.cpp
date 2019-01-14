//
// Created by 신원준 on 2018. 12. 28..
//

#include <cstdio>
#include <algorithm>

using namespace std;

template <typename T>
T maximum(T n1, T n2, T n3) {
    if(n1 > n2) {
        if(n3 > n1) {
            return n3;
        } else {
            return n1;
        }
    } else {
        if(n3 > n2) {
            return n3;
        } else {
            return n2;
        }
    }
}

int main() {
    int T, N;

    scanf("%d", &T);

    for(int i=0; i<T; i++) {
        scanf("%d", &N);

        int stickers[2][N];
        long dp[N][3];

        for(int j=0; j<2*N; j++) {
            scanf("%d", &stickers[j/N][j%N]);
        }

        dp[0][0] = 0;
        dp[0][1] = stickers[0][0];
        dp[0][2] = stickers[1][0];

        for (int j = 1; j < N; j++) {
            dp[j][0] = maximum(dp[j-1][0], dp[j-1][1], dp[j-1][2]);
            dp[j][1] = stickers[0][j] + max(dp[j-1][0], dp[j-1][2]);
            dp[j][2] = stickers[1][j] + max(dp[j-1][0], dp[j-1][1]);
        }

        printf("%ld\n", maximum(dp[N - 1][0], dp[N - 1][1], dp[N - 1][2]));
    }

    return 0;
}