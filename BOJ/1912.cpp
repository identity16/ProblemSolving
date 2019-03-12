//
// Created by 신원준 on 11/03/2019.
//

#include <cstdio>

int main() {
    int N, i, max;

    scanf("%d", &N);

    int A[N], D[N];

    for(i=0; i<N; i++) {
        scanf("%d", &A[i]);

        if(i == 0) {
            max = A[i];
        }

        D[i] = A[i];

        if(i > 0 && D[i-1] > 0) {
            D[i] += D[i-1];
        }

        max = max < D[i] ? D[i] : max;
    }

    printf("%d\n", max);

    return 0;
}