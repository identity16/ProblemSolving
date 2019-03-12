//
// Created by 신원준 on 12/03/2019.
//
// TODO: Retry

#include <cstdio>

int main() {
    int N, i;

    scanf("%d", &N);

    long d[31];

    d[0] = 1;
    d[1] = 0;
    d[2] = 3;
    d[3] = 0;

    for(i=4; i<=N; i++) {
        if(i % 2 == 1) {
            d[i] = 0;
        } else {
            d[i] = 3 * d[i-2] + 4 * d[i-4];
        }
    }

    printf("%ld\n", d[N]);

    return 0;
}