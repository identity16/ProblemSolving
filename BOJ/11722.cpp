//
// Created by 신원준 on 10/03/2019.
//

#include <cstdio>

int main() {
    int N;

    scanf("%d", &N);

    int A[N], D[N], max = 0;

    for(int i=N-1; i>=0; i--) {
        scanf("%d", &A[i]);

        D[i] = 1;

        for(int j=i; j<N; j++) {
            if(A[i] < A[j] && D[i] <= D[j]) {
                D[i] = D[j] + 1;
            }
        }

        if(max < D[i]) {
            max = D[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
