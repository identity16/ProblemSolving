//
// Created by 신원준 on 12/03/2019.
//

#include <cstdio>

int main() {
    int i, N;

    scanf("%d", &N);

    int d[N+1], a[N+1];

    a[0] = d[0] = 0;

    for(i=1; i<=N; i++) {
        scanf("%d", &a[i]);

        if (i == 1) {
            d[i] = a[i];
            continue;
        }

        if (i == 2) {
            d[i] = a[i] + a[i - 1];
            continue;
        }

        d[i] = d[i - 3] + a[i - 1] + a[i];

        if (d[i] < d[i - 2] + a[i]) {
            d[i] = d[i - 2] + a[i];
        }
    }
    printf("%d\n", d[N]);

    return 0;
}