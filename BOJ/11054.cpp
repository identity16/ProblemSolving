//
// Created by 신원준 on 10/03/2019.
//

#include <cstdio>

int main() {
    int N, i, j;

    scanf("%d", &N);

    int A[N], D[2][N], max = 0;

    // 오름차순
    for(i=0; i<N; i++) {
        scanf("%d", &A[i]);

        D[0][i] = 1;    // 오름차순 길이

        for(j=i-1; j>=0; j--) {
            if(A[i] > A[j] && D[0][i] <= D[0][j]) {
                D[0][i] = D[0][j] + 1;
            }
        }
    }

    // 내림차순
    for(i=N-1; i>=0; i--) {
        D[1][i] = 1;

        for(j=i; j<N; j++) {
            if(A[i] > A[j] && D[1][i] <= D[1][j]) {
                D[1][i] = D[1][j] + 1;
            }
        }

        if(max < D[0][i] + D[1][i] - 1) {
            max = D[0][i] + D[1][i] - 1;
        }
    }

    printf("%d\n", max);

    return 0;
}
