//
// Created by 신원준 on 12/03/2019.
//

#include <cstdio>
#include <math.h>

int main() {
    int i, j, N;

    scanf("%d", &N);

    int d[N+1];

    d[0] = 0;
    d[1] = 1;

    for(i=2; i<=N; i++) {
        d[i] = d[i-1] + 1;

        for (j = (int) floor(sqrt(i)); j > 1; j--) {
            if(d[i] > 1 + d[i-j*j]) {
                d[i] = 1 + d[i-j*j];
            }
        }
    }

    printf("%d\n", d[N]);


    return 0;
}