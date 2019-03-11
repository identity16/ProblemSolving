//
// Created by 신원준 on 10/03/2019.
//

#include <cstdio>

int main() {
    int N;

    scanf("%d", &N);

    int A[N], D[N], max = 0;

    for(int i=0; i<N; i++) {
        scanf("%d", &A[i]);

        D[i] = 0;

        for(int j=i-1; j>=0; j--) {
            if(A[i] > A[j] && D[i] < D[j]) {
                D[i] = D[j];
            }
        }

        D[i] += A[i];

        if(max < D[i]) {
            max = D[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
