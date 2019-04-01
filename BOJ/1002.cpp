//
// Created by 신원준 on 12/03/2019.
//

#include <cstdio>

int main() {
    int i, N, A, B;

    scanf("%d", &N);

    for(i=0; i<N; i++) {
        scanf("%d %d", &A, &B);

        printf("%d\n", A+B);
    }

    return 0;
}